#include "s21_math.h"

long double s21_fmod(double x, double y) {
  if (y == 0) return NaN;
  return s21_fma(s21_truncate(x / y), -y, x);
}

long double s21_truncate(double x) {
  return x < 0 ? -s21_floor(-x) : s21_floor(x);
}

long double s21_fma(long double x, long double y, long double z) {
  return (x * y) + z;
}
