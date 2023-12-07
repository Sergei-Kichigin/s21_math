#include "s21_exp.h"

long double exp_my(double x) {  // just lets move 5 discharges
  long double res = 1, elem = 0;
  unsigned long n = 1;
  do {
    elem = (long double)pow(x, n) / (long double)fact(n);
    n++;
    res = res + elem;
    // printf("-%Lf-%Lf=%lf\n", elem, prev_elem, fabs((double)(elem -
    // prev_elem)));
    //   } while (fabs((double)elem) >= DELTA);
    // printf("%ld\n", n);
  } while (n < INT_MAX && fabs((double)elem) >= DELTA);
  // res = res / MOVE;
  return res;
}