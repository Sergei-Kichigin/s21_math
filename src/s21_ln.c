#include "s21_ln.h"

#include "constants.h"
#include "s21_abs_fabs_ceil_floor.h"
#include "s21_exp.h"

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
  long double U_n_1 = ZERO, U_n = ZERO;
  if (x < ZERO || x == InFP) U_n = NaN;
  if (x == ZERO) U_n = InFP;
  if (x == InFN) U_n = x;
  if (U_n == ZERO) {
    long double power = ZERO;
    for (; x > ONE; power++) {
      x = x / s21_exp(ONE);
    }  // Emathh
    U_n = x - ONE;
    while (s21_fabs(U_n - U_n_1) > EPSilon2) {
      U_n_1 = U_n;
      U_n = U_n + TWO * (x - s21_exp(U_n)) / (x + s21_exp(U_n));
    }
    U_n = U_n + power;
  }
  return U_n;
}
