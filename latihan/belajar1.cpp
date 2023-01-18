//judul: Input Nilai
#include <iostream>
using namespace std;

//kamus:
float nilai;
string lagi;

//deskripsi:
int main()
{
    do{
        cout << "Masukkan nilai : ";
        cin >> nilai;
        if (nilai >= 90)
    	{
        	cout << "Baik Sekali" << endl;
    	}
    	else if (nilai >= 75 && nilai <= 89)
    	{
        	cout << "Baik" << endl;
    	}
    	else if (nilai >= 60 && nilai <= 74)
    	{
        	cout << "Cukup" << endl;;
    	}
    	else
    	{
        	cout << "Kurang" << endl;
    	}

    	cout << "Ingin memasukkan nilai lagi? (Y/T)";
    	cin >> lagi;
    }
    while (lagi == "Y");
}
