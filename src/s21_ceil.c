#include <stdio.h>

long double s21_ceil(double x) {
  long double result;
  if (x >= 0.0) {
    result = (long double)((long long)(x + 0.9999999999999999L));
  } else {
    result = (long double)((long long)(x));
  }
  return result;
}
