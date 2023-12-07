#include <math.h>
#include <stdio.h>
#include "../s21_math.h"
#define NA printf("n/a")

int main() {
  long double input1=12345, input2;
  for(long i=1;input1!=54321 && i!=54321;){
    printf("1-ln; 2-exp; 3-pow; 4-floor; 5-ceil; 6-abs; 7-fabs;\n 54321-exit; 12345-change function\n");
    if(input1==12345)
      scanf("%d",&i);
    switch (i)
    {
    case 1:
        scanf("%lf", &input1);
        if(input1== 12345 || input1==54321) continue;
        printf("%.16lf\n", log(input1));
        printf("%.16Lf\n", s21_log(input1));
      break;
     case 2:
        scanf("%lf", &input1);
        if(input1== 12345 || input1==54321) continue;
        printf("%.16lf\n", exp(input1));
        printf("%.16Lf\n", s21_exp(input1));
      break;
     case 3:
        scanf("%lf", &input1);
        if(input1== 12345 || input1==54321) continue;
        scanf("%lf", &input2);
        printf("%.16lf\n", pow(input1,input2));
        printf("%.16Lf\n", s21_pow(input1));
      break;
     case 4:
        scanf("%lf", &input1);
        if(input1== 12345 || input1==54321) continue;
        printf("%.16lf\n", floor(input1));
        printf("%.16Lf\n", s21_floor(input1));
      break;
     case 5:
        scanf("%lf", &input1);
        if(input1== 12345 || input1==54321) continue;
        printf("%.16lf\n", ceil(input1));
        printf("%.16Lf\n", s21_ceil(input1));
      break;
     case 6:
        scanf("%lf", &input1);
        if(input1== 12345 || input1==54321) continue;
        printf("%.16lf\n", abs(input1));
        printf("%.16Lf\n", s21_abs(input1));
      break;
     case 7:
        scanf("%lf", &input1);
        printf("%.16lf\n", fabs(input1));
        printf("%.16Lf\n", s21_fabs(input1));
      break;
     case 8:
        // scanf("%lf", &input1);
        // printf("%.16lf\n", (input1));
      break;
     case 9:
        // scanf("%lf", &input);
        // printf("%.16lf\n", log(input));
      break;
     case 10:
        // scanf("%lf", &input);
        // printf("%.16lf\n", log(input));
      break;
    default:
      NA;
      break;
    }
  }
}