#include <stdio.h>
int main()
{
	int a = 8;
	int b = 12;
	printf("Az a régi értéke:");
	printf("%d\n",a);
	printf("Az b régi értéke:");
	printf("%d\n",b);
	
	
	a = a * b;
	b = a / b;
	a = a / b;

	printf("Az a új értéke:");
	printf("%d\n",a);
	printf("Az b új értéke:");
	printf("%d\n",b);
}


