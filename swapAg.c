# include <stdio.h>

int main () {

    int a, b ,x ;

    printf ( "enter value for a : " ) ;
    scanf ( "%d",&a) ;
    printf ( "\n enter value for b : " ) ;
    scanf ( "%d",&b) ;
    
    x=a;
    a=b;
    b=x;

    printf ( "\n a=%d  \n  b=%d ", a,b);

    return 0;
}    