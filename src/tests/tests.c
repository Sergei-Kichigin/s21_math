#include <check.h>
#include <math.h>

#include "s21_math.h"

START_TEST(abs_positive) {
  int input = 5;
  int result = s21_abs(input);
  ck_assert_int_eq(result, abs(input));
}

START_TEST(abs_negative) {
  int result = s21_abs(-5);
  ck_assert_int_eq(result, 5);
}

START_TEST(ceil_positive_integer) {
  long double result = s21_ceil(5.0);
  ck_assert_double_eq(result, 5.0);
}

START_TEST(ceil_negative_integer) {
  long double result = s21_ceil(-5.0);
  ck_assert_double_eq(result, -5.0);
}

START_TEST(ceil_positive_non_integer) {
  long double result = s21_ceil(3.14);
  ck_assert_double_eq(result, 4.0);
}

START_TEST(ceil_negative_non_integer) {
  long double result = s21_ceil(-3.14);
  ck_assert_double_eq(result, -3.0);
}

START_TEST(floor_positive_integer) {
  long double result = s21_floor(5.0);
  ck_assert_double_eq(result, 5.0);
}

START_TEST(floor_negative_integer) {
  long double result = s21_floor(-5.0);
  ck_assert_double_eq(result, -5.0);
}

START_TEST(floor_positive_non_integer) {
  long double result = s21_floor(3.14);
  ck_assert_double_eq(result, 3.0);
}

START_TEST(floor_negative_non_integer) {
  long double result = s21_floor(-3.14);
  ck_assert_double_eq(result, -4.0);
}

START_TEST(fabs_positive) {
  long double result = s21_fabs(5.0);
  ck_assert_double_eq(result, 5.0);
}

START_TEST(fabs_negative) {
  long double result = s21_fabs(-5.0);
  ck_assert_double_eq(result, 5.0);
}

START_TEST(fabs_zero) {
  long double result = s21_fabs(0.0);
  ck_assert_double_eq(result, 0.0);
}

// Add more tests for other functions...

Suite *my_math_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("MyMath");

  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, abs_positive);
  tcase_add_test(tc_core, abs_negative);

  tcase_add_test(tc_core, ceil_positive_integer);
  tcase_add_test(tc_core, ceil_negative_integer);
  tcase_add_test(tc_core, ceil_positive_non_integer);
  tcase_add_test(tc_core, ceil_negative_non_integer);

  tcase_add_test(tc_core, floor_positive_integer);
  tcase_add_test(tc_core, floor_negative_integer);
  tcase_add_test(tc_core, floor_positive_non_integer);
  tcase_add_test(tc_core, floor_negative_non_integer);

  tcase_add_test(tc_core, fabs_positive);
  tcase_add_test(tc_core, fabs_negative);
  tcase_add_test(tc_core, fabs_zero);

  // Add more tests for other functions...

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