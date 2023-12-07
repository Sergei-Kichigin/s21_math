#include "s21_ln.h"

long double s21_log(double x) {
  if (x < 0) return NaN;
  if (x == 0) return InF;
  long double power = 0;
  for (; x / s21_exp(power) > 1; power++)
    ;
  if (power != 0) x /= s21_exp(power);
  long double present = x - ONE, result = 0;
  for (double i = 2.0; EPSilon < s21_fabs(present); i++) {
    result += present;
    present = present * (-ONE) * (i - ONE) * (x - ONE) / i;
  }
  return power + result;
}