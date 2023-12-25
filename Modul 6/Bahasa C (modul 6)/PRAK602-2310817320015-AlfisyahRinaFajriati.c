#include <stdio.h>
int main() {
    
    int ruangan, i;
    scanf("%d", &ruangan);

    int zetsu_putih[ruangan];
    for (i = 0; i < ruangan; i++) {
        scanf("%d", &zetsu_putih[i]);
    }

    for (i = 0; i < ruangan; i++) {
        int hasil = zetsu_putih[i] * (i + 1);
        printf("%4d", hasil);
    }

    return 0;
}
