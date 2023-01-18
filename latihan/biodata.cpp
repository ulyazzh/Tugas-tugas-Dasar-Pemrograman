#include <iostream>
using namespace std;
string nama, nim, fakultas, jurusan, kota_asal, alamat;
int main()
{
    cout << "Biodata Mahasiswa" << endl;
    cout << "====================================" << endl;
    cout << endl;
    cout << "Nama mahasiswa: ";
    getline(cin,nama);
    cout << "NIM: ";
    getline(cin,nim);
    cout << "Fakultas: ";
    getline(cin,fakultas);
    cout << "Jurusan: ";
    getline(cin,jurusan);
    cout << "Kota Asal: ";
    getline(cin,kota_asal);
    cout << "Alamat: ";
    getline(cin,alamat);

}
