#include "s21_abs_fabs_ceil_floor.h"

int s21_abs(int x) { return (x < 0) ? -x : x; }

long double s21_ceil(double x) {
  long longX = (long)x;
  return (x == (double)longX) ? longX : (x > 0) ? longX + 1 : longX;
}

long double s21_floor(double x) {
  long longX = (long)x;
  return (x == (double)longX) ? longX : (x > 0) ? longX : longX - 1;
}

long double s21_fabs(double x) { return (x < 0) ? -x : x; }