#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double res = 0;
  long double copy = base;
  if (s21_isnan(s21_fabs(copy))) {
    if (s21_fabs(exp) != 0) {
      res = S21_NAN;
    } else {
      res = 1;
    }
  } else if (s21_fabs(copy) == S21_INFINITY) {
    if (copy == S21_INFINITY) {
      if (s21_isnan(exp)) {
        res = S21_NAN;
      } else if (exp > 0) {
        res = S21_INFINITY;
      } else if (exp < 0) {
        res = 0;
      } else {
        res = 1;
      }
    } else {
      if (s21_isnan(exp)) {
        res = S21_NAN;
      } else if (exp > 0) {
        res = S21_INFINITY;
        if (s21_fmod(exp, 2) != 0 && s21_fabs(exp) != S21_INFINITY) res *= -1;
      } else if (exp < 0) {
        res = 0;
        if (s21_fmod(exp, 2) != 0 && s21_fabs(exp) != S21_INFINITY) res *= -1;
      } else {
        res = 1;
      }
    }
  } else if (s21_fabs(copy) == 1) {
    if (copy == 1) {
      res = 1;
    } else {
      if (s21_isnan(exp)) {
        res = S21_NAN;
      } else {
        res = 1;
        if (s21_fmod(exp, 1) != 0 && s21_fabs(exp) != S21_INFINITY) {
          res = S21_NAN;
        } else if (s21_fmod(exp, 2) != 0 && s21_fabs(exp) != S21_INFINITY)
          res *= -1;
      }
    }
  } else if (s21_fabs(copy) == 0) {
    if (s21_isnan(s21_fabs(exp))) {
      res = S21_NAN;
    } else if (exp < 0) {
      res = S21_INFINITY;
    } else if (exp > 0) {
      res = 0;
    } else {
      res = 1;
    }
  } else {
    if (copy < 0) {
      copy = -copy;
      if ((long long int)exp == exp) {
        res = s21_exp(exp * s21_log(copy));
        if (s21_fmod(exp, 2) != 0) {
          res = -res;
        }
      }
    } else {
      res = s21_exp(exp * s21_log(copy));
    }
  }
  return res;
}