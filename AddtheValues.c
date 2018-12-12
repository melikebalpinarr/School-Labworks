#include <stdio.h>

int main()
{
	int a, b, result;

	result = 0;

	printf("Enter the first value: ");
	scanf_s("%d", &a);

	printf("Enter the second value: ");
	scanf_s("%d", &b);

	result = a + b;
	printf("%d+%d=%d" ,a,b,result);

	printf("Result:     %d\n", result);

	getchar();
	
	return 0;


}