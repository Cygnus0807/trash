#include <stdio.h>

int main() {
    float n , sum=0; 
    printf ( "enter the no of terms : ");
    scanf ("%f", n) ;
    
    for (float i =1 ; i<=n ; i++ ) {
        sum= sum+(1/i);
    }
    printf (" sum  is %f ",n) ;
    return 0;
}