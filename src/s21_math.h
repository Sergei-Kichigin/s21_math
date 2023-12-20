#ifndef CONST
#define CONST

#define EPSilon 1E-18
#define EPSilon2 1E-9

#define ONE 1.0
#define ZERO 0.0
#define ZERON -0.0
#define TWO 2.0
#define MINUS (-1.0)
#define SQRT 0.5

#define NaN 0.0 / 0.0
#define InFN -1.0 / 0.0
#define InFP 1.0 / 0.0

// #define __DBL_MAX__ 1.79769313486231570814527423731704357e+308L
// #define __DBL_DENORM_MIN__ 4.94065645841246544176568792868221372e-324L

#define PI 3.14159265358979323846
#define PI_2 2.0 * PI
#define Emathh 2.7182818284590450907955982984276488423347473144531250

#endif

#ifndef S21_MATH
#define S21_MATH

#include <stdio.h>

#ifndef CONST
#include "constants.h"
#endif
#ifndef S21_AFACFL
#include "abs_fabs_ceil_floor/s21_abs_fabs_ceil_floor.h"
#endif
#ifndef EXP
#include "exp/s21_exp.h"
#endif
#ifndef LN
#include "ln/s21_ln.h"
#endif
#ifndef POW
#include "pow_sqrt/s21_pow_sqrt.h"
#endif
#ifndef FMOD
#include "fmod/s21_fmod.h"
#endif
#ifndef COS
#include "trigonometry/s21_cos_sin_tan.h"
#endif
#ifndef ACOS
#include "trigonometry/s21_acos_asin_atan.h"
#endif

#endif
