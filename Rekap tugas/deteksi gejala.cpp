//judul:deteksi gejala penyakit
//oleh:  uly atmi azizah
//7 oktober 2022
// di rumah


#include <iostream>
//#include <string>
using namespace std;

//kamus:
string gejala, ulang;

//diskripsi
main()
{
    cout << "Deteksi Penyakit" << endl;
    cout << "________________" << endl;
    cout << "Silahkan pilih gejala di bawah ini yang anda alami" << endl;
    cout << "A. Demam              |   B. Batuk             |   C. Sesak nafas" << endl;
    cout << "D. Sakit tenggorokan  |   E. Sakit kepala      |   F. Hilang indra penciuman dan pengecap" << endl;
    cout << "G. Nyeri dada         |   H. Batuk             |   I. Hilang nafsu makan" << endl;
    cout << "J. Batuk darah        |   K. Mual dan muntah   |   L. Mudah lelah" << endl;
    cout << "M. Nyeri perut        |   N. Nyeri sendi       |   O. Dehidrasi" << endl;
    cout << "P. Keringat berlebih  |   Q. Diare dan Sembelit"       << endl;


do{
    cout << "" << endl;
    cout << "Untuk melakukan diagnosa penyakit, silahkan masukkan abjadnya saja dari beberapa opsi gejala diatas, Pastikan anda memasukkan sesuai urutan dan menggunakan huruf kapital. (contoh:ABCDEFG)" << endl;
    cout << "________________________________________________________________________________________________________" << endl;
    cout << ""<<endl;
    cout << "Apa gejala yang anda alami?" << endl;
    cout << "Masukkan abjad: " << endl;
    cout << "Gejala: ";
    cin >> gejala;

    if(gejala=="ABCDEFG")
    {
        cout <<"" << endl;
        cout <<" ANDA POSITIF COVID-19 " << endl;
        cout <<" _____________________ " << endl;
        cout <<"" << endl;
    }
    else if (gejala=="BGHIJ")
    {
        cout <<" ANDA TERKENA TBC " << endl;
        cout <<" ________________ " << endl;
        cout <<"" << endl;
    }
    else if (gejala=="AIKLMN")
    {
        cout <<" ANDA TERKENA HEPATITIS " << endl;
        cout <<" ______________________ " << endl;
        cout <<"" << endl;
    }
    else if (gejala=="AEK")
    {
        cout <<" ANDA TERKENA DBD " << endl;
        cout <<" ________________ " << endl;
        cout <<"" << endl;
    }
    else if (gejala=="AOPQ")
    {
        cout <<" ANDA TERKENA TYPOID " << endl;
        cout <<" ___________________ " << endl;
        cout <<"" << endl;
    }
    else
        {
        cout <<"________________________________________" << endl;
        cout <<""<< endl;
        cout << "PENYAKIT TIDAK TERDETEKSI. SILAHKAN COBA LAGI. PASTIKAN HURUF YANG ANDA MASUKAN SUDAH URUT SESUAI DENGAN DAFTAR GEJALA DIATAS" << endl;
        }
        cout <<""<< endl;
        cout << "ULANGI? (YA/TIDAK)" << endl;
        cin >> ulang;

    } while (ulang=="YA");
    cout << "___________________________________________________" << endl;
    cout << "DETEKSI GEJALA SELESAI. SALAM SEHAT DAN TERIMAKASIH." << endl;
    cout << "___________________________________________________" << endl;

}
