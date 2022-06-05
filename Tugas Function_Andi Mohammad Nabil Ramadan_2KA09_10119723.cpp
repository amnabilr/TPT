#include <iostream>

using namespace std;

//fungsi deret segitiga
int segitiga()
{
    //deklarasi variabel tgi, s
    int tgi, s;
    cout << "tinggi: "; //print tinggi
    cin  >> tgi; //menerima input berupa integer ke variabel "tgi"
    //perulangan for di dalam fungsi,
    for (int x = 1; x <= tgi; x++)
        {
        s = x;
        for (int y = 1; y <= x; y++)
        {
            cout << s; //print output
            s += tgi - y;
        }
        cout << endl; //new line
    }

}

int main()
{
    //deklarasi variabel jmh bertipe integer
    int jmh;

    cout << "banyak segitiga: "; //output berupa string "banyak segitiga"
    cin  >> jmh; //menerima input bertipe integer jumlah segitiga ke variabel jmh
    //perulangan for
    for (int a = 1; a <= jmh; a++){
        segitiga();
    }
    return 0; //mengembalikan nilai ke 0
}
