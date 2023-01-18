#include <iostream>
using namespace std;

int main()
{
    float phi = 3.14;
    float L, r;

    cout << "masukkan jari jarinya : ";
    cin >> r;

    //peroses perhitungan luas
    L = phi*r*r;
    cout << "luas lingkaran adalah " << L << " cm" ;
}
