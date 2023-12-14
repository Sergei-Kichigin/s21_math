#include "s21_ln.h"

// long double s21_log(double x) {
//   if (x < 0) return NaN;
//   if (x == 0) return InF;
//   long double power = 0;
//   for (; x / s21_exp(power) > 1; power++)
//     ;
//   if (power != 0) x /= s21_exp(power);
//   long double present = x - ONE, result = 0;
//   for (double i = 2.0; EPSilon < s21_fabs(present); i++) {
//     result += present;
//     present = present * (-ONE) * (i - ONE) * (x - ONE) / i;
//   }
//   return power + result;
// }

long double s21_log(double x) {
  if (x < ZERO) return NaN;
  if (x == ZERO) return InF;
  long double power = 0;
  for (; x / s21_exp(power) > ONE; power++)
    ;
  if (power != ZERO) x /= s21_exp(power);
  long double U_n_1 = 0, U_n = x;
  while (((U_n - U_n_1) >= 0 ? (U_n - U_n_1) : -(U_n - U_n_1)) > EPSilon2) {
    U_n_1 = U_n;
    U_n = U_n + TWO * (x - s21_exp(U_n)) / (x + s21_exp(U_n));
  }
  return power + U_n;
}
