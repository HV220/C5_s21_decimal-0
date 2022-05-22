.PHONY: all clean test s21_decimal.a check rebuild open gcov_report
CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
LINUX=-lsubunit -lrt -lpthread -lm
LIBS=-lcheck
LFLAGS=-fprofile-arcs -ftest-coverage
OS=$(shell uname -s)

all: clean s21_decimal.a test

s21_decimal.a: s21_decimal.o
	ar rcs s21_decimal.a s21_decimal.o
	cp s21_decimal.a libs21_decimal.a
	cp s21_decimal.a ls21_decimal.a
	ranlib libs21_decimal.a
	ranlib ls21_decimal.a

s21_decimal.o: s21_decimal.c
	$(CC) -c s21_decimal.c -o s21_decimal.o

test: s21_decimal.a
ifeq ($(OS), Darwin)
	$(CC) test.c s21_decimal.a -o test.out $(LIBS)
	./test.out
else
	$(CC) test.c s21_decimal.a -o test.out $(LIBS) $(LINUX)
	./test.out
endif

gcov_report: s21_decimal.a
ifeq ($(OS), Darwin)
	$(CC) $(CFLAGS) $(LFLAGS) test.c s21_decimal.a -o test.out $(LIBS)
else
	$(CC) $(CFLAGS) $(LFLAGS) test.c s21_decimal.a -o test.out $(LIBS) $(LINUX)
endif
	./test.out
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info

open:
	open report/index.html

rebuild: clean all

check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	python3 ../materials/linters/cpplint.py --extensions=c *.c *.h
	make test
	CK_FORK=no leaks --atExit -- ./test.out
	make clean

clean:
	rm -rf *.gc* *.o *.a *.out *.info test.out
	rm -rf report
