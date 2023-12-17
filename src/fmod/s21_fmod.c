#include "s21_fmod.h"

long double s21_fmod(double x, double y) {
  if (y == 0 || s21_fabs(x) == InFP) return NaN;
  long double res = 0;
  if (s21_fabs(y) == InFP) {
    res = x;
  } else {
    int sign_x = 1;
    if (x < 0) sign_x = -1;
    long double temp = s21_truncate(x / y);
    res = x - temp * y;
    if (s21_fabs(res) == Fmod_magic_number) {
      res = sign_x * s21_fabs(y) + res;
    }
  }
  return res;
}

long double s21_truncate(double x) {
  return x < 0 ? -s21_floor(-x) : s21_floor(x);
}

long double s21_fma(double x, double y, double z) { return (x * y) + z; }
