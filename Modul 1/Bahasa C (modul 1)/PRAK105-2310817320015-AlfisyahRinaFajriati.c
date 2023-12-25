#include <stdio.h>
int main(){
    int a,b,x,y;

    a = 9;
    printf("Variabel a bernilai %d\n", a);
    b = 5;
    printf("variabel b bernilai %d\n", b);
    x = 8;
    printf("Variabel x bernilai %d\n", x);
    y = 8;
    printf("Variabel y bernilai %d\n", y);

    int jumlah = (a%b) + (x%y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", jumlah);
    return 0;
}