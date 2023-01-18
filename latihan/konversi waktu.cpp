#include <iostream>
using namespace std;

int jam, menit, detik, hasil;
int jamMenit = 60;
int jamDetik = 3600;

int main()
{
    cout << "konversi waktu \n\n" ;
    cout << "masukkan jumlah jam : ";
    cin >> jam;
    cout << "masukkan jumlah menit : ";
    cin >> menit;

    hasil = jam*jamDetik + menit*jamMenit;
    cout << "hasil konversi : " << hasil << " detik";
}
