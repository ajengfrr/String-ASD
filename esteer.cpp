#include <string.h>
#include <stdio.h>

char *baca(char nama[100]) {
    FILE *pFile;
    char *buf = new char[10000];
    pFile = fopen(nama,"r");
    int i=0;
    while (!feof(pFile)) {
        char c = fgetc(pFile);
        buf[i++]=c;
    }
    fclose(pFile);
    return buf;
}

int main(){
    char *teks;
    char kata[50];
    teks=baca("dokumen.txt");
    printf("cari kata: ");
    gets(kata);
    char *pos=strstr(teks,kata);
        if (pos==0){
        printf("\nkata \"%s\" tidak ditemukan",kata);
    }
    else {
        printf("\nkata \"%s\" ada pada posisi: %d",kata,pos-teks);
    }
    return 0;
}
