#include <math.h>
#include <stdio.h>
#define NA printf("n/a")

long double fact(int x) {
  if (x == 0)
    return 1;
  else
    return (long double)x * fact(x - 1);
}

int main() {
  /* double input;
   long double res;

   // res=(long double)10/3;
   // printf("%.30Lf\n",res);

   printf("1-exp, 2-cos\n");
   scanf("%lf", &input);
   switch ((int)input) {
     case 1:
       printf("For exit input -5\n");
       while (input != -5) {
         scanf("%lf", &input);
         res = exp(input);
         printf("-->%Lf\n", res);
       }
       break;
     case 2:
       printf("For exit input -5\n");
       while (input != -5) {
         scanf("%lf", &input);
         res = cos(input);
         printf("-->%Lf\n", res);
       }
       break;
     default:
       NA;
       break;
   }*/

  long double one =
      10800340716202017915566004731865563992345562575933493530346357549803051586960346307809636638422389085092263419770586768501681045280689796224890097204460645164791208011365308677265591258635396471887027149617435275932999484415559942712202362880.000000;
  one = one - 1;
  int n = 1;
  while (one >= 0) {
    one = one - (long double)pow(555, n) / (long double)fact(n);
    n++;
    printf("%d\n", n);
  }
  printf("\n\n%d", n);
}
// 100 - 156
// 55 -179
// 5.5 -25