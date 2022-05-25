#include "s21_decimal.h"

// Арифметические операторы
// s21_decimal s21_add(s21_decimal num1, s21_decimal num2) {
//     s21_decimal res;
//     return res;
// }

// s21_decimal s21_sub(s21_decimal num1, s21_decimal num2) {
//     s21_decimal res;
//     return res;
// }

// s21_decimal s21_mul(s21_decimal num1, s21_decimal num2) {
//     s21_decimal res;
//     return res;
// }

// s21_decimal s21_div(s21_decimal num1, s21_decimal num2) {
//     s21_decimal res;
//     return res;
// }

// s21_decimal s21_mod(s21_decimal num1, s21_decimal num2) {
//     s21_decimal res;
//     return res;
// }

// Операторы сравнения
// int s21_is_less(s21_decimal num1, s21_decimal num2) {
//     int res;
//     return res;
// }

// int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2) {
//     int res;
//     return res;
// }

// int s21_is_greater(s21_decimal num1, s21_decimal num2) {
//     int res;
//     return res;
// }

// int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2) {
//     int res;
//     return res;
// }

// int s21_is_equal(s21_decimal num1, s21_decimal num2) {
//     int res;
//     return res;
// }

// int s21_is_not_equal(s21_decimal num1, s21_decimal num2) {
//     int res;
//     return res;
// }

// Преобразователи
// int s21_from_int_to_decimal(int src, s21_decimal *dst) {
//     int res;
//     return res;
// }

// int s21_from_float_to_decimal(float src, s21_decimal *dst) {
//     int res;
//     return res;
// }

// int s21_from_decimal_to_int(s21_decimal src, int *dst) {
//     int res;
//     return res;
// }

// int s21_from_decimal_to_float(s21_decimal src, float *dst) {
//     int res;
//     return res;
// }

// Другие функции
// s21_decimal s21_floor(s21_decimal num) {
//     s21_decimal res;
//     return res;
// }

// s21_decimal s21_round(s21_decimal num) {
//     s21_decimal res;
//     return res;
// }

// s21_decimal s21_truncate(s21_decimal num) {
//     s21_decimal res;
//     return res;
// }

// s21_decimal s21_negate(s21_decimal num) {
//     s21_decimal res;
//     return res;
// }

/* дополнительные функции ТУХТАЛЫШ */
void setBit(s21_decimal *d, int i, int bit_value) {
  unsigned int mask = 1u << (i % 32);
  if (bit_value == 1) d->bits[i / 32] |= mask;
  if (bit_value == 0) d->bits[i / 32] &= ~mask;
}

int getBit(s21_decimal d, int index) {
  unsigned int mask = 1u << (index % 32);
  return d.bits[index / 32] & mask;
}

int getSign(s21_decimal d) {
  int bit = 0;
  unsigned int mask = 1u << 31;
  if ((d.bits[3] & mask) != 0) bit = 1;
  return bit;
}

void setSign(s21_decimal *d, int sign) {
  unsigned int mask = 1u << 31;
  if (sign == 1) d->bits[3] |= mask;
  if (sign == 0) d->bits[3] &= ~mask;
}

int getScale(s21_decimal d) {
  setSign(&d, 0);
  d.bits[3] >>= 16;
  return d.bits[3];
}
void setScale(s21_decimal *d, int scale_value) {
  int sign = getSign(*d);
  d->bits[3] = scale_value;
  d->bits[3] <<= 16;
  if (sign == 1) setSign(d, 1);
}
