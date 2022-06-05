#include <iostream> //mengimpor fungsi - fungsi
#include <stdio.h>
#include <conio.h>

using namespace std;

//Deklarasi struct
struct data_mahasiswa
{
    char Nama[100];
    char Kelas[10];
    char NPM[10];
    char Matkul[100];
    int  SKS;
};

//Deklarasi variabel struct
data_mahasiswa mhs;

int main()
{
    //Input struct data mahasiswa
    cout<<" ===== Pengisian KRS ===== \n";
    cout<<"-------------------------- \n";
    cout<<" Nama     : "; fflush(stdin); gets(mhs.Nama);
    cout<<" Kelas    : "; fflush(stdin); gets(mhs.Kelas);
    cout<<" NPM      : "; fflush(stdin); gets(mhs.NPM);
    cout<<" Mata kuliah yang diambil : "; fflush(stdin); gets(mhs.Matkul);
    cout<<" SKS      : "; cin>>mhs.SKS;
    cout<<"\n\n";

    //Output struct data mahasiswa
    cout<<" ====== Data KRS ====== \n";
    cout<<"----------------------- \n";
    cout<<" Nama     : "<<mhs.Nama<<endl;
    cout<<" Kelas    : "<<mhs.Kelas<<endl;
    cout<<" NPM      : "<<mhs.NPM<<endl;
    cout<<" Mata kuliah yang diambil : "<<mhs.Matkul<<endl;
    cout<<" SKS      : "<<mhs.SKS<<endl;

    getch();

}
