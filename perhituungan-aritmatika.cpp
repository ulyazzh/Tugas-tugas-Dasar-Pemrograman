/*judul: Perhitungan Aritmatika
         Uly Atmi Azizah
         24 September 2022
         di Kost
*/

#include <iostream>
using namespace std;

//kamus
int a, b, c, d, e, hasil;

//deskripsi
int main()
{
    //PERKALIAN
    cout << "OPERASI PERKALIAN" << endl;
    cout << "_________________" << endl;
    cout << "                 " << endl;
    cout << "Berapa kali anda masuk lab dalam setiap 1 minggu? ";
    cin >> a;
    hasil = a*4;
    cout << "Dalam 1 bulan, anda memasuki lab sebanyak " << hasil << " kali." << endl;
    cout << "                 " << endl;
    cout << "==================================" << endl;



    //PEMBAGIAN
    cout << "                 " << endl;
    cout << "                 " << endl;
    cout << "                 " << endl;
    cout << "OPERASI PEMBAGIAN" << endl;
    cout << "_________________" << endl;
    cout << "                 " << endl;
    cout << "Berapa jatah bulanan anda selama ngekos? ";
    cin >> a;
    hasil = a/30;
    cout << "Jumlah uang yang harusnya anda keluarkan dalam sehari maksimal " << hasil << endl;



    //PENGURANGAN
    cout << "                   " << endl;
    cout << "                   " << endl;
    cout << "                   " << endl;
    cout << "OPERASI PENGURANGAN" << endl;
    cout << "___________________" << endl;
    cout << "                   " << endl;
    cout << "Berapa jumlah uang yang anda punya? ";
    cin >> a;
    cout << "berapa harga buku yang anda beli? ";
    cin >> b;
    hasil = a - b;
    if (hasil > -1)
    cout << "Sisa uang anda adalah " << hasil << endl;
    else
    cout << "Uang anda kurang " << hasil << " Itu berarti anda berhutang kepada pemilik toko. Segeralah membayar hutang anda!" << endl;





    //PENJUMLAHAN
    cout << "                   " << endl;
    cout << "                   " << endl;
    cout << "                   " << endl;
    cout << "OPERASI PENJUMLAHAN" << endl;
    cout << "___________________" << endl;
    cout << "                   " << endl;
    cout << "Jumlah Progdi Fakultas Ilmu Kompter: ";
    cin >> a;
    cout << "Jumlah Progdi Fakultas Ekonomi dan Bisnis: ";
    cin >> b;
    cout << "Jumlah Progdi Fakultas Ilmu Budaya: ";
    cin >> c;
    cout << "Jumlah Progdi Fakultas Kesehatan: ";
    cin >> d;
    cout << "Jumlah Progdi Fakultas Teknik: ";
    cin >> e;
    hasil = a + b + c + d + e;
    cout << "Jumlah keseluruhan Progdi di Universitas Dian Nuswantoro adalah " << hasil << endl;
    if (hasil%2 == 0)
        cout << hasil << " adalah bilangan genap";
    else
        cout << hasil << " adalah bilangan ganjil" << endl;
    cout << "==================================" << endl;
    cout << "                                  " << endl;
}
