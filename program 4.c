#include <stdio.h>

int main() {

    float celsius = 50.0;
    float fahrenheit;


    fahrenheit = (celsius * 9.0 / 5.0) + 32;


    printf("Temperature in Celsius: %.2f°C\n", celsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}

