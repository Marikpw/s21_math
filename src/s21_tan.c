#include "s21_math.h"

long double s21_tan(double x) {
  x = s21_fmod(x, S21_PI);
  long double cos1 = s21_cos(x);
  if (!cos1) {
    return S21_NAN_2;
  } else {
    return s21_sin(x) / cos1;
  }
}