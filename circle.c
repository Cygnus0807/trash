#include <stdio.h>

int main () {

    int r , area, perimeter ;
    
    printf ("enter the radius of circle : ") ;
    scanf ("%d",&r );

    area= (22/7)*r*r ;
    perimeter = 2*(22/7)*r ;

    printf ("area of circle = %d \n",area) ;
    printf (" perimeter of circle = %d ",perimeter) ;

    return 0;
}