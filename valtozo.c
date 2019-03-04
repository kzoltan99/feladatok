#include <stdio.h>
int main()
{
	int a = 8;
	int b = 12;
	printf("Az a értéke:");
	printf("%d\n",a);
	printf("Az b értéke:");
	printf("%d\n",b);
	
	
	a = a * b;
	b = a / b;
	a = a / b;

	printf("Az a értéke:");
	printf("%d\n",a);
	printf("Az b értéke:");
	printf("%d\n",b);
}


