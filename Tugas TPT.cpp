#include <iostream>

using namespace std;

int main(){
 int pilihan,totalPaket,banyak,hasil=0;
 char pilihanPaket,yesNo;
 int diskon = 10;
 int x=0;
 int totalSeluruhPesanan[x];

 cout<<"===Nasi Goreng Kemecos==="<<endl;
 cout<<"List Menu : "<<endl;
 cout<<"1. Nasi Goreng"<<endl;
 cout<<"2. Bihun Goreng"<<endl;
 cout<<"3. Mie Goreng"<<endl;

 do{
  cout<<"Masukan Menu Yang Di Pilih : ";
  cin>>pilihan;
system("CLS");
  switch(pilihan){
   case 1:
    cout<<"Menu Nasi Goreng"<<endl;
    cout<<"A. Nasi Goreng Ayam    : Rp.15.000,00"<<endl;
    cout<<"B. Nasi Goreng Kambing : Rp.25.000,00"<<endl;
    cout<<"C. Nasi Goreng Gila    : Rp.25.000,00"<<endl;

    cout<<"Masukkan Pilihan Menu : ";
    cin>>pilihanPaket;

    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
     totalPaket=15000;
    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
     totalPaket=25000;
    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
     totalPaket=25000;
    } else {
     cout<<"Menu Tidak Tersedia"<<endl;
    }

    cout<<"Berapa Banyak Pesanan? ";
    cin>>banyak;

    totalSeluruhPesanan[x]=totalPaket*banyak;

    cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
    cin>>yesNo;

   break;

   case 2:
    cout<<"Menu Bihun Goreng"<<endl;
    cout<<"A. Bihun Goreng Ayam        : Rp.15.000,00"<<endl;
    cout<<"B. Bihun Goreng Ati Ampla   : Rp.20.000,00"<<endl;
    cout<<"C. Bihun Goreng Spesial     : Rp.25.000,00"<<endl;

    cout<<"Masukkan Pilihan Menu : ";
    cin>>pilihanPaket;;

    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
     totalPaket=15000;
    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
     totalPaket=20000;
    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
     totalPaket=25000;
    } else {
     cout<<"Menu Tidak Tersedia"<<endl;
    }

    cout<<"Berapa Banyak Pesanan? ";
    cin>>banyak;

    totalSeluruhPesanan[x]=totalPaket*banyak;

    cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
    cin>>yesNo;
   break;

   case 3:
    cout<<"Menu Mie Goreng"<<endl;
    cout<<"A. Mie Goreng Ayam               : Rp.15.000,00"<<endl;
    cout<<"B. Mie Goreng Sosis dan Telor    : Rp.16.000,00"<<endl;
    cout<<"C. Mie Goreng Spesial            : Rp.25.000,00"<<endl;

    cout<<"Masukkan Pilihan Menu : ";
    cin>>pilihanPaket;;

    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
     totalPaket=15000;
    } else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
     totalPaket=16000;
    } else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
     totalPaket=25000;
    } else {
     cout<<"Menu Tidak Tersedia"<<endl;
    }

    cout<<"Berapa Banyak Pesanan? ";
    cin>>banyak;

    totalSeluruhPesanan[x]=totalPaket*banyak;

    cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
    cin>>yesNo;

   break;

  }
  x++;
 } while(yesNo == 'Y' || yesNo == 'y');

 cout<<"Pembayaran : "<<endl;

 for(int i=0;i<x;i++){
  hasil=hasil+totalSeluruhPesanan[i];
 }
 system("CLS");
 cout<<"Total Jumlah Pesanan : "<<hasil<<endl;
 cout<<"Diskon 10% : "<<hasil/diskon<<endl;
cout<<"Total Bayar : "<<hasil - (hasil/diskon)<<endl;
cout<<"===Terima Kasih Telah Datang di Restoran Kami==="<<endl;
}
