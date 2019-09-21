/******************************************************************************

                            Seleksi Bootcamp Arkademy.
                                Soal test nomor 5.
                                 Igna Dwi Utami

*******************************************************************************/
#include <stdio.h>

int main() {
int tgl,uang,mie;

    printf("masukkan tanggal (1-30) : \n");
     scanf("%d",&tgl);
    printf("masukkan jumlah uang : \n");
    scanf("%d",&uang);

    mie = uang/2500;

//Bonus mie pada tanggal ganjil
if (tgl%2== 1) {
    //bonus mie pada tanggal ganjil dengan kelipatan tanggal 5 dan jumlah bonus genap
    if (tgl%5==0 && ((mie/3)%2==0)) {
    mie = mie + ((mie/3)*10);
    printf("jumlah mie yang didapat dari pembelian Rp %d di tanggal %d sejumlah %d mie",uang,tgl,mie);
    }
    
    //bonus mie pada tanggal ganjil dengan kelipatan tanggal 5 dan jumlah bonus ganjil
    else if (tgl%5==0 && ((mie/3)%2==1)){
    mie = mie + ((mie/3)*5);
    printf("jumlah mie yang didapat dari pembelian Rp %d di tanggal %d sejumlah %d mie",uang,tgl,mie);
    }
    
    //bonus mie pada tanggal ganjil aja
    else {
    mie = mie + (mie/3);
    printf("jumlah mie yang didapat dari pembelian Rp %d di tanggal %d sejumlah %d mie",uang,tgl,mie);
    } }

//bonus mie pada tanggal genap 
else if(tgl%2== 0){
    mie = mie + (mie/4);
printf("jumlah mie yang didapat dari pembelian Rp %d di tanggal %d sejumlah %d mie",uang,tgl,mie);
}

}