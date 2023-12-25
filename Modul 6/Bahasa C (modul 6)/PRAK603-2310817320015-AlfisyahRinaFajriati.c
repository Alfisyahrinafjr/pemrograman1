#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    int A[1][n1], B[n1][1];

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < 1; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int hasil[1][n1];

    for (int i = 0; i < n1; i++) {
        hasil[0][i] = A[0][i] * B[i][0];
    }

    for (int i = 0; i < n1; i++) {
        printf("%d ", hasil[0][i]);
    }

    return 0;
}