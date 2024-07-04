#include "s21_math.h"

long double s21_asin(double x) {
  double rez = x, t = x;
  int n = 1;
  if (x > 1 || x < -1) return S21_NAN;
  if (x == 1) {
    rez = S21_PI_2;
  } else if (x == -1) {
    rez = -S21_PI_2;
  } else {
    while (!(t >= -S21_EPS && t <= S21_EPS)) {
      t = ((t) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
      rez = rez + t;
      n++;
    }
  }
  return rez;
}