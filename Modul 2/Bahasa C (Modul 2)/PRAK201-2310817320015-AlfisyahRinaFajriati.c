#include <stdio.h>
int main(){
    printf("Input\n");
    char nama[50], nim[15], paralel[5], ttl[60], alamat[200], hobby[60], telp[15];
    printf("Nama : ");
    fgets(nama, sizeof(nama),stdin);
    printf("NIM : ");
    fgets(nim, sizeof(nim),stdin);
    printf("Kelas Paralel : ");
    fgets(paralel, sizeof(paralel),stdin);
    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, sizeof(ttl),stdin);
    printf("Alamat : ");
    fgets(alamat, sizeof(alamat),stdin);
    printf("Hobby : ");
    fgets(hobby, sizeof(hobby),stdin);
    printf("No Telepon : ");
    fgets(telp, sizeof(telp),stdin);
    
    printf("\nOutput\n");
    printf("Nama : %s ", nama);
    printf("NIM : %s ", nim);
    printf("Kelas Paralel : %s ");
    printf("Tempat/Tanggal Lahir : %s ", ttl);
    printf("Alamat : %s ", alamat);
    printf("Hobby : %s ", hobby);
    printf("No Telepon : %s ", telp);

    return 0;
}