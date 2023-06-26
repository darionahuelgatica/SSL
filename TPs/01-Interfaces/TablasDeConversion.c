#include <stdio.h>
#include "./Conversion.h"

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = Celsius(fahr);
        printf("%6.1f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    printf("\n");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = Fahrenheit(celsius);
        printf("%6.1f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
}