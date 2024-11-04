#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[5];
    int even[5];
    int odd[5];
    int i;
    int eCount = 0, oCount = 0;

    printf("Please input five integers: ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);


    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[eCount] = arr[i];
            eCount += 1;
        }
        else
        {
            odd[oCount] = arr[i];
            oCount += 1;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }

}