#include <iostream>
using namespace std;

int main()
{
    float a, t, luas;
    cout << "Program C++ Menghitung Luas Segitiga" << endl;
    cout << "====================================" << endl;
    cout << endl;
    cout << "masukkan alas segitiga: ";
    cin >> a;
    cout << "Masukkan tinggi segitiga: ";
    cin >> t;
    cout << endl;
    luas = 0.5 * a * t;
    cout << "Luas segitiga = "<< luas << endl;

    return 0;
}
