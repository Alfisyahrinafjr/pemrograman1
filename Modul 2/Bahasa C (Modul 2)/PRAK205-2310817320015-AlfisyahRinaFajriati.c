#include <stdio.h>
#include <math.h>
int main(){
    printf("Input\n");
    float a,b;
    printf("");
    scanf("%f" "%f" , &a, &b);

    float alas = sqrt(b*b - a*a);
    float tinggi = a;
    float keliling = a+b+alas;
    float luas = 0.5*alas*a;

    printf("\nOutput\n");
    printf("Alas : %.0f\n", alas);
    printf("Tinggi : %.0f\n", tinggi);
    printf("Keliling : %.0f\n", keliling);
    printf("Luas : %.0f cm^2\n", luas);

    return 0;
}