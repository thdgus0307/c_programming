#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int num)
{
	if (num == 0 || num == 1)
		printf("%d", num);
	else {
		binary(num / 2);
		printf("%d", num%2);

	}
}

int main(void)
{
	int number;
	printf("Please enter a number:");
	scanf("%d", &number);
	binary(number);

	return 0;
}