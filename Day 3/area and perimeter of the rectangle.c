#include <stdio.h>
int main()
{
	int a,b,area,perimeter;
	printf("ENTER THE LENGTH OF A RECTANGLE:");
	scanf("%d",&a);
	printf("ENTER THE BREADTH OF A RECTANGLE:");
	scanf("%d",&b);
	
	area= a*b;
	perimeter= 2*(a+b);
	
	printf("AREA OF THE RECTANGLE IS %d\n",area);
	printf("PERIMETER OF THE RECTANGLE IS %d\n", perimeter);
	return 0;
	
}
