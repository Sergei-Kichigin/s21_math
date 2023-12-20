#ifndef S21_AFACFL
#define S21_AFACFL

#define SUCCESS 0
#define ERROR 1

#ifndef CONST
#include "../constants.h"
#endif

int s21_abs(int x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_fabs(double x);

#endif  // S21_AFACFL


int s21_abs(int x) { return (x < 0) ? -x : x; }

long double s21_ceil(double x) {
  long double longX = (long)x;
  long double answer;

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
  if (x == InFP || x == InFN) return x;

  long double longX = (long)x;
  long double answer = 0;

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