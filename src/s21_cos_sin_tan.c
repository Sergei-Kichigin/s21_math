#include "s21_math.h"

long double s21_cos(double x) {
  long double res, step = 1;
  res = nans_infs(x);
  // printf("%d\n", flag);
  if (!res) {
    // printf("---------------------------\n");
    extra_pi_romoval(&x);
    // printf("---------------------------\n");
    for (long double i = 2;
         (step >= EPSilon2 && step > 0) || (step <= EPSilon2 && step < 0);
         i += 2) {
      res += step;
      step = MINUS * step * x * x / (i * (i - ONE));
      // printf("%Lf->%Lf\n", step, res);
    }
  }
  return res;
}

long double s21_sin(double x) {
  long double flag, res;
  res = nans_infs(x);
  if (!res) {
    flag = extra_pi_romoval(&x);
    /*
    if (x >= 0) {
      for (; tmp * PI_2 <= x; tmp++)
        ;
      tmp--;
      x = x - (tmp * PI_2);
      if (x <= PI)
        flag = ONE;
      else
        flag = MINUS;
    } else {
      for (; tmp * PI_2 * MINUS >= x; tmp++)
        ;
      tmp--;
      x = x + (tmp * PI_2);
      if (x <= PI * MINUS)
        flag = ONE;
      else
        flag = MINUS;
    }
    */

    // long double res = 0;
    // res = s21_fabs(s21_cos(x));
    // if (1 - res < 0.00001)
    //   res = (ONE - res) * flag;
    // else
    //   res = s21_sqrt(ONE - s21_pow(res, 2)) * flag;
    // return res;

    // x = s21_cos(x);
    // printf("%.20lf->", x);
    // x = ONE - x * x;
    // printf("%.20lf\n", x);
    // return s21_sqrt(x) * flag;
    res = s21_sqrt(s21_fabs(ONE - s21_cos(x) * s21_cos(x))) * flag;
  }
  return res;

  // return s21_sqrt(s21_fabs(ONE - s21_cos(x) * s21_cos(x))) * flag;
}

long double s21_tan(double x) {  // error with INF here!!!!
  if (s21_fabs(s21_cos(x)) <= EPSilon) return InFP;
  return s21_sin(x) / s21_cos(x);
}

int extra_pi_romoval(double* x) {
  double tmp = 0;
  int flag;
  // if ((*x) < 0) (*x) *= MINUS;
  // // int natural = (long long)x;
  // // natural /= (long long)PI_2;
  // // (*x) = (*x) - (double)natural;
  // for (; tmp * PI_2 <= (*x); tmp++)
  //   ;
  // tmp--;
  // (*x) = (*x) - (tmp * PI_2);
  // if ((*x) < 0) (*x) *= MINUS;

  /////////////////////////////////////////////////////////////////////////////////////

  if ((*x) >= ZERO) {
    //  printf("%lf-->", *x);
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
  // printf("-->%lf\n", tmp);
  (*x) = tmp;
  return flag;
}

long double nans_infs(double x) {
  long double flag;
  // if (x >= __DBL_MAX__ * MINUS && x <= __DBL_MAX__&& x!=NaN && x!=NaNP)
  if (x > InFN && x < InFP && x != NaN && x != NaNP)
    flag = 0;
  else if (x == InFN || x == InFP)
    flag = NaN;
  else
    flag = x;

  // printf("%Lf--\n", flag);
  return flag;
}