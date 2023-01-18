//judul:deteksi prodi
//

#include <iostream>
#include <string.h>
using namespace std;
//kamus
char Fakultas;
char KodeProgdi[5];

//deskripsi
main()
{
    cout << "Ajar switch case fakultas prodi" << endl;
    cout << "Masukkan kode fakultas:";
    cin >> Fakultas;
    cout << "Masukkan kode Program studi:";
    cin >> KodeProgdi;
    switch(toupper(Fakultas))
    {
        case 'A' :
            {
                cout << "Fakultas Ilmu Komputer" << endl;
                if (strcmp(KodeProgdi,"A11")==0)
                {
                    cout << "Teknik Informatika S1" << endl;
                }
                else
                {
                    cout << "Bukan kode Fakultas Ilmu Komputer";
                }
                break;
            }
        case 'B' :
            {
                cout << "Fakultas Ekonomi dan Bisnis" << endl;
                if(strcmp(KodeProgdi,"B11")==0)
                {
                    cout << "Manajemen S1" << endl;
                }
                else
                {
                    cout << "Bukan kode Fakultas Ekonomi dan Bisnis";
                }
                break;
            }
        case 'C' :
            {
                cout << "Fakultas Ilmu Budaya" << endl;
                if (strcmp(KodeProgdi,"C11")==0)
                {
                    cout << "Bahasa Inggris S1" << endl;
                }
                else
                {
                    cout << "Buka  kode Fakultas Ilmu Budaya";
                }
                break;
            }
        default:
            {
                cout << "Mohon maaf fakultas tidak ada";
                break;
            }
    }
}

