#ifndef LN
#define LN

#ifdef EXP
#include "../exp/s21_exp.h"
#endif

#ifndef CONST
#include "../constants.h"
#endif

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif

long double s21_exp(double x);  // needed probably because of separate .o files

long double s21_log(double x);
#endif
