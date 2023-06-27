#include <assert.h>
#include <math.h>
#include "Conversion.h"

int FloatEquals(float a, float b, float epsilon);

int main() {
    assert(FloatEquals(0, Celsius(32), 0.1));
    assert(FloatEquals(20, Celsius(68), 0.1));
    assert(FloatEquals(300, Celsius(572), 0.1));
    assert(FloatEquals(-10, Celsius(14), 0.1));
    assert(FloatEquals(-20, Celsius(-4), 0.1));

    assert(FloatEquals(0, Fahrenheit(-17.8), 0.1));
    assert(FloatEquals(100, Fahrenheit(37.8), 0.1));
    assert(FloatEquals(300, Fahrenheit(148.9), 0.1));
    assert(FloatEquals(14, Fahrenheit(-10), 0.1));
    assert(FloatEquals(-4, Fahrenheit(-20), 0.1));
}

int FloatEquals(float a, float b, float epsilon){
    return fabs(a - b) < epsilon;
}