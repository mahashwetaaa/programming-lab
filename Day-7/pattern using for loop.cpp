#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (j = 1; j <= (2 * (n - i) - 1); j++) {
            printf(" ");
        }

        if (i != n) {
            for (j = i; j >= 1; j--) {
                printf("%d", j);
            }
        } else {
            for (j = i - 1; j >= 1; j--) {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}

