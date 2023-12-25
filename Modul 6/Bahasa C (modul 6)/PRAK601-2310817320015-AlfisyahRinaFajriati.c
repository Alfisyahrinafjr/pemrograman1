#include <stdio.h>
int main(){

    int baris, kolom;

    printf("");
    scanf("%d", &baris);
    printf("");
    scanf("%d", &kolom);

    int matrix[baris][kolom];
    int i, j;

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%3d", matrix[i][j]);
        }
    printf("\n");
    }

    return 0;
}