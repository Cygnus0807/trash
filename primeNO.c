#include <stdio.h>

int main()  {
    int n;
    printf("enter the no:");
    scanf ("%d",&n) ;

    if (n<2) {
        printf ("enter no is not prime") ;
    }
    else{
        for (int i=2; i<n ; i++) {
            if (n%i==0 ){
                printf ("enter no %d is not a prime no",n);
            }
            else {
                if (n%1!=0 && i==n-1) {
                     printf(" entered no %d is prime no",n) ;
                }
            } 
       }
    } return 0 ;
}