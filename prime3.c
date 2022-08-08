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
                if (n==n-1) {
                    printf ("enter no %d is not a prime no",n);
                }
                break;
            }
            else {
                printf(" entered no %d is prime no",n) ;
                break;
            } 
       }
    } return 0 ;
}