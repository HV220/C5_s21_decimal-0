#ifndef SRC_S21_DECIMAL_H_
#define SRC_S21_DECIMAL_H_

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef enum {
    s21_NORMAL_VALUE = 0,
    s21_INFINITY = 1,
    s21_NEGATIVE_INFINITY = 2,
    s21_NAN = 3
} value_type_t;

typedef struct {
    int bits[4];
    value_type_t value_type;
} s21_decimal;

// Арифметические операторы
    int s21_add(s21_decimal num1, s21_decimal num2);
    int s21_sub(s21_decimal num1, s21_decimal num2);
    int s21_mul(s21_decimal num1, s21_decimal num2);
    int s21_div(s21_decimal num1, s21_decimal num2);
    int s21_mod(s21_decimal num1, s21_decimal num2);

// Операторы сравнения
    int s21_is_less(s21_decimal num1, s21_decimal num2);
    int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2);
    int s21_is_greater(s21_decimal num1, s21_decimal num2);
    int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2);
    int s21_is_equal(s21_decimal num1, s21_decimal num2);
    int s21_is_not_equal(s21_decimal num1, s21_decimal num2);

// Преобразователи
    int s21_from_int_to_decimal(int src, s21_decimal *dst);
    int s21_from_float_to_decimal(float src, s21_decimal *dst);
    int s21_from_decimal_to_int(s21_decimal src, int *dst);
    int s21_from_decimal_to_float(s21_decimal src, float *dst);

// Другие функции
    s21_decimal s21_floor(s21_decimal num);
    s21_decimal s21_round(s21_decimal num);
    s21_decimal s21_truncate(s21_decimal num);
    s21_decimal s21_negate(s21_decimal num);

// cauliflb
    void setBit(s21_decimal *d, int i, int bit_value);
    int getBit(s21_decimal d, int index);
    int getSign(s21_decimal d);
    void setSign(s21_decimal *d, int sign);
    int getScale(s21_decimal d);
    void setScale(s21_decimal *d, int scale_value);

#endif  // SRC_S21_DECIMAL_H_
