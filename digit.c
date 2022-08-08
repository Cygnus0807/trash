#include <stdio.h>
int main()
{
    int n, sum = 0, r;
    int d=0;
    printf("enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
        d=d+1;
    }
    printf("no. of digits is =%d \n",d);
    printf("sum is =%d", sum);
    return 0;
}