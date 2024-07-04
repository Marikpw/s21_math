#include "s21_math.h"

long double s21_log(double x) {
  double res = 0;
  double compare = 0;
  if (x < 0 || x != x) {
    res = 0.0 / 0.0;
  } else if (x == 0) {
    res = -S21_INFINITY;
  } else if (x == 1) {
    res = (double)0.0;
  } else if (x == S21_INFINITY) {
    res = x;
  } else {
    for (int i = 0; i < 100; i++) {
      compare = res;
      res = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
  }
  return res;
}