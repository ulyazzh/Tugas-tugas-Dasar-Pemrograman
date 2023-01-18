//judul


#include <iostream>
using namespace std;

//kamus
int bil1,angka,bilangan,values,nilai;
int data[5];
int caricari, y, m, ricaricabebek,ketemu;
//deksripsi
main()
{

    /*cout << "input variable : " << endl;
    cout << "masukkan bilangan ke var bil1 : ";      cin >> bil1;
    cout << "masukkan bilangan ke var angka : ";     cin >> angka;
    cout << "masukkan bilangan ke var bilangan : ";  cin >> bilangan;
    cout << "masukkan bilangan ke var values : " ;   cin >> values;
    cout << "masukkan bilangan ke var nilai : " ;    cin >> nilai;

    cout << "menampilkan isi variable bebas : " << endl;
    cout << "isi dari variabl bil1 : " << bil1 << endl;
    cout << "isi dari variabl angka : " << angka << endl;
    cout << "isi dari variabl bilangan : " << bilangan << endl;
    cout << "isi dari variabl values : " << values << endl;
    cout << "isi dari variabl nlai : " << nilai << endl;*/
//-------------------------------------------------------------------------------
    cout << "Masukkan data 1 : "; cin >> data[0];
    cout << "Masukkan data 2 : "; cin >> data[3];
    cout << "Masukkan data 3 : "; cin >> data[4];
    cout << "Masukkan data 4 : "; cin >> data[1];
    cout << "Masukkan data 5 : "; cin >> data[2];

    cout << "menampilkan isi variable array tanpa loop "<<endl;
    cout << "data :" << data[3] << endl;
    cout << "data :" << data[0] << endl;
    cout << "data :" << data[4] << endl;
    cout << "data :" << data[2] << endl;
    cout << "data :" << data[1] << endl;

    cout << "input rica rica : ";//SEARCHINGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
    cin >> ricaricabebek;
    m=1;
    while (m<6)
    {
        if (ricaricabebek==data[m])
        {
            ketemu=m;
        }
        m=m+1;
    }
    cout << " Hore data ketemu di : " << ketemu;

    /*y=0;
    do
    {
        cout << "isi dari data index ke " << y << "-" << data[y] << endl;
        y=y+1;
    }while (y<5);*/
//------------------------------------------------------------
    /*cout << "masukan cari cari aowkpoawfiruegfu : ";
    cin >> caricari;
    if (caricari == bil1)
	{
	    cout << "bil1";
    }
    else if (caricari == angka)
		{
		    cout << "angka";
        }
	else if (caricari == bilangan)
			{
			    cout << "bilangan";
            }
            else if (caricari == values)
			{
			    cout << "values";
            }
            else if (caricari == nilai)
			{
			    cout << "nilai";
            }
        else
            {
                cout << "rak temu ma";
            }*/
//---------------------------------------------


}

