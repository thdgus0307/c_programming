#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int num;
	int a = 2;
	int v = 0;
	
	printf("Please enter a number:");
	scanf("%d", &num);

	if (num <= 1) {
		printf("It is not a prime number.");
	}

	do {
		if (num % a == 0)
		{
			printf("It is not a prime number.");
			v = 0;
			break;
		}
		else
		{
			a++;
			v = 1;
		}
	} while (a < num);

	if (v == 1)
		printf("It is a prime number");

}