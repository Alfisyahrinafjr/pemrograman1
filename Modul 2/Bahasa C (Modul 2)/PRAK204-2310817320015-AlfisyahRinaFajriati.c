#include <stdio.h>
#include <math.h>
int main(void){
    printf("input\n");
    int r,t;
    printf("");
    scanf("%d" "%d" , &r, &t);

    float phi = 3.14;
    float bejana = phi * r * r;
    float volume = phi * (r * r) * t;
    float keliling = 2 * phi * r;
    float luas = 2 * phi * r * ( r + t );

    printf("\nOutput\n");
    printf("Volume : %.2f\n", round(volume));
    printf("Luas : %.2f\n", round(luas));
    printf("Keliling : %.2f\n", round(keliling));

    return 0;
}