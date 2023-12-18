#include "s21_abs_fabs_ceil_floor.h"
#include "constants.h"

int s21_abs(int x) { 
  return (x < 0) ? -x : x; 
  }

long double s21_ceil(double x) {
  long double longX = (long)x;
  long double answer;

  if (x == InFP || x == InFN || x == NaN) return x;
  if (x != x) return NaN;

  if (x == (double)longX) {
    answer = longX;
  } else if (x >= 0) {
    answer = longX + 1;
  } else {
    if (x < 0.0 && x > -1.0) {  // краевой случай для вывода -0.000000
      answer = -longX;
    } else {
      answer = longX;
    }
  }

  return answer;
}

long double s21_floor(double x) {
  long double longX = (long)x;
  long double answer;

  if (x == InFP || x == InFN) return x;
  if (x != x) return NaN;

  if (x == (double)longX) {
    answer = longX;
  } else if (x >= 0) {
    answer = longX;
  } else {
    answer = longX - 1;
  }

  return answer;
}

long double s21_fabs(double x) { return (x < 0) ? -x : x; }