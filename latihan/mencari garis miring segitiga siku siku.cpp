//judul : mencari garis miring segitiga siku siku
#include <iostream>
#include <math.h>
using namespace std;

//kamus:

float a, b, c;

//deskripsi:
int main()
{
    cout << "mencari garis miring segitiga siku siku" << endl;
    cout << "masukkan nilai a: ";
    cin >> a;
    cout << "masukkan nilai b: ";
    cin >> b;
    c = sqrt ((a*a)+(b*b));
    cout << "panjang garis miringnya adalah : " << c;
}
