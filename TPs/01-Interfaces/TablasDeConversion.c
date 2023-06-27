#include <stdio.h>
#include "./Conversion.h"

const int LOWER = 0;
const int UPPER = 300;
const int STEP = 20;

int main() {
    float celsius, fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celsius = Celsius(fahr);
        printf("%6.1f\t%6.1f\n", fahr, celsius);
    }
    
    printf("\n");
    
    for(celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        fahr = Fahrenheit(celsius);
        printf("%6.1f\t%6.1f\n", celsius, fahr);
    }
}