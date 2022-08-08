#include<stdio.h>
#include<stdio.h>
# include<math.h>
void main()
{
    //Area of right angled Triangle//
    float h, w,area;
    printf("Enter height and width of the given triangle:\n ");
    scanf("%f%f", &h, &w);
    area = 0.5 * h * w;
    printf("Area of right angled triangle is: %f\n", area);

    //Area of equilateral Triangle//
    float s, area1;
    printf("Enter the length of side of equilateral triangle\n");
    scanf("%f", &s);
    area1 = sqrt(3)/4 * s * s;
    printf("Area of Equilateral triangle : %f\n", area1);

    //Area of Isosceles Triangle//
    float a,b,area2;
	printf("Enter the length of same sided: ");
	scanf("%f",&a);
	printf("Enter the side2 of the Triangle: ");
	scanf("%f",&b);
	area2 =(b*sqrt((4*a*a)-(b*b)))/4;
	printf("Area of Isosceles Triangle: %f\n",area2);

    //Area of a Triangle withb three sides(Heron's Formula)
     float a1, b1, c1, Perimeter, s1, Area3;
  printf("\nPlease Enter three sides of triangle\n");
  scanf("%f%f%f",&a1,&b1,&c1); 
  Perimeter = a1+b1+c1;
  s1 = (a1+b1+c1)/2;
  Area3 = sqrt(s1*(s1-a1)(s1-b1)(s1-c1));
  printf("\n Perimeter of Traiangle = %f\n", Perimeter);
  printf("\n Semi Perimeter of Triangle = %f\n",s1);
  printf("\n Area of triangle with 3 sides = %f\n",Area3);
}