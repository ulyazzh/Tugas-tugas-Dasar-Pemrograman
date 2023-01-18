//judul: KHS
#include <iostream>
using namespace std;

//kamus:
string  a, ulang, nama, prodi, nim, matkul;
int number, b, i, urut, jmatkul, sks;
float nMid, nUAS, nTugas, score1, score2,score3, bobot1, bobot2, bobot3, ips;
char huruf;

//deskripsi
int main()
{
    do{
        cout << "============================================= SISTEM PENILAIAN ===============================================" << endl;
        cout << "======================================== UNIVERSITAS DIAN NUSWANTORO =========================================" << endl;
        cout << "NAMA : ";
        getline (cin, nama);
        cout << "NIM : ";
        cin >> a;

        if (a[0] == 'A' && a[1]=='1' && a[2]=='1')
		{
			cout << "PRODI : TEKNIK INFORMATIKA S1" << endl;
		}
        else if (a[0] == 'A' && a[1]=='1' && a[2]=='2')
    		{
        		cout << "PRODI : SISTEM INFORMASI S1" << endl;
    		}

    	else if (a[0] == 'A' && a[1]=='1' && a[2]=='4')
    		{
        		cout << "PRODI : DKV D3" << endl;
    		}

    	else if (a[0] == 'A' && a[1] == '1' && a[2]=='5')
    		{
        		cout << "PRODI\t\t : ILMU KOMUNIKASI S1" << endl;
    		}

    	else
    		{
        		cout << "PRODI TIDAK TERDETEKSI" << endl;
    		}

    		cout << "ada berapa jumlah mata kuliah?" ;
    		cin >> i;

        //int i = 1;
        int number = 0;
        int urut = 1;
        while (urut <= i){


        cout << "____________________________________________________" << endl;

        cout << " mata kuliah " << urut << " : ";

        cin >> matkul[i] ;
        cout << "Jumlah SKS : " ;
    	cin >> sks[i];
    	cout << "Niai Mid (35%) : ";
    	cin >> nMid [i];
    	cout << "Niai UAS (35%) : " ;
    	cin >> nUAS [i];
    	cout << "Niai Tugas(30%) : " ;
    	cin >>  nTugas [i];

    	score1=nMid*35/100+nUAS*35/100+nTugas*30/100;

        cout << "Score : " << score1 << endl;

        if (score1>=90 && score1<=100)
    	{
        	cout << "Huruf : A" << endl;
        	cout << "bobot : " << (bobot1=4) << endl;
    	}
    	else if (score1>=80 && score1<=89.9)
    	{
        	cout << "Huruf : AB" << endl;
            cout << "bobot : " << (bobot1=3.5) << endl;
    	}
     	else if (score1>=70 && score1<=79.9)
    	{
        	cout << "Huruf : B" << endl;
         	cout << "bobot : " << (bobot1=3) << endl;
    	}
     	else if (score1>60 && score1<=69.9)
    	{
            cout << "Huruf : BC" << endl;
            cout << "bobot : " << (bobot1=2.5) << endl;
    	}
     	else if (score1>=50 && score1<=59.9)
    	{
        	cout << "Huruf : C" << endl;
        	cout << "bobot : " << (bobot1=2) << endl;
    	}
     	else if (score1>40 && score1<=49.9)
    	{
        	cout << "Huruf : CD" << endl;
	        cout << "bobot : " << (bobot1=1.5) << endl;
    	}
     	else if (score1>30 && score1<=39.9)
    	{
        	cout << "Huruf : D" << endl;
        	cout << "bobot : " << (bobot1=1) << endl;
    	}
     	else if (score1>20 && score1<=29.9)
    	{
        	cout << "Huruf : DE" << endl;
        	cout << "bobot : " << (bobot1=0.5) << endl;
    	}
    	else if (score1>0 && score1<=19.9)
    	{
        	cout << "Huruf : E" << endl;
        	cout << "bobot : " << (bobot1=0) << endl;
    	}

    	urut = urut + number;
    	number++;

    	cout << "Ada matkul lain ? (Y/T)";
    	cin >> b;
        }


        cout <<" "<< endl;
    cout <<"__________________________________ " << endl;
    //ips=((bobot1*sks1)+(bobot2*sks2)+(bobot3*sks3))/(sks1+sks2+sks3);
    cout <<"Indeks Prestasi Semester: " << ips << endl;
    cout <<"__________________________________ " << endl;
    cout <<" "<< endl;
    cout << "Nilai A = angka 4 (Istimewa)" << endl;
    cout << "Nilai AB = angka 3,5 (Sangat Baik)" << endl;
    cout << "Nilai B = angka 3 (Baik)" << endl;
    cout << "Nilai BC = angka 2,5 (Cukup Baik)" << endl;
    cout << "Nilai C = angka 2 (Cukup)" << endl;
    cout << "Nilai D = angka 1 (Kurang)" << endl;
    cout << "Nilai E = angka 0 (Sangat Kurang)" << endl;
    cout <<"__________________________________ " << endl;
    cout <<""<<endl;


        cout << "Apaakah ada mahasiswa lagi? (Y/T) " << endl;
        cin >> ulang;
    }

    while ( ulang == "Y");
}
