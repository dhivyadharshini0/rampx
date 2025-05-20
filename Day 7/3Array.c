#include <stdio.h>

int main() {
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};
    int arr3[6];

    for(int i = 0; i < 3; i++) {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < 3; i++) {
        arr3[i + 3] = arr2[i];
    }

    printf("Combined array arr3:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
