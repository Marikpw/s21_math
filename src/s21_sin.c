#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0, upper = 0, lower = 0;
  x = s21_fmod(x, 2 * S21_PI);
  for (int i = 0; i < 15; i++) {
    double exp = i;
    long double upper1 = 1;
    for (long long int j = 0; j < exp; j++) {
      upper1 = upper1 * -1;
    }
    exp = 2 * i + 1;
    long double upper2 = 1;
    for (long long int j = 0; j < exp; j++) {
      upper2 = upper2 * x;
    }
    upper = upper1 * upper2;
    lower = s21_factorial(2 * i + 1);
    res += upper / lower;
  }
  return res;
}