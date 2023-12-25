#include <stdio.h>

int main(){
    int angka1 = 958730;
    int angka2 = 5;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", angka1);
    printf("Jumlah pahlawan = %d\n", angka2);

    int jumlah_pasukan = (angka1 / angka2);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", jumlah_pasukan);
    return 0;
}