#include <iostream>
using namespace std;

string nim1, nim2, nim3, ulang;

main()
{
    cout <<"Deteksi Prodi" << endl;

    do{
    cout <<"_________________"<< endl;
    cout <<"Masukkan NIM anda" << endl;
    cout <<"3 digit pertama : " ;
    cin >> nim1;
    cout << "4 digit kedua : "  ;
    cin >> nim2;
    cout <<"5 digit ketiga : "  ;
    cin >> nim3;
    cout << "NIM anda " << nim1 <<"."<< nim2 <<"."<< nim3 << endl;

    if (nim1== "A11")
        {
            cout << "S1 Teknik Informatika ";
            cout << "Fakultas Ilmu Komputer"<<endl;
        }
    else if (nim1=="A21")
    {
        cout << "D3 Managemen Informatika ";
        cout << "Fakultas Ilmu Komputer" << endl;
    }
    else if (nim1=="B11")

    {
        cout << "S1 Managemen ";
        cout << "Fakultas Ekonomi dan Bisnis" << endl;
    }
    else if (nim1=="B21")

    {
        cout << "D3 Akuntansi ";
        cout << "Fakultas Ekonomi dan Bisnis" << endl;
    }

    else
    {
        cout << "kode prodi tidak sesuai" << endl;
    }
    cout << "__________________" << endl;
    cout << "ULANGI? (YA/TIDAK)" << endl;
    cin >> ulang;

    } while (ulang=="YA");

}
