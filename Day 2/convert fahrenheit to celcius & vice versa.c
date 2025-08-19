#include <stdio.h>
int main()
{
	float F,C;
	printf("Enter the temperature in Farenheit: ");
	scanf("%f",&F);
	
	C = ((F-32)*5)/9;
	
	printf("Temperature in Celsius: %f\n", C);
	
	printf("Enter the temperature in Celsius: ");
	scanf("%f",&C);
	
	F = ((C*9)/5)+32;
	
	printf("Temperature in Farenheit: %f", F);
	return 0;
}
