#define _POSIX_C_SOURCE 200809L
#include <stdio.h>

#include "../pow_my_outofdate/s21_pow.h"
#include "../abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#include "../exp/s21_exp.h"

#define EPSilon 1E-18
#define ONE 1.0
#define NaN 0.0/0.0
#define InF 1.0/0.0


long double ln_my(double x);  // rename the function
