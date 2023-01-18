// judul    : Biodata
// oleh     : uly atmi azizah
// 18 september 2022

#include <iostream>
using namespace std;

// kamus:

// deskripsi:

int main()
{
   string nama, NIM, jurusan, fakultas, agama, alamatasal, alamatsemarang, nomorHP, email;

   cout << "    |=================|    "  << endl;
   cout << "    |BIODATA MAHASISWA|    "  << endl;
   cout << "    |=================|    "  << endl;
   cout << "                           "  << endl;
   cout << "                           "  << endl;
   cout << "                           "  << endl;
   cout << "Masukkan data diri anda    "  << endl << endl;

   cout << "Nama            : ";
   getline (cin, nama);

   cout << "NIM             : ";
   getline (cin, NIM);

   cout << "Jurusan         : ";
   getline (cin, jurusan);

   cout << "Fakultas        : ";
   getline (cin, fakultas);

   cout << "Agama           : ";
   getline (cin, agama);

   cout << "Alamat asal     : ";
   getline (cin, alamatasal);

   cout << "Alamat semarang : ";
   getline (cin, alamatsemarang);

   cout << "Nomor HP        : ";
   getline (cin, nomorHP);

   cout << "Email           : ";
   getline (cin, email);
}
