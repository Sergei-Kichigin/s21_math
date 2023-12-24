#include "s21_math.h"

int s21_abs(int x) { return (x < ZERO) ? -x : x; }

long double s21_ceil(double x) {
  long double longX = (long)x;
  long double answer = ZERO;

  if (x == InFP || x == InFN) return x;
  if (x != x) return NaN;

  if (x == (double)longX) {
    answer = longX;
  } else if (x >= ZERO) {
    answer = longX + ONE;
  } else if (x > MINUS) {  // edge case for x in range [0; -1]
    answer = -longX;
  } else {
    answer = longX;
  }

  return answer;
}

long double s21_floor(double x) {
  long double longX = (long)x;
  long double answer = ZERO;

  if (x == InFP || x == InFN) return x;
  if (x != x) return NaN;

  if (x == (double)longX) {
    answer = longX;
  } else if (x >= ZERO) {
    answer = longX;
  } else {
    answer = longX - ONE;
  }

  return answer;
}

long double s21_fabs(double x) { return (x < ZERO) ? -x : x; }