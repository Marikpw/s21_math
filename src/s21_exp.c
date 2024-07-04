#include "s21_math.h"

long double s21_exp(double x) {
  const double tolerance = 1e-15;
  long double result = 1.0;
  long double term = 1.0;
  int i = 1;

  while (s21_fabs(term) > tolerance) {
    term *= x / i;
    result += term;
    i++;
  }
  return result;
}