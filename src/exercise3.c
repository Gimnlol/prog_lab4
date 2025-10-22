#include <stdio.h>

int main() {
    double arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if (k > 0) {
        for (int i = 0; i < 10; i++) {
            printf("%g ", arr[(i - k + 10) % 10]);
        }
    } else if (k < 0) {
        k = -k;
        for (int i = 0; i < 10; i++) {
            printf("%g ", arr[(i + k) % 10]);
        }
    }

    printf("\n");
    return 0;
}
