#ifndef LN
#define LN

#ifndef S21_AFACFL
#include "s21_abs_fabs_ceil_floor.h"
#endif

#ifdef EXP
#include "s21_exp.h"
#endif

#ifndef CONST
#include "constants.h"
#endif

long double s21_exp(double x);  // needed probably because of separate .o files

long double s21_log(double x);
#endif
