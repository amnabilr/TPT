#include <iostream>

using namespace std;

int main()
{
    int tgi, hsl; //input variable
    cout << "tinggi: "; //print tinggi
    cin  >> tgi; //input tinggi

    for (int x = 1; x <= tgi; x++){
        hsl = x;
        for (int y = 1; y <= x; y++){
            cout << hsl;
            hsl += tgi - y; //proses perhitungan
        }
        cout << endl; //selesai
    }
    return 0;
}
