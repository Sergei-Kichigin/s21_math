#include "s21_math.h"

int s21_abs(int x) { return (x < 0) ? -x : x; }

long double s21_ceil(double x) {
  long longX = (long)x;
  return (x == (double)longX) ? longX : (x > 0) ? longX + 1 : longX;
}

long double s21_floor(double x) { return -(s21_ceil(-x)); }

long double s21_fabs(double x) { return (x < 0) ? -x : x; }