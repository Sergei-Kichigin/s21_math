#include <math.h>

#include "s21_abs_fabs_ceil_floor.h"
#include "s21_exp.h"
#include "s21_ln.h"
#include "s21_ln_Lera.h"
#include "s21_pow_sqrt.h"

int main() {
  double x;
  scanf("%lf", &x);

  double y;
  scanf("%lf", &y);

  printf("%.16Lf", s21_pow(x, y));
  printf("\n%.16lf", pow(x, y));

  // printf("%.16Lf", s21_log(x));
  // printf("\n%.16lf", log(x));

  // printf("%.16Lf", s21_exp(x));
  // printf("\n%.16lf", exp(x));
  return 0;
}
