#include <check.h>
#include <stdlib.h>

#include "s21_decimal.h"

//  Арифметические операторы
START_TEST(test_s21_add) {
    // test
}
END_TEST

START_TEST(test_s21_sub) {
    // test
}
END_TEST

START_TEST(test_s21_mul) {
    // test
}
END_TEST

START_TEST(test_s21_div) {
    // test
}
END_TEST

START_TEST(test_s21_mod) {
    // test
}
END_TEST

//  Операторы сравнения
START_TEST(test_s21_is_less) {
    // test
}
END_TEST

START_TEST(test_s21_is_less_or_equal) {
    // test
}
END_TEST

START_TEST(test_s21_is_greater) {
    // test
}
END_TEST

START_TEST(test_s21_is_greater_or_equal) {
    // test
}
END_TEST

START_TEST(test_s21_is_equal) {
    // test
}
END_TEST

START_TEST(test_s21_is_not_equal) {
    // test
}
END_TEST

//  Преобразователи
START_TEST(test_s21_from_int_to_decimal) {
    // test
}
END_TEST

START_TEST(test_s21_from_float_to_decimal) {
    // test
}
END_TEST

START_TEST(test_s21_from_decimal_to_int) {
    // test
}
END_TEST

START_TEST(test_21_from_decimal_to_float) {
    // test
}
END_TEST

//  Другие функции
START_TEST(test_s21_floor) {
    // test
}
END_TEST

START_TEST(test_s21_round) {
    // test
}
END_TEST

START_TEST(test_s21_truncate) {
    // test
}
END_TEST

START_TEST(test_s21_negate) {
    // test
}
END_TEST

int main() {
    Suite *suite = suite_create("S21_Debuger");
    SRunner *srunner = srunner_create(suite);

    //  Арифметические операторы
    TCase *s21_addCase = tcase_create("s21_addCase");
    suite_add_tcase(suite, s21_addCase);
    tcase_add_test(s21_addCase, test_s21_add);

    TCase *s21_subCase = tcase_create("s21_subCase");
    suite_add_tcase(suite, s21_subCase);
    tcase_add_test(s21_subCase, test_s21_sub);

    TCase *s21_mulCase = tcase_create("s21_mulCase");
    suite_add_tcase(suite, s21_mulCase);
    tcase_add_test(s21_mulCase, test_s21_mul);

    TCase *s21_divCase = tcase_create("s21_divCase");
    suite_add_tcase(suite, s21_divCase);
    tcase_add_test(s21_divCase, test_s21_div);

    TCase *s21_modCase = tcase_create("s21_modCase");
    suite_add_tcase(suite, s21_modCase);
    tcase_add_test(s21_modCase, test_s21_mod);

    //  Операторы сравнения
    TCase *s21_is_lessCase = tcase_create("s21_is_lessCase");
    suite_add_tcase(suite, s21_is_lessCase);
    tcase_add_test(s21_is_lessCase, test_s21_is_less);

    TCase *s21_is_less_or_equalCase = tcase_create("s21_is_less_or_equalCase");
    suite_add_tcase(suite, s21_is_less_or_equalCase);
    tcase_add_test(s21_is_less_or_equalCase, test_s21_is_less_or_equal);

    TCase *s21_is_greaterCase = tcase_create("s21_is_greaterCase");
    suite_add_tcase(suite, s21_is_greaterCase);
    tcase_add_test(s21_is_greaterCase, test_s21_is_greater);

    TCase *s21_is_greater_or_equalCase =
        tcase_create("s21_is_greater_or_equalCase");
    suite_add_tcase(suite, s21_is_greater_or_equalCase);
    tcase_add_test(s21_is_greater_or_equalCase, test_s21_is_greater_or_equal);

    TCase *s21_is_equalCase = tcase_create("s21_is_equalCase");
    suite_add_tcase(suite, s21_is_equalCase);
    tcase_add_test(s21_is_equalCase, test_s21_is_equal);

    TCase *s21_is_not_equalCase = tcase_create("s21_is_not_equalCase");
    suite_add_tcase(suite, s21_is_not_equalCase);
    tcase_add_test(s21_is_not_equalCase, test_s21_is_not_equal);

    //  Преобразователи
    TCase *s21_from_int_to_decimalCase =
        tcase_create("s21_from_int_to_decimalCase");
    suite_add_tcase(suite, s21_from_int_to_decimalCase);
    tcase_add_test(s21_from_int_to_decimalCase, test_s21_from_int_to_decimal);

    TCase *s21_from_float_to_decimalCase =
        tcase_create("s21_from_float_to_decimalCase");
    suite_add_tcase(suite, s21_from_float_to_decimalCase);
    tcase_add_test(s21_from_float_to_decimalCase,
                   test_s21_from_float_to_decimal);

    TCase *s21_from_decimal_to_intCase =
        tcase_create("s21_from_decimal_to_intCase");
    suite_add_tcase(suite, s21_from_decimal_to_intCase);
    tcase_add_test(s21_from_decimal_to_intCase, test_s21_from_decimal_to_int);

    TCase *s21_from_decimal_to_floatCase =
        tcase_create("21_from_decimal_to_floatCase");
    suite_add_tcase(suite, s21_from_decimal_to_floatCase);
    tcase_add_test(s21_from_decimal_to_floatCase,
                   test_21_from_decimal_to_float);

    //  Другие функции
    TCase *s21_floorCase = tcase_create("s21_floorCase");
    suite_add_tcase(suite, s21_floorCase);
    tcase_add_test(s21_floorCase, test_s21_floor);

    TCase *s21_roundCase = tcase_create("s21_roundCase");
    suite_add_tcase(suite, s21_roundCase);
    tcase_add_test(s21_roundCase, test_s21_round);

    TCase *s21_truncateCase = tcase_create("s21_truncateCase");
    suite_add_tcase(suite, s21_truncateCase);
    tcase_add_test(s21_truncateCase, test_s21_truncate);

    TCase *s21_negateCase = tcase_create("s21_negateCase");
    suite_add_tcase(suite, s21_negateCase);
    tcase_add_test(s21_negateCase, test_s21_negate);

    srunner_run_all(srunner, CK_VERBOSE);
    int number_failed = srunner_ntests_failed(srunner);
    srunner_free(srunner);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
