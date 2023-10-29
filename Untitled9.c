
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numList[100];

    for (int i = 0; i < 100; i++) {
        numList[i] = rand() % 1000;  // Generate random numbers between 0 and 999
    }

    bubbleSort(numList, 100);

    printf("Sorted numbers in descending order:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d", numList[i]);
        if (i != 99) {
            printf("->");
        }
    }

    return 0;
}
