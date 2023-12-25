#include<stdio.h>

int main(){
    float a = 5, b = 14;
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", a);
    printf("Jarak tempuh pak Dengklek = %.f kilometer\n\n", b);
    float keliling = b/a;
    float jari_jari = keliling/(2*3.14);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi pak Dengklek adalah %.2f kilometer", jari_jari);
    return 0;
}