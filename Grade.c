#include<stdio.h>
int main()
{
	int p,c,m,t;
	double a;
	printf("Enter marks of three subjects ");
	scanf("%d%d%d",&p,&c,&m);
	t=p+c+m;
	a=(double)t/3;//Type casting
	printf("Total marks: %d\n",t);
	printf("Average: %.2lf\n",a);
	if(a>=90)
		printf("Grade: A");
	else if(a>=80)
		printf("Grade: B");
	else if(a>=60)
		printf("Grade: C");
	else if(a>=45)
		printf("Grade: D");
	else if(a>=30)
		printf("Grade: E");
	else
		printf("FAIL");
	return 0;
}
