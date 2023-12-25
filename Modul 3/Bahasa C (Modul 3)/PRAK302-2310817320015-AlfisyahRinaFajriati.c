#include<stdio.h>
int main()
{
    int angka;
    printf("Input\n");
    scanf("%d", &angka);

    printf("\nOutput");
    if (angka >= 80) {
            printf("\nA");
        }
    if (angka >= 70 && angka <=80) {
            printf("\nB");
        }
    if (angka >= 60 && angka <= 70) {
        printf("\nC");
    }
    if (angka >= 50 && angka <= 60) {
        printf("\nD");
    }
    if (angka < 50) {
        printf("\nE");
    }
    return 0;
}
