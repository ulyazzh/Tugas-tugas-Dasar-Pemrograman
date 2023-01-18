#include <iostream>
using namespace std;

main()
{
    int a, b ;
    bool hasil;
    a = 4;
    b = 7;

    hasil = a > b;

    string kondisi = hasil == 1 ? "lulus" : "tidak lulus";

    cout << "hasil = " << kondisi;
}
