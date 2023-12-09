#include <math.h>  // ---------UDALiiiiiiiT'

#include "s21_exp.h"
#include "s21_ln_Lera.h"

int main() {
  double x;
  scanf("%lf", &x);
  printf("%Lf", s21_ln_Lera(x));
  printf("\n%lf", log(x));  // ---------UDALiiiiiiiT'
  // printf("%Lf", s21_exp(x));
  // printf("\n%lf", exp(x));  // ---------UDALiiiiiiiT'
  return 0;
}
