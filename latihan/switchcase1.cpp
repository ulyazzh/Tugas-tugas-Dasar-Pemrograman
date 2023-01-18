#include <iostream>
using namespace std;

int makan;

int main()
{
    cout << "pilih salah satu opsi dibawah ini" << endl;
    cout << "1. Mie Ayam\n2. Ayam geprek\n3. Sate Ayam" << endl;
    cout << "Makanan nomor berapa yang ingin anda makan? ";
    cin >> makan;
    cout << "_________________________" << endl;

    switch (makan){
    case 1 :
        cout << "Saya pesan mie ayam saja" << endl;
        cout << "________________________" << endl;
        break;
    case 2:
        cout << "Saya pesan ayam geprek saja" << endl;
        cout << "___________________________" << endl;
        break;
    case 3:
        cout << "Saya pesan Sate ayang saja" << endl;
        cout << "__________________________" << endl;
        break;
    default:
        cout << "Ga mau makan" << endl;
        cout << "____________";

    }
}
