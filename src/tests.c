#include <stdio.h>

#include "s21_math.h"

int main() {
  int input_abs;
  double input_ceil;
  double input_floor;
  double input_fabs;

  // ABS TEST
  printf("INPUT NUMBER FOR ABS TEST: ");
  scanf("%d", &input_abs);
  printf("%d\n", s21_abs(input_abs));

  // CEIL TEST
  printf("INPUT NUMBER FOR CEIL TEST: ");
  scanf("%lf", &input_ceil);
  printf("%Lf\n", s21_ceil(input_ceil));

  // FLOOR TEST
  printf("INPUT NUMBER FOR FLOOR TEST: ");
  scanf("%lf", &input_floor);
  printf("%Lf\n", s21_floor(input_floor));

  // FABS TEST
  printf("INPUT NUMBER FOR FABS TEST: ");
  scanf("%lf", &input_fabs);
  printf("%Lf\n", s21_fabs(input_fabs));

  return 0;
}