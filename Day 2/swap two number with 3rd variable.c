#include<stdio.h>
int main()
{
	int A,B,C;
	printf("ENTER THE VALUE OF A:");
	scanf("%d",&A);
	printf("ENTER THE VALUE OF B:");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf("A=%d\n",A);
	printf("B=%d\n",B);
	return 0;
}
