#include "s21_math.h"

long double s21_cos(double x) {
  long double res, step = 1;
  res = nans_infs(x);
  if (!res) {
    extra_pi_romoval(&x);
    for (long double i = 2;
         (step >= EPSilon2 && step > 0) || (step <= EPSilon2 && step < 0);
         i += 2) {
      res += step;
      step = MINUS * step * x * x / (i * (i - ONE));
    }
  }
  return res;
}

long double s21_sin(double x) {
  long double flag, res;
  res = nans_infs(x);
  if (!res) {
    flag = extra_pi_romoval(&x);
    res = s21_sqrt(s21_fabs(ONE - s21_cos(x) * s21_cos(x))) * flag;
  }
  return res;

}

long double s21_tan(double x) {
  if (s21_fabs(s21_cos(x)) <= EPSilon) return InFP;
  return s21_sin(x) / s21_cos(x);
}

int extra_pi_romoval(double* x) {
  double tmp = 0;
  int flag;

  if ((*x) >= ZERO) {
    tmp = s21_fmod((*x), PI_2);
    if (tmp <= PI)
      flag = ONE;
    else
      flag = MINUS;
  } else {
    tmp = s21_fmod((*x), PI_2 * MINUS);
    if (tmp <= PI * MINUS)
      flag = ONE;
    else
      flag = MINUS;
  }
  (*x) = tmp;
  return flag;
}

long double nans_infs(double x) {
  long double flag;
  if (x > InFN && x < InFP && x != NaN && x != NaNP)
    flag = 0;
  else if (x == InFN || x == InFP)
    flag = NaN;
  else
    flag = x;
  return flag;
}