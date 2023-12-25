#include <stdio.h>
int main(){
    printf("Input\n");
    int bil1, bil2, a, b, x, y, z, hasil, total ;
    scanf("%d %d", &bil1, &bil2);
    
    printf("\nOutput\n");
    for (a = 1; a <= bil1; a++){
        for (b = a; b > 1; b--){
            printf("(%d * %d) + ", b, bil2); }
        for (x = 1, hasil = x * bil2; x < a; x++, hasil += (x * bil2)){}
        printf("(%d * %d) = %d\n", b, bil2, hasil); }
    for (y = 1, z = 1, total = 0; y <= bil1; z += y + 1,  y++) {
        total += z * bil2 ; }
    printf("%d", total);

    return 0;
}