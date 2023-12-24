#ifndef COS
#define COS

#ifndef S21_AFACFL
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif

#ifndef POW
#include "../pow_sqrt/s21_pow_sqrt.h"
#endif

#ifndef CONST
#include "../constants.h"
#endif

#ifndef FMOD
#include "../fmod/s21_fmod.h"
#endif

long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);
int extra_pi_romoval(double* x);
long double nans_infs(double x);
#endif