#ifndef EXP
#define EXP

#ifndef CONST
#include "../constants.h"
#endif

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif
long double s21_pow_int(long double base, long double p);  // is it working?

long double s21_exp(double x);
long double s21_exp_double(double x);

#endif