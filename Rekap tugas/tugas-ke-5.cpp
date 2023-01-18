//judul: input dan output jenis kelamin
//uly atmi azizah
//22 september 2022
//di kosan

#include <iostream>
using namespace std;

//kamus
string nama, jenis_kelamin,umur, jurusan, fakultas;

//deskripsi
main()
{
    cout << "Nama\t\t\t: ";
    getline (cin, nama);
    cout << "Jenis Kelamin [P/L]\t: ";
    getline (cin, jenis_kelamin);
    cout << "Umur\t\t\t: ";
    getline (cin, umur);
    cout << "Jurusan\t\t\t: ";
    getline (cin, jurusan);
    cout << "Fakultas\t\t: ";
    getline (cin, fakultas);
    cout <<"====================================="<< endl;
    cout <<""<<endl;
    if (jenis_kelamin=="P")
    cout << "Halo " << nama << ", " << "Anda adalah seorang perempuan ";
    else
    cout << "Halo " << nama << ", " << "Anda adalah seorang laki-laki ";
    cout << "yang berumur "<<umur<<" tahun. ";
    cout << "Anda adalah mahasiswa jurusan " << jurusan <<" fakultas "<<fakultas;
    cout << " di Universitas Dian Nuswantoro" << endl;
    cout << "" << endl ;
    cout << "===================================" << endl;

    return 0;
}
