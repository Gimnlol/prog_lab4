#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    double arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }

    double x = atof(argv[1]);
    int k = atoi(argv[2]);

    for (int i = 10 - 1; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k] = x;

    for (int i = 0; i < 10; i++) {
        printf("%g ", arr[i]);
    }
    printf("\n");

    return 0;
}
