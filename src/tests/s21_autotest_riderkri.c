#include <math.h>
#include <stdio.h>
#include <stdlib.h>  //for int abs(int x);

#include "../s21_math.h"
#define NA printf("n/a\n")
#define TEST_COUNT 44
#define TEST_COUNT_2 15  /// remove

// ATTENTION:     DOES NOT TEST SPEED AT ALL!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main() {
  long double test_nums[TEST_COUNT] = {
      -9999999999999999,
      -9999999999.999999,
      -9999999999,
      -9999999998,
      -999999,
      -99999,
      -555.55,
      -554,
      -555,
      -6.2831872,
      -5.5,
      -5,
      -3.1415936,
      -1.5707968,
      -1.000001,
      -1,
      -0.999999,
      -0.5,
      -0.000001,
      0,
      0.000001,
      0.5,
      0.999999,
      1,
      1.000001,
      1.5707968,
      3.1415936,
      5,
      5.5,
      6.2831872,
      55,
      54,
      55.5555,
      99999,
      999999,
      9999999999,
      9999999998,
      9999999999.999999,
      9999999999999999,
      'k',
      '+',
      '\0'};  // ATTENTION:     DOES NOT TEST INPUTS
              // LIKE: "5.l" OR "5." or "-inf" and "inf"
              // test_nums[] = -inf;
              // test_nums[] = inf;
  test_nums[TEST_COUNT - 4] = -__DBL_MAX__;
  test_nums[TEST_COUNT - 3] = __DBL_MAX__;
  test_nums[TEST_COUNT - 2] = -__DBL_DENORM_MIN__;
  test_nums[TEST_COUNT - 1] = __DBL_DENORM_MIN__;

  // long double test_nums[TEST_COUNT_2] = {
  //     /// remove
  //     -9999999999, -9999999998, -5,  -5.5, -4, -1,         -0.5,      0,
  //     0.5,         1,           5.5, 5,    4,  9999999999, 9999999998};

  FILE* file = fopen("test_logs/temp.md", "a");
  if (file == NULL) {
    NA;
    return 0;
  }
  int k = 0;
  printf(
      "1-ln; 2-exp; 3-pow; 4-floor; 5-ceil; 6-abs; 7-fabs; "
      "8-cos;\n9-sqrt;10-sin; 11-fmod; 12-tan; 13-atan; 14-acos; 15-asin.\n");
  scanf("%d", &k);

  if (k == 11) {  // fmod
    fprintf(file, "FMOD(x,y):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      for (int j = 0; j < TEST_COUNT; j++) {
        fprintf(file, "%.6Lf\t%.6Lf\n", test_nums[i], test_nums[j]);
        fprintf(file, "\t%.16lf\t%.6lf\n", fmod(test_nums[i], test_nums[j]),
                fmod(test_nums[i], test_nums[j]));
        fprintf(file, "\t%.16Lf\t%.6Lf\n\n",
                s21_fmod(test_nums[i], test_nums[j]),
                s21_fmod(test_nums[i], test_nums[j]));
      }
    }
  } else if (k == 1) {  // ln
    fprintf(file, "LN(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", log(test_nums[i]), log(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_log(test_nums[i]),
              s21_log(test_nums[i]));
      if (log(test_nums[i]) == s21_log(test_nums[i]))
        fprintf(file, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNORMA\n\n");
      else
        fprintf(file, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tERROR\n\n");
    }
  } else if (k == 2) {  // exp
    fprintf(file, "EXP(x):\n");
    for (int i = 3; i < TEST_COUNT; i++) {  //!
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", exp(test_nums[i]), exp(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_exp(test_nums[i]),
              s21_exp(test_nums[i]));
      if (exp(test_nums[i]) == s21_exp(test_nums[i]))
        fprintf(file, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNORMA\n\n");
      else
        fprintf(file, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tERROR\n\n");
    }
  } else if (k == 3) {  // pow
    fprintf(file, "POW(x,y):\n");
    for (int i = 0; i < TEST_COUNT; i++) {    /// TEST_COUNT_2
      for (int j = 0; j < TEST_COUNT; j++) {  // TEST_COUNT_2
        // if (test_nums[j] != (long)test_nums[j]) continue;  /// remove
        fprintf(file, "%.6Lf\t%.6Lf\n", test_nums[i], test_nums[j]);
        fprintf(file, "\t%.16lf\t%.6lf\n", pow(test_nums[i], test_nums[j]),
                pow(test_nums[i], test_nums[j]));
        fprintf(file, "\t%.16Lf\t%.6Lf\n", s21_pow(test_nums[i], test_nums[j]),
                s21_pow(test_nums[i], test_nums[j]));
        if (pow(test_nums[i], test_nums[j]) ==
            s21_pow(test_nums[i], test_nums[j]))
          fprintf(file, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNORMA\n\n");
        else
          fprintf(file, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tERROR\n\n");
      }
    }
  } else if (k == 4) {  // floor
    fprintf(file, "FLOOR(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", floor(test_nums[i]),
              floor(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_floor(test_nums[i]),
              s21_floor(test_nums[i]));
    }
  } else if (k == 5) {  // ceil
    fprintf(file, "CEIL(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", ceil(test_nums[i]),
              ceil(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_ceil(test_nums[i]),
              s21_ceil(test_nums[i]));
    }
  } else if (k == 6) {  // abs
    fprintf(file, "ABS(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%d\n", (int)test_nums[i]);
      fprintf(file, "\t%d\n", abs((int)test_nums[i]));
      fprintf(file, "\t%d\n\n", s21_abs((int)test_nums[i]));
    }
  } else if (k == 7) {  // fabs
    fprintf(file, "FABS(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", fabs((double)test_nums[i]),
              fabs((double)test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_fabs(test_nums[i]),
              s21_fabs(test_nums[i]));
    }
  } else if (k == 8) {  // cos
    fprintf(file, "COS(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", cos(test_nums[i]), cos(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_cos(test_nums[i]),
              s21_cos(test_nums[i]));
    }
  } else if (k == 9) {  // sqrt
    fprintf(file, "SQRT(x):\n");
    for (int i = 3; i < TEST_COUNT; i++) {  //!
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", sqrt(test_nums[i]),
              sqrt(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_sqrt(test_nums[i]),
              s21_sqrt(test_nums[i]));
    }
  } else if (k == 10) {  // sin
    fprintf(file, "SIN(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", sin(test_nums[i]), sin(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_sin(test_nums[i]),
              s21_sin(test_nums[i]));
    }
  } else if (k == 12) {  // tan
    fprintf(file, "TAN(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", tan(test_nums[i]), tan(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_tan(test_nums[i]),
              s21_tan(test_nums[i]));
    }
  } else if (k == 13) {  // atan
    fprintf(file, "ATAN(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", atan(test_nums[i]),
              atan(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_atan(test_nums[i]),
              s21_atan(test_nums[i]));
    }
  } else if (k == 14) {  // acos
    fprintf(file, "ACOS(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", acos(test_nums[i]),
              acos(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_acos(test_nums[i]),
              s21_acos(test_nums[i]));
    }
  } else if (k == 15) {  // asin
    fprintf(file, "ASIN(x):\n");
    for (int i = 0; i < TEST_COUNT; i++) {
      fprintf(file, "%.6Lf\n", test_nums[i]);
      fprintf(file, "\t%.16lf\t%.6lf\n", asin(test_nums[i]),
              asin(test_nums[i]));
      fprintf(file, "\t%.16Lf\t%.6Lf\n\n", s21_asin(test_nums[i]),
              s21_asin(test_nums[i]));
    }
  } else
    NA;
  fclose(file);
  return 0;
}