#include <iostream>

using namespace std;

int main()
{

int     himp1,himp2,i; //deklarasi variabel
string  agta1[10], agta2[10]; //deklarasi array

        cout << "Masukkan jumlah anggota himpunan A: "; //print himpunan A
        cin >> himp1;

            for (i=1;i<=himp1;i++) //perulangan himpunan A
            {
                cout << "Masukkan anggota " << i << ":"; //input anggota A
                cin >> agta1[i];
            }


        cout << "Masukkan jumlah anggota himpunan B: "; //print himpunan B
        cin >> himp2;

            for (i=1;i<=himp2;i++) //perulangan himpunan B
            {
                cout << "Masukkan anggota " << i << ":"; //input anggota B
                cin >> agta2[i];
            }
            cout << endl;


        cout << "Himpunan A= { "; //print himpunan A
            for (i=1;i<=himp1;i++)
            {
                cout << agta1[i] << " "; //print anggota A
            }
        cout << "} " << endl;

        cout << "Himpunan B= { "; //print himpunan B
            for (i=1;i<=himp2;i++)
            {
                cout << agta2[i] << " "; //print anggota B
            }
        cout << "} " << endl;
        cout << endl;

        cout << " A U B= { "; //print gabungan himpunan A dan B
            for (i=1;i<=himp1;i++)
            {
                cout << agta1[i] << " "; //print anggota A
            }
            for (i=1;i<=himp2;i++)
            {
                cout << agta2[i] << " "; //print anggota B
            }
        cout << "}";

    return 0;

}
