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
    teks=baca("dokumen.txt");
    printf("\n\ntxt:\n%s",teks);
    printf("\n\nrev:\n%s",strrev(teks));
    printf("\n\nlwr:\n%s",strlwr(teks));
    printf("\n\nupr:\n%s",strupr(teks));
    return 0;
}
