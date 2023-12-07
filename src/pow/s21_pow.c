
#include "s21_pow.h"
//original POW makes difference between either it gets integers or doubles... we do not do this difference. I wonder if we should...
//5^2 => math.h=25.0000000000000000 s21_math.h=25.0000000000000065
long double s21_pow(double base, double p) {  
  long double result;
  if (base > 0)
    result = s21_pow_calculation(base, p);
  else if (base < 0) {
    if (p == 0)
      result = ONE;
    else if (p != (long int)p)
      result = NaN;
    else if ((long int)p % 2 == 0)
      result = s21_pow_calculation(s21_fabs(base), p);
    else
      result = s21_pow_calculation(s21_fabs(base), p) * (-1);
  } else {
    if (p > 0)
      result = ZERO;
    else if (p == 0)
      result = ONE;
    else
      result = InF;
  }
  return result;
}
long double s21_pow_calculation(double base, double p) {
  return s21_exp(p * s21_log(base));
}