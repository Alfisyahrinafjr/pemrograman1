#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    int hasil_hitung = nilai1 - nilai2;
    if (hasil_hitung < 0) {
        return hasil_hitung *= -1;
    } else {
        return hasil_hitung;
    }
}
int mutlak(int angka){
    return (angka < 0) ? -angka : angka;
}
int main()
{
    int a,b,c,d,Hasil;
 
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
 
 Hasil = hitung(a,b) + hitung(c,d);
 printf("%d",mutlak(Hasil));
 return 0;
}