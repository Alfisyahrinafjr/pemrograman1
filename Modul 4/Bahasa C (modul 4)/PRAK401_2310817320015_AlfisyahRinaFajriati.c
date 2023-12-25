#include <stdio.h>
int main(){
    printf("Input\n");
    int n;
    char symbol;
    printf(" ");
    scanf("%d" "%c", &n, &symbol);
    
    printf("\nOutput\n");
    for (int i = 1; i <= 50; i++){
        if (i % n == 0){
            printf("%c ", symbol);
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}