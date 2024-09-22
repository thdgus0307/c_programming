#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	float num;
	printf("Please enter kilometers: ");
	scanf("%f", &num);

	printf("%.1f km is equal to %.1f miles.", num, num / 1.609);
	return 0;

}