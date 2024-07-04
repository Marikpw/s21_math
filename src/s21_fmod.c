#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = 0;
  long long int mod = 0;
  if (y == -S21_INFINITY || y == S21_INFINITY) {
    res = x;
  } else {
    mod = x / y;
    res = (long double)x - mod * (long double)y;
  }
  return res;
}