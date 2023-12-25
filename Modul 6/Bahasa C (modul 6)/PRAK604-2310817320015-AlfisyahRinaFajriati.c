#include <stdio.h>
#include <string.h>

void main(){

    char kode[100], pesan[100] ;
    int karakter1, karakter2, i, bintang = 0, pagar = 0 ;
    scanf ("%[^\n]%*c", &kode) ;
    scanf ("%[^\n]%*c", &pesan) ;
    karakter1 = strlen (kode) ;
    karakter2 = strlen (pesan) ;
    if (karakter1 != karakter2) {
        printf ("Panjang kalimat berbeda, pesan palsu") ; }
    else {
        for (i = 0 ; i < karakter1 ; i++) {
            if (kode[i] == pesan[i]) {
                if (kode[i] == ' ') {
                    printf (" ") ; }
                else {
                    printf ("*") ;
                    bintang++ ; } }
            else {
                printf ("#") ;
                pagar++ ; } }
        printf ("\n* = %d", bintang) ;
        printf ("\n# = %d", pagar) ;
        if (bintang >= pagar) {
            printf ("\nPesan Asli\n") ; }
        else {
            printf ("\nPesan Palsu\n") ; } }
}