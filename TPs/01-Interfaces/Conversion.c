#include "Conversion.h"

float Celsius(float fahrenheit){
    return (5.0/9.0) * (fahrenheit - 32);
}

float Fahrenheit(float celsius){
    return (celsius * 9.0)/5.0 + 32;
}