#include <stdio.h>
void Biodata(int tahunLahir, char *Namaku, char *Asal){
int tahun_sekarang = 2023;
int umur = tahun_sekarang - tahunLahir;
printf("Perkenalkan nama saya: %s\n", Namaku);
printf("Umur saya: %d\n", umur);
printf("Saya adalah angkatan: %d\n", tahun_sekarang);
printf("Asal saya dari: %s\n", Asal);
}

int main() {
int tahunLahir;
 char Namaku[20], Asal[15];
 scanf(" %d",&tahunLahir);
 scanf(" %[^\n]%*c",&Namaku);
 scanf(" %[^\n]%*c",&Asal);
Biodata(tahunLahir, Namaku, Asal);
return 0;
}