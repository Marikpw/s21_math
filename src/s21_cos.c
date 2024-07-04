#include "s21_math.h"

long double s21_cos(double x) {
  long double result = 1.0;
  if (S21_IS_NAN(x) || s21_fabs(x) == S21_INFINITY) {
    result = S21_NAN;
  } else {
    double deg = 0.0;
    long double number = 1.0;
    long double big = s21_fmod(x, 2.0 * S21_PI);
    while (s21_fabs(number / result) > S21_EPS) {
      deg = deg + 2.0;
      number = (-number * big * big) / ((deg - 1.0) * deg);
      result += number;
    }
  }
  return result;
}
