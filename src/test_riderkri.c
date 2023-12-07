#include <math.h>
#include <stdio.h>
#define NA printf("n/a")

//#include "cos/s21_cos.h"
#include "exp/s21_exp.h"

int main() {
  double input;

  scanf("%lf", &input);
  printf("%lf--", (double)exp_my(input));
  printf("%lf", exp(input));
}