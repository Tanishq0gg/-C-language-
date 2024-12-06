#include <stdio.h>

int main() {

    float milligrams = 5.0;
    float kilograms;


    kilograms = milligrams * 0.000001;


    printf("Weight in Milligrams: %.2f mg\n", milligrams);
    printf("Weight in Kilograms: %.6f kg\n", kilograms);

    return 0;
}
