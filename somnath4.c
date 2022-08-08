#include <stdio.h>

int main()
{
    int n,digit,even_sum = 0,odd_sum = 0;
    printf("Enter the number ");
    scanf("%d",&n);

    while(n!=0){
        digit = n%10;
        if(digit % 2 == 0){
            even_sum += digit;
        }
        else{
            odd_sum += digit;
        }
        n = n/10;
    }

    printf("Odd sum = %d\n", odd_sum);
    printf("even sum = %d", even_sum);

    return 0;
}