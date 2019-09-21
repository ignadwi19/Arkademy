/******************************************************************************

                            Seleksi Bootcamp Arkademy.
                                Soal test nomor 4.
                                 Igna Dwi Utami

*******************************************************************************/
#include <stdio.h>

int main() {
int row,col,i,j,k=1;
int kali;
    printf("program ini akan mencetak deret fibonacci pada matriks dengan panjang baris dan kolom yang anda tentukan \n");
    printf("masukkan panjang baris  : \n");
    scanf("%d",&row);
    printf("masukkan panjang kolom  : \n");
    scanf("%d",&col);
kali=col*row;
int m[kali];
for (i=1;i<=kali;i++) {
           if(i==1){
               m[i]=0;
           }
           else if(i==2){
            m[i]=1;
         }
            else if(i>2){
                m[i]= m[i-1] + m[i-2];
            }
           }
kali=1;
for (i=1;i<=row;i++){
    for (j=1;j<=col;j++){
        printf("%d ",m[kali]);
        kali++;
    }
    
     printf("\n");

}
}