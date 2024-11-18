#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define SIZE 5

double calculate_standard_deviation(double arr[], int size) {
    double sum = 0.0;
    double mean, variance = 0.0, standard_deviation;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    mean = sum / size;

    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;

    standard_deviation = sqrt(variance);

    return standard_deviation;
}

int main() {
    double numbers[SIZE];

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }

    double std_dev = calculate_standard_deviation(numbers, SIZE);
    printf("Standard Deviation = %.3f\n", std_dev);

    return 0;
}
