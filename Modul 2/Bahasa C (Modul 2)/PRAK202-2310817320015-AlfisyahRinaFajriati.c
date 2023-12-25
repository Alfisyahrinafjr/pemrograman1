#include <stdio.h>
int main(){
    //case 1
    printf("Input\n");
    float nilai1,nilai2;

    printf("Masukan nilai pertama : ");
    scanf("%f", &nilai1);
    printf("Masukan nikai kedua : ");
    scanf("%f", &nilai2);

    float hasil1 =  nilai1 + nilai2;

    printf("\nOutput\n");
    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil1);
    
    //case 2
    printf("\nInput\n");
    float nilai3,nilai4;
    printf("Masukan nilai pertama : ");
    scanf("%f", &nilai3);
    printf("Masukan nilai kedua : ");
    scanf("%f", &nilai4);

    float hasil2 =  nilai3 + nilai4;

    printf("\nOutput\n");
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai3, nilai4, hasil2);

    return 0;
}