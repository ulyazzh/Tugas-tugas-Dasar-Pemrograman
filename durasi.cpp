//judul: menghitung durasi waktu
//uly atmi azizah
//21 september 2022
//20.30 WIB

#include <iostream>
using namespace std;

//kamus

int jamAwal, menitAwal, detikAwal;
int jamAkhir, menitAkhir, detikAkhir;
int totalDetikAwal;
int totalDetikAkhir;
int durasi;
int HH, MM, DD;

//deskripsi

main()
{
    cout << "DURASI WAKTU" << endl;
    cout << "____________" << endl;
    cout << "            " << endl;

    cout << "Jam awal:";
    cin >> jamAwal;

    cout << "Menit awal:";
    cin >> menitAwal;

    cout << "Detik Awal:";
    cin >> detikAwal;

    cout << "___________" << endl;
    cout << "           " << endl;

    cout << "Jam akhir:";
    cin >> jamAkhir;

    cout << "Menit akhir:";
    cin >> menitAkhir;

    cout << "Detik akhir:";
    cin >> detikAkhir;

    cout << "___________" << endl;
    cout << "           " << endl;

    totalDetikAwal = ((jamAwal*3600)+(menitAwal*60)+detikAwal);
    totalDetikAkhir = ((jamAkhir*3600)+(menitAkhir*60)+detikAkhir);
    durasi = totalDetikAkhir-totalDetikAwal;

    cout << "Jadi total durasinya adalah:" <<durasi;

    return 0;
}
