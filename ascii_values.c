#include <stdio.h>

// you find ASCII character with there values.
// codes on construction.
// try 1 nd 2 only.

int main()
{
    char ch;
    int val;
    int c;
    int i;

    printf("0 to enter char \n , 1 to enter values \n & 3 to get all values: ");
    scanf("%d", &c);
    if (c == 0)
    {
        printf("enter character : ");
        scanf("%c", &ch);

        printf("ASCII value of ch is %d", ch);

        // kaam nhi kar rha */
    }

    else if (c == 1)
    {
        printf("enter the value :");
        scanf("%d", &val);
        printf(" ASCII character of val is %c ", val);
    }

    else
    {
        printf("for all ASCII value :");

        for (i = 1; i <= 127; i++)
        {
            printf("%d     :", i);
            printf("ASCII character of i is %c", i);
        }
    }
    return 0;
}
