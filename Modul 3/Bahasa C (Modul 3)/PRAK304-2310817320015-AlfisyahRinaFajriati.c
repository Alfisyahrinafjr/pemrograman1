#include <stdio.h>
int main(){
    int angka;
    printf("Input\n");
    scanf("%d", &angka);
    scanf("%d", &angka);
    scanf("%d", &angka);
    scanf("%d", &angka);
    scanf("%d", &angka);
    
    printf("\nOutput");
    if(angka >= 0){
        if(angka > 0){
            printf("\nSatuan");
        }else{
            printf("\nSatuan");
        }
    }
    if(angka == 0){
            printf("\nNol");
        }else{
            printf("\nNol");
        }
    
    if(angka <= 99){
        if(angka < 99){
            printf("\nAnda Menginput Melebihi Limit Bilangan");
        }
    }
    if(angka >= 20){
            printf("\nPuluhan");
        }else{
            printf("\nPuluhan");
        }
    
    if(angka >= 10){
        if(angka > 10){
            printf("\nBelasan");
        }else{
            printf("\nBelasan");
        }
    }
    return 0;
}