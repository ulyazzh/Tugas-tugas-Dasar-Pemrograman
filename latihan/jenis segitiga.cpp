//judul: jenis segitiga
#include <iostream>
using namespace std;

//kamus:
int a, b, c;

//deskripsi:
main()
{
    cout << "menentukn jenis segitiga" << endl;
    cout << " " << endl;
    cout << "masukkan panjang sisi a: " ;
    cin >> a;
    cout << "masukkan panjang sisi b: " ;
    cin >> b;
    cout << "masukkan panjang sisi c: " ;
    cin >> c;

    if (a==b && b==c)
    {
        cout << "ini adalah segitiga sama sisi" << endl;
    }
    else if (a==b || a==c)
    {
        if (a!=b || b!=c)
        {
            cout << "ini adalah segitiga sama kaki" << endl;
        }
    }
    else
    {
        cout << "ini adalah segitiga sembarang";
    }
}
