#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    printf(" Celsius = %.2f Fahrenheit", fahrenheit);

    return 0;
}