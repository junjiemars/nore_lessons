
#include "sqrt.h"

#define abs(x) ((x) > 0.0 ? (x) : (-(x)))
#define average(x, y) (((x)+(y)) / 2)
#define square(x) ((x)*(x))

double sqrt_iter(double, double);
double good_enough(double, double);
double improve(double, double);

double SQRT_API _sqrt_(double n) {
    return sqrt_iter(1.0, n);
}

double sqrt_iter(double guess, double x) {
    if (good_enough(guess, x))
        return guess;
    else
        return sqrt_iter(improve(guess, x), x);
}

double good_enough(double guess, double x) {
    return abs(square(guess) - x) < (x * 0.00001);
}

double improve(double guess, double x) {
    return average(guess, (x / guess));
}
