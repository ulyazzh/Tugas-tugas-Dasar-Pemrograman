//judul: mengitung durasi waktu

#include <iostream>
using namespace std;

//kamus:
int jamAwal, menitAwal, detikAwal, jamAkhir,menitAkhir, detikAkhir, durasi;

//deskripsi:
main()
{
    cout << "input jam awal: ";
    cin >> jamAwal;
    cout << "onput menit awal: ";
    cin >> menitAwal;
    cout << "input detik awal: ";
    cin >> detikAwal;
     cout << "input jam akhir: ";
    cin >> jamAkhir;
    cout << "onput menit akhir: ";
    cin >> menitAkhir;
    cout << "input detik akhir: ";
    cin >> detikAkhir;

    if (jamAkhir > jamAwal)
    {
        cout << "jam : " << (durasi = jamAkhir-jamAwal) << endl;
    }
    else
		 cout << "jam : " << ( durasi = 12 + jamAkhir - jamAwal)<< endl;

    if (menitAkhir > menitAwal)
		 cout << "menit : " << (durasi = menitAkhir - menitAwal) << endl;
	else
		 cout << "menit : " << (durasi = 60 + menitAkhir - menitAwal) << endl;

	if (detikAkhir > detikAwal)
		 cout << "detik : " << (durasi = detikAkhir - detikAwal) << endl;
	else
		 cout << "detik : " << (durasi = 3600  + detikAkhir - detikAwal) << endl;
}

