#include "s21_math.h"

long double s21_log(double x) {
  long double U_n_1 = ZERO, U_n = ZERO;

  if (x < ZERO || x == InFP) U_n = NaN;
  if (x == ZERO) U_n = InFN;
  if (x == InFN) U_n = x;
  if (U_n == ZERO) {
    long double power = ZERO;
    for (; x > ONE; power++) {
      x = x / s21_exp(ONE);
    }
    U_n = x - ONE;
    while (s21_fabs(U_n - U_n_1) > EPSilon2) {
      U_n_1 = U_n;
      U_n = U_n + TWO * (x - s21_exp(U_n)) / (x + s21_exp(U_n));
    }
    U_n = U_n + power;
  }
  return U_n;
}