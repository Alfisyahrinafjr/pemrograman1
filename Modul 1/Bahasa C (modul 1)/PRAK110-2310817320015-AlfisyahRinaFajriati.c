#include <stdio.h>

int main(){
    
    int alas = 5;
    int tinggi = 12;
    int miring = (alas*2 + tinggi*2) * 0.4;

    printf("Diketahui:\n");
    printf("alas = 5 cm\n");
    printf("Tinggi = 12 cm\n\n");
    printf("Jawab:\n");
    printf("sisi A = %d cm\n", tinggi);
    printf("sisi B = %d cm\n", miring);
    printf("sisi c = %d cm\n", alas);
    int keliling = alas + tinggi + miring;
    int luas = (alas * tinggi) / 2;
    printf("keliling = %d cm\n", keliling);
    printf("luas = %d cm", luas);
    return 0;
}