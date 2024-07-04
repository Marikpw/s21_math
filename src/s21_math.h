#ifndef S21_MATH_H
#define S21_MATH_H
#include <stdio.h>
#include <stdlib.h>

#define S21_PI 3.14159265358979323846
#define S21_PI_2 1.57079632679489661923
#define S21_NAN (0.0 / 0.0)
#define S21_NAN_2 0.0 / 0.0
#define S21_INFINITY (+1.0 / 0.0)
#define S21_INFINITY_NEG (-1.0 / 0.0)
#define S21_SQRT2 1.4142135623730950488016887
#define S21_IS_NAN(x) (x != x)
#define S21_IS_INFINITY(x) (x == S21_INFINITY || x == S21_INFINITY_NEG)
#define S21_EPS 1e-17
#define s21_isnan(x) __builtin_isnan(x)

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_factorial(long long int x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif