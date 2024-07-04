#include "s21_math.h"

long double s21_atan(double x) {
  int flag = 0, size = 0;
  long double result = 0, x2 = 0;
  if (x < 0.F) {
    x = -x;
    flag |= 1;
  }
  if (x > s21_pow(10, 7)) {
    x = s21_pow(10, 7);
  }
  if (x > 1.F) {
    x = 1.F / x;
    flag |= 2;
  }
  while (x > (S21_PI / 12.F)) {
    size++;
    result = 1.F / (x + ((float)1.732050807569));
    x = ((x * ((float)1.732050807569)) - 1) * result;
  }
  x2 = s21_pow(x, 2);
  result = x * (0.55913709 / (1.4087812 + x2) + 0.60310579 - 0.05160454 * x2);
  while (size > 0) {
    result += (S21_PI / 6.F);
    size--;
  }
  (flag & 2) ? result = S21_PI_2 - result : result;
  (flag & 1) ? result = -result : result;
  return result;
}