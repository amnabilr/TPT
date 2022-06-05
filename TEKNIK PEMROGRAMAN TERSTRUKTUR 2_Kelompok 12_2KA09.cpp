#include <iostream>
#include <stdlib.h>
#define SingleRoom 350000//nilai_konstanta dengan keyword define//
#define StandardTwin 800000//nilai_konstanta dengan keyword define//
#define Deluxe 950000//nilai_konstanta dengan keyword define//
#define Extra_Bed_Besar 75000//nilai_konstanta dengan keyword define//
#define Extra_Bed_Kecil 50000//nilai_konstanta dengan keyword define//
#define Laundry_Express 20000//nilai_konstanta dengan keyword define//
#define Dry_Cleaning 30000//nilai_konstanta dengan keyword define//
#define Lunch 50000//nilai_konstanta dengan keyword define//

using namespace std;

//Deklarasi variabel menggunakan struct//
struct identitas{
    string nama,alamat,Nhp,inputFal;
    int plhKamar,FalTambah,inputEBB,inputEBK,inputLE,inputDC,inputL;
    double JmlFal,HrgFal,totFal;
}identitas;

//Deklarasi variabel menggunakan struct//
struct penyewa{
    string NamaFal[10];
    int JumlahFal[10];
    double HargaFal[10];
}penyewa;

//program fungsi dengan nama InputIdentitas//
void InputIdentitas(){
    cout<<" Nama      : ";cin>>identitas.nama;
    cout<<" Alamat    : ";cin>>identitas.alamat;
    cout<<" Nomer Hp  : ";cin>>identitas.Nhp;
}

//program fungsi dengan nama FasilitasTambah//
void FasilitasTambah(){
    cout<<"Apakah anda mau menambah fasilitas ? <y/t> ";cin>>identitas.inputFal;cout<<endl;
    //menggunakan percabangan if/else/if//
    if(identitas.inputFal=="y")
    {
        cout<<"-----------------------------------------"<<endl;
        cout<<"|        Daftar Fasilitas Tambahan      |"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"| 1.Extra Bed Besar /malam : ";cin>>identitas.inputEBB;
        cout<<"| 2.Extra Bed Kecil /malam : ";cin>>identitas.inputEBK;
        cout<<"| 3.Laundry Expres /malam  : ";cin>>identitas.inputLE;
        cout<<"| 4.Dry Cleaning /malam    : ";cin>>identitas.inputDC;
        cout<<"| 5.Lunch /Jumlah          : ";cin>>identitas.inputL;
        cout<<"-----------------------------------------"<<endl;
        identitas.totFal=((Extra_Bed_Besar*identitas.inputEBB)+(Extra_Bed_Kecil*identitas.inputEBK)+(Laundry_Express*identitas.inputLE)+(Dry_Cleaning*identitas.inputDC)+(Lunch*identitas.inputL));
    }else if(identitas.inputFal=="t"){
        cout<<"-----------------------------------------"<<endl;
        cout<<"|        ANDA TIDAK MENAMBAH APAPUN     |"<<endl;
        cout<<"-----------------------------------------"<<endl;

    }else{
        cout<<"-----------------------------------------"<<endl;
        cout<<"|  MAAF, Data yang Anda input SALAH !!! |"<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
}

//program fungsi dengan nama AngkaLamaMenginap //
void AngkaLamaMenginap(){
cout<<"Berapa lama anda ingin menginap/malam ? ";cin>>identitas.plhKamar;
}

int LamaMenginapSingleRoom(int a){
    int hasil;
    hasil=identitas.plhKamar*SingleRoom;
    return hasil;
}

int LamaMenginapStandardTwin(int a){
    int hasil;
    hasil=identitas.plhKamar*StandardTwin;
    return hasil;
}

int LamaMenginapDeluxe(int a){
    int hasil;
    hasil=identitas.plhKamar*Deluxe;
    return hasil;
}

//program fungsi dengan namam JenisKamarDanLama//
void JenisKamarDanLama(){
    system("CLS");
    cout<<" No Jenis Kamar     Harga/malam : "<<endl;
    cout<<" 1. Single Room     Rp.350.000/malam"<<endl;
    cout<<" 2. Standard Twin   Rp.800.000/malam"<<endl;
    cout<<" 3. Deluxe          Rp.950.000/malam"<<endl;
    cout<<"Silahkan pilih kamar penginapan anda <1-3> ? ";cin>>identitas.plhKamar;
    //menggunakan percabangan switch//
    switch(identitas.plhKamar)
    {
    case 1:
        {
        cout<<"-----------------------------------------"<<endl;
        cout<<"|         >> 1. Single Room  <<         |"<<endl;
        cout<<"-----------------------------------------"<<endl;
        AngkaLamaMenginap();//pemanggilan fungsi//
        FasilitasTambah();//pemanggilan fungsi//
        int TotalBiayaKmr,TotKel;
        TotKel=LamaMenginapSingleRoom (identitas.plhKamar)+identitas.totFal;
        system("CLS");
        cout<<"-----------------------------------------"<<endl;
        cout<<"| Nama      : "<<identitas.nama<<endl;
        cout<<"| Alamat    : "<<identitas.alamat<<endl;
        cout<<"| Nomer Hp  : "<<identitas.Nhp<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"| Lama Menginap           : "<<identitas.plhKamar<<" Malam"<<endl;
        cout<<"| Total Biaya Kamar       : Rp."<<LamaMenginapSingleRoom(identitas.plhKamar)<<endl;
        cout<<"| Total Biaya Fasilitas   : Rp."<<identitas.totFal<<endl;
        cout<<"| Total Biaya keseluruhan : Rp."<<TotKel<<endl;
        cout<<"-----------------------------------------"<<endl;
        };break;
    case 2:{
        cout<<"-----------------------------------------"<<endl;
        cout<<"|          >> 2. Standard Twin <<       |"<<endl;
        cout<<"-----------------------------------------"<<endl;
        AngkaLamaMenginap();//pemanggilan fungsi//
        FasilitasTambah();//pemanggilan fungsi//
        int TotalBiayaKmr,TotKel;
        TotKel=LamaMenginapStandardTwin(identitas.plhKamar)+identitas.totFal;
        system("CLS");
        cout<<"-----------------------------------------"<<endl;
        cout<<"| Nama      : "<<identitas.nama<<endl;
        cout<<"| Alamat    : "<<identitas.alamat<<endl;
        cout<<"| Nomer Hp  : "<<identitas.Nhp<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<" Lama Menginap           : "<<identitas.plhKamar<<" Malam"<<endl;
        cout<<" Total Biaya Kamar       : Rp."<<LamaMenginapStandardTwin(identitas.plhKamar)<<endl;
        cout<<" Total Biaya Fasilitas   : Rp."<<identitas.totFal<<endl;
        cout<<" Total Biaya keseluruhan : Rp."<<TotKel<<endl;
        cout<<"-----------------------------------------"<<endl;
        };break;
    case 3:{
        cout<<"-----------------------------------------"<<endl;
        cout<<"|          >> 3. Deluxe <<              |"<<endl;
        cout<<"-----------------------------------------"<<endl;
        AngkaLamaMenginap();//pemanggilan fungsi//
        FasilitasTambah();//pemanggilan fungsi//
        int TotalBiayaKmr,TotKel;
        TotKel=LamaMenginapDeluxe(identitas.plhKamar)+identitas.totFal;
        system("ClS");
        cout<<"-----------------------------------------"<<endl;
        cout<<" Nama      : "<<identitas.nama<<endl;
        cout<<" Alamat    : "<<identitas.alamat<<endl;
        cout<<" Nomer Hp  : "<<identitas.Nhp<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<" Lama Menginap           : "<<identitas.plhKamar<<" Malam"<<endl;
        cout<<" Total Biaya Kamar       : Rp."<<LamaMenginapDeluxe(identitas.plhKamar)<<endl;
        cout<<" Total Biaya Fasilitas   : Rp."<<identitas.totFal<<endl;
        cout<<" Total Biaya keseluruhan : Rp."<<TotKel<<endl;
        cout<<"-----------------------------------------"<<endl;
        };break;
    default :{
        cout<<"========================================="<<endl;
        cout<<"  MAAF !!! KAMAR YANG ANDA PILIH TIDAK TERSEDIA  "<<endl;
        cout<<"========================================="<<endl;
        }
    }
}

main(){
    string inpt_psn;
    //program perulangan menggunakan do/while//
    do{
    cout<<"=============== HOTEL JOGJA MURAH ==============="<<endl;
    cout<<endl;
    InputIdentitas();//pemanggilan fungsi//
    JenisKamarDanLama();//pemanggilan fungsi//
        cout<<"Apakah anda ingin memesan kamar lagi ? <y/t> : ";cin>>inpt_psn;
    }while (inpt_psn =="y");

}
