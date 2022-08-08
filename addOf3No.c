#include <stdio.h>

int main()
{

    int a, b, c;

    printf ("enter values a , b, c : " ) ;
    scanf("%d",&a) ;
    scanf ("%d",&b) ;
    scanf ("%d", &c) ;
    c = a + b + c;

    printf("sum of three no = %d ", c);

    return 0;
}