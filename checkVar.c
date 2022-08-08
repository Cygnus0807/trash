#include <stdio.h>

int main()
{
    char n;
    printf("enter a character");

    scanf("%c", &n);

    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
    {
        printf("the chararcter %c is an Alphabet", n);
    }
    else
    {
        printf("%c is not alphabet", n);
    }
    return 0;
}