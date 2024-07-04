#include "s21_math.h"

long double s21_sqrt(double x) {
  if (S21_IS_NAN(x) || x == S21_INFINITY_NEG || x < 0) {
    return S21_NAN_2;
  } else if (x == S21_INFINITY || x == 0) {
    return (long double)x;
  } else {
    return s21_pow(x, 0.5);
  }
}