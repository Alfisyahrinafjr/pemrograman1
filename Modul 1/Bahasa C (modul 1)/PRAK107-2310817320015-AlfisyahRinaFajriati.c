#include <stdio.h>
int main(){
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int keliling = 16;
    int tanah = 85000;
    int biaya = keliling*tanah;
    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling tanah pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah per meter adalah %d\n", tanah);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan pak Dengklek adalah: Rp %d\n", biaya);
    return 0;
}