#include <stdio.h>
int main(){
    int a1,a2;
    int b1,b2;
    int c1,c2;
    printf("Input\n");
    scanf("%d" "%d" , &a1, &a2);
    scanf("%d" "%d" , &b1, &b2);
    scanf("%d" "%d" , &c1, &c2);

    printf("\nOutput\n");
    if(a1 > a2){
        if(a2 < a1){
           printf("%d %d\n", a2, a1); 
        } else {
           printf("%d %d\n", a2, a1);
        }
    }

    if(b1 < b2){
        printf("%d %d\n", b1, b2);
    } else {
        printf("%d %d\n", b1, b2);
    }

    if(c1 > c2){
        printf("%d %d", c2, c1);
    } else {
        printf("%d %d", c2, c1);
    }
    return 0;
}