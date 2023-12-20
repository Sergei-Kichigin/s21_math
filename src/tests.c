#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

// FABS
START_TEST(fabs_positive) {
  double input = 12.54;
  double result = s21_fabs(input);
  double expected = fabs(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(fabs_negative) {
  double input = -12.54;
  double result = s21_fabs(input);
  double expected = fabs(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(fabs_nan) {
  ck_assert_ldouble_nan(s21_fabs(NaN));
  ck_assert_ldouble_nan(fabs(NaN));
}

START_TEST(fabs_inf_positive) {
  ck_assert_ldouble_infinite(s21_fabs(InFP));
  ck_assert_ldouble_infinite(fabs(InFP));
}

// Не совсем ясно как идет сравнение минус бесконечности
START_TEST(fabs_inf_negative) {
  ck_assert_ldouble_infinite(s21_fabs(InFN));
  ck_assert_ldouble_infinite(fabs(InFN));
}

// CEIL
START_TEST(ceil_edge1) {
  double input = -0.000001;
  double result = s21_ceil(input);
  double expected = ceil(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(ceil_int) {
  double input = 12.0;
  double result = s21_ceil(input);
  double expected = ceil(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(ceil_positive) {
  double input = 12.54;
  double result = s21_ceil(input);
  double expected = ceil(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(ceil_negative) {
  double input = -12.54;
  double result = s21_ceil(input);
  double expected = ceil(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(ceil_nan) {
  ck_assert_ldouble_nan(s21_ceil(NaN));
  ck_assert_ldouble_nan(ceil(NaN));
}

START_TEST(ceil_inf_positive) {
  ck_assert_ldouble_infinite(s21_ceil(InFP));
  ck_assert_ldouble_infinite(ceil(InFP));
}

// Не совсем ясно как идет сравнение минус бесконечности
START_TEST(ceil_inf_negative) {
  ck_assert_ldouble_infinite(s21_ceil(InFN));
  ck_assert_ldouble_infinite(ceil(InFN));
}

// FLOOR
START_TEST(floor_positive_int) {
  double input = 12.0;
  double result = s21_floor(input);
  double expected = floor(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(floor_positive) {
  double input = 12.54;
  double result = s21_floor(input);
  double expected = floor(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(floor_negative) {
  double input = -12.54;
  double result = s21_floor(input);
  double expected = floor(input);
  ck_assert_ldouble_eq(result, expected);
}

START_TEST(floor_nan) {
  ck_assert_ldouble_nan(s21_floor(NaN));
  ck_assert_ldouble_nan(floor(NaN));
}

START_TEST(floor_inf_positive) {
  ck_assert_ldouble_infinite(s21_floor(InFP));
  ck_assert_ldouble_infinite(floor(InFP));
}

// Не совсем ясно как идет сравнение минус бесконечности
START_TEST(floor_inf_negative) {
  ck_assert_ldouble_infinite(s21_floor(InFN));
  ck_assert_ldouble_infinite(floor(InFN));
}

// ABS
START_TEST(abs_positive) {
  int input = 12;
  int result = s21_abs(input);
  int expected = abs(input);
  ck_assert_int_eq(result, expected);
}

START_TEST(abs_negative) {
  int input = -12;
  int result = s21_abs(input);
  int expected = abs(input);
  ck_assert_int_eq(result, expected);
}

START_TEST(abs_nan) {
  int input = NaN;
  int result = s21_abs(input);
  int expected = abs(input);
  ck_assert_int_eq(result, expected);
}

START_TEST(abs_inf_positive) {
  int input = InFP;
  int result = s21_abs(input);
  int expected = abs(input);
  ck_assert_int_eq(result, expected);
}

// Не совсем ясно как идет сравнение минус бесконечности
START_TEST(abs_inf_negative) {
  int input = InFN;
  int result = s21_abs(input);
  int expected = abs(input);
  ck_assert_int_eq(result, expected);
}

// ACOS
START_TEST(acos_inf_positive) {
  double input = InFP;
  double result = s21_acos(input);
  double expected = acos(input);
  ck_assert_ldouble_nan(result);
  ck_assert_ldouble_nan(expected);
}

START_TEST(acos_exist_positive) {
  double input = 0.5;
  double result = s21_acos(input);
  double expected = acos(input);
  ck_assert_ldouble_eq_tol(result, expected, 1e-6);
}

START_TEST(acos_not_exist_positive) {
  double input = 1.3;
  double result = s21_acos(input);
  double expected = acos(input);
  ck_assert_ldouble_nan(result);
  ck_assert_ldouble_nan(expected);
}

START_TEST(acos_null) {
  double input = 0.0;
  double result = s21_acos(input);
  double expected = acos(input);
  ck_assert_ldouble_eq_tol(result, expected, 1e-6);
}

START_TEST(acos_exist_negative) {
  double input = -0.3;
  double result = s21_acos(input);
  double expected = acos(input);
  ck_assert_ldouble_eq_tol(result, expected, 1e-6);
}

START_TEST(acos_not_exist_negative) {
  double input = -100;
  double result = s21_acos(input);
  double expected = acos(input);
  ck_assert_ldouble_nan(result);
  ck_assert_ldouble_nan(expected);
}

// START_TEST(name_of_test)              // name of test
// {
//   int input = InFN;                   // input data
//   int result = s21_abs(input);        // output our function
//   int expected = abs(input);          // output math function
//   ck_assert_int_eq(result, expected); // comparison of results
// }

// Добавляйте свои тесты как в примере выше

Suite *my_math_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("MyMath");

  tc_core = tcase_create("Core");

  // tcase_add_test(tc_core, name of test);  // add test case in suite

  // FABS
  tcase_add_test(tc_core, fabs_positive);
  tcase_add_test(tc_core, fabs_negative);
  tcase_add_test(tc_core, fabs_nan);
  tcase_add_test(tc_core, fabs_inf_positive);
  tcase_add_test(tc_core, fabs_inf_negative);

  // CEIL
  tcase_add_test(tc_core, ceil_edge1);
  tcase_add_test(tc_core, ceil_int);
  tcase_add_test(tc_core, ceil_positive);
  tcase_add_test(tc_core, ceil_negative);
  tcase_add_test(tc_core, ceil_nan);
  tcase_add_test(tc_core, ceil_inf_positive);
  tcase_add_test(tc_core, ceil_inf_negative);

  // FLOOR
  tcase_add_test(tc_core, floor_positive_int);
  tcase_add_test(tc_core, floor_positive);
  tcase_add_test(tc_core, floor_negative);
  tcase_add_test(tc_core, floor_nan);
  tcase_add_test(tc_core, floor_inf_positive);
  tcase_add_test(tc_core, floor_inf_negative);

  // ABS
  tcase_add_test(tc_core, abs_positive);
  tcase_add_test(tc_core, abs_negative);
  tcase_add_test(tc_core, abs_nan);
  tcase_add_test(tc_core, abs_inf_positive);
  tcase_add_test(tc_core, abs_inf_negative);

  // ACOS
  tcase_add_test(tc_core, acos_inf_positive);
  tcase_add_test(tc_core, acos_exist_positive);
  tcase_add_test(tc_core, acos_not_exist_positive);
  tcase_add_test(tc_core, acos_null);
  tcase_add_test(tc_core, acos_exist_negative);
  tcase_add_test(tc_core, acos_not_exist_negative);

  // Добавляйте свои тесты как в примере выше

  suite_add_tcase(s, tc_core);

  return s;
}

int main(void) {
  int number_failed;
  Suite *s;
  SRunner *sr;

  s = my_math_suite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? SUCCESS : ERROR;
}