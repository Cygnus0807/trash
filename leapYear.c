#include<stdio.h>

int main()  {
    int year;
    printf("enter the year: ") ;
    scanf("%d",&year) ;
    int result = year%4 ;
    if (result==0) {
        printf("%d is a leap year",year) ;
    }else{
        printf("%d is not a leap year",year);
    }
    return 0;
}