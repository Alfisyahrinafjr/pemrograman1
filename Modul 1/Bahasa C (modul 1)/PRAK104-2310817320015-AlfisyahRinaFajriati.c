#include <stdio.h>
int main(){
    int a = 400000; 
    int b = 350000;
    float sum_a = a-(a*13/100) , sum_b = b-(b*21/100);

    printf("Harga sepatu a adalah %d\n", a);
    printf("Harga sepatu b adalah %d\n");
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %.0f\n", sum_a);
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %.0f", sum_b);

    return 0;
}