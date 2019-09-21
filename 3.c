/******************************************************************************

                            Seleksi Bootcamp Arkademy.
                                Soal test nomor 3.
                                 Igna Dwi Utami

*******************************************************************************/
#include <stdio.h>

int main(){
int a;
int jumlah;
printf("masukkan jumlah orang yang akan berjabat tangan : \n");
scanf("%d",&a);

for (int i=a;i>0;i--)
{
	jumlah = jumlah + (i - 1);
	
	}
printf("jumlah jabat tangan yang terjadi dari %i orang adalah : %i ", a,jumlah);

}
