/******************************************************************************

                            Seleksi Bootcamp Arkademy.
                                Soal test nomor 4.
                                 Igna Dwi Utami

*******************************************************************************/
#include <stdio.h>

int main() {
int row,col,i,j;
int m[i][j];
    printf("program ini akan mencetak deret fibonacci pada matriks dengan panjang baris dan kolom yang anda tentukan \n");
    printf("masukkan panjang baris  : \n");
    scanf("%d",&row);
    printf("masukkan panjang kolom  : \n");
    scanf("%d",&col);

for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
           if(i==1 && j==1){
               m[i][j] = 0;
           printf ("%d ",m[i][j]);
           }
           else if(i==1 && j==2){
            m[i][j]=1;
          printf ("%d ",m[i][j]); }

            else {
                m[i][j] = m[i][j-1] + m[i][j-2];
                printf ("%d ",m[i][j]);
            }
           }
     printf("\n");
    }
}
