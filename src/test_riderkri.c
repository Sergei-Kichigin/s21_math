#include <math.h>
#include <stdio.h>

#include "ln/s21_ln.h"

int main() {
  double input;

  scanf("%lf", &input);
  printf("%Lf--", ln_my(input));
  printf("%lf", log(input));
}