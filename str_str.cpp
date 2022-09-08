#include <string.h>
#include <stdio.h>

int main(){
    char teks[100];
    char kata[50];
    printf("kalimat: ");
    gets(teks);
    printf("\ncari kata: ");
    gets(kata);
    char *pos=strstr(teks,kata);
    if (pos==0){
        printf("\nkata \"%s\" tidak ditemukan",kata);
    }
    else {
        printf("\nkata \"%s\" ada pada posisi: %d",kata,pos-teks);
    }
    printf("\n\nalamat teks: %d",teks);
    printf("\nhasil  cari: %d",pos);
    return 0;
}
