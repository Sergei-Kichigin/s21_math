#include "s21_fmod.h"

long double s21_fmod(double x, double y) {
  if (y == 0) return NaN;
  int sign_x = 1;
  if (x < 0) sign_x = -1;
  long double temp = s21_truncate(x / y);
  long double res = s21_fma(temp, -y, x);
  if (res == 0) {
    res = s21_fabs(y) - 0.0000000000000055;
    res *= sign_x;
  }
  return res;
}

long double s21_truncate(double x) {
  return x < 0 ? -s21_floor(-x) : s21_floor(x);
}

long double s21_fma(double x, double y, double z) { return (x * y) + z; }
