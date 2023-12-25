#include <stdio.h>
int main(){
    int a; float x , y ;
    while(a != 5) {
        printf("Pilih Program : \n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : "); scanf("%d", &a);
        if (a > 5 || a <= 0){
            printf("Input anda salah, silahkan coba lagi\n\n");}
        else if (a == 5){
            break ; }
        else {
            printf("Masukkan nilai pertama : "); scanf("%f", &x);
            printf("Masukkan nilai kedua : "); scanf("%f", &y);
            if (a == 1){
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x + y);}
            else if (a == 2){
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x - y);}
            else if (a == 3){
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x * y);}
            else {
                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", x, y, x / y);} }}
    printf("Terimakasih, telah menggunakan kalkulator Alfisyh Rina Fajriati");
    
    return 0;
}