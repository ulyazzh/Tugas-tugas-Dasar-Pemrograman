//judul: membuat KHS
#include <iostream>
using namespace std;

//kamus:
string a, ulang, nama, prodi, nim1, nim2, nim3, matkul1, matkul2, matkul3, matkul4, matkul5, matkul6, matkul7;
int  i, jMatkul, sks1, sks2, sks3, sks4, sks5, sks6, sks7;
float nMid,nUAS, nTugas, score1, score2, score3, score4, score5, score6, score7, bobot1, bobot2, bobot3, bobot4, bobot5, bobot6, bobot7, ips;
char huruf;

//diskripsi
int main()
{
    do
    {
    cout << "" <<endl;
    cout << "" <<endl;
    cout << "" <<endl;
    cout << "============================================= SISTEM PENILAIAN ===============================================" <<endl;
    cout << "======================================== UNIVERSITAS DIAN NUSWANTORO =========================================" <<endl;
    cout << "" <<endl;
    cout << "NAMA\t\t : ";
    getline (cin, nama);
    cout << "NIM\t\t : " ;
    getline (cin, a);
    if (a[0] == 'A' && a[1]=='1' && a[2]=='1')
    {
        cout << "PRODI\t\t : TEKNIK INFORMATIKA S1" << endl;
    }

    else if (a[0] == 'A' && a[1]=='1' && a[2]=='2')
    {
        cout << "PRODI\t\t : SISTEM INFORMASI S1" << endl;
    }

    else if (a[0] == 'A' && a[1]=='1' && a[2]=='4')
    {
        cout << "PRODI\t\t : DKV D3" << endl;
    }

    else if(a[0] == 'A' && a[1] == '1' && a[2]=='5')
    {
        cout << "PRODI\t\t : ILMU KOMUNIKASI S1" << endl;
    }

    else
    {
        cout << "PRODI TIDAK TERDETEKSI";
    }

    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<""<<endl;
    cout <<"Mata Kuliah\t: ";
    getline (cin, matkul1);
    cout <<"Jumlah SKS\t: ";
    cin >> sks1;
    cout << "Niai Mid (35%)\t: ";
    cin >> nMid;
    cout << "Niai UAS (35%)\t: ";
    cin >> nUAS;
    cout << "Niai Tugas(30%)\t: ";
    cin >> nTugas;
    score1=nMid*35/100+nUAS*35/100+nTugas*30/100;
    cout <<"Score\t\t: "<<score1<<endl;
    if (score1>=90 && score1<=100)
    {
         cout <<"Huruf\t\t: A" <<endl;
         cout << "bobot\t\t: " <<(bobot1=4);
    }
    else if (score1>=80 && score1<=89.9)
    {
        cout <<"Huruf\t\t: AB"<<endl;
        cout << "bobot\t\t: " <<(bobot1=3.5);
    }
     else if (score1>=70 && score1<=79.9)
    {
        cout <<"Huruf\t\t: B"<<endl;
        cout << "bobot\t\t: " <<(bobot1=3);
    }
     else if (score1>60 && score1<=69.9)
    {
        cout <<"Huruf\t\t: BC"<<endl;
        cout << "bobot\t\t: " <<(bobot1=2.5);
    }
     else if (score1>=50 && score1<=59.9)
    {
        cout <<"Huruf\t\t: C"<<endl;
        cout << "bobot\t\t: " <<(bobot1=2);
    }
     else if (score1>40 && score1<=49.9)
    {
        cout <<"Huruf\t\t: CD"<<endl;
        cout << "bobot\t\t: " <<(bobot1=1.5);
    }
     else if (score1>30 && score1<=39.9)
    {
        cout <<"Huruf\t\t: D"<<endl;
        cout << "bobot\t\t: " <<(bobot1=1);
    }
     else if (score1>20 && score1<=29.9)
    {
        cout <<"Huruf\t\t: DE"<<endl;
        cout << "bobot\t\t: " <<(bobot1=0.5);
    }
    else if (score1>0 && score1<=19.9)
    {
        cout <<"Huruf\t\t: E"<<endl;
        cout << "bobot\t\t: " <<(bobot1=0);
    }

    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul2;
    cout <<"Jumlah SKS\t: ";
    cin >> sks2;
    cout << "Niai Mid (35%)\t: ";
    cin >> nMid;
    cout << "Niai UAS (35%)\t: ";
    cin >> nUAS;
    cout << "Niai Tugas(30%)\t: ";
    cin >> nTugas;
    score2=nMid*35/100+nUAS*35/100+nTugas*30/100;
    cout <<"Score\t\t: "<<score2<<endl;
    if (score2>=90 && score2<=100)
    {
         cout <<"Huruf\t\t: A"<<endl;
         cout << "bobot\t\t: " <<(bobot2=4);
    }
    else if (score2>=80 && score2<=89.9)
    {
        cout <<"Huruf\t\t: AB"<<endl;
        cout << "bobot\t\t: " <<(bobot2=3.5);
    }
     else if (score2>=70 && score2<=79.9)
    {
        cout <<"Huruf\t\t: B"<<endl;
        cout << "bobot\t\t: " <<(bobot2=3);
    }
     else if (score2>60 && score2<=69.9)
    {
        cout <<"Huruf\t\t: BC"<<endl;
        cout << "bobot\t\t: " <<(bobot2=2.5);
    }
     else if (score2>=50 && score2<=59.9)
    {
        cout <<"Huruf\t\t: C"<<endl;
        cout << "bobot\t\t: " <<(bobot2=2);
    }
     else if (score2>40 && score2<=49.9)
    {
        cout <<"Huruf\t\t: CD";
        cout << "bobot\t\t: " <<(bobot2=1.5);
    }
     else if (score2>30 && score2<=39.9)
    {
        cout <<"Huruf\t\t: D"<<endl;
        cout << "bobot\t\t: " <<(bobot2=1);
    }
     else if (score2>20 && score2<=29.9)
    {
        cout <<"Huruf\t\t: DE"<<endl;
        cout << "bobot\t\t: " <<(bobot2=0.5);
    }
    else if (score2>0 && score2<=19.9)
    {
        cout <<"Huruf\t\t: E"<<endl;
        cout << "bobot\t\t: " <<(bobot2=0);
    }

    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul3;
    cout <<"Jumlah SKS\t: ";
    cin >> sks3;
    cout << "Niai Mid (35%)\t: ";
    cin >> nMid;
    cout << "Niai UAS (35%)\t: ";
    cin >> nUAS;
    cout << "Niai Tugas(30%)\t: ";
    cin >> nTugas;
    score3=nMid*35/100+nUAS*35/100+nTugas*30/100;
    cout <<"Score\t\t: "<<score3<<endl;
    if (score3>=90 && score3<=100)
    {
         cout <<"Huruf\t\t: A"<<endl;
         cout << "bobot\t\t: " <<(bobot3=4);
    }
    else if (score3>=80 && score3<=89.9)
    {
        cout <<"Huruf\t\t: AB"<<endl;
        cout << "bobot\t\t: " <<(bobot3=3.5);
    }
     else if (score3>=70 && score3<=79.9)
    {
        cout <<"Huruf\t\t: B"<<endl;
        cout << "bobot\t\t: " <<(bobot3=3);
    }
     else if (score3>60 && score3<=69.9)
    {
        cout <<"Huruf\t\t: BC"<<endl;
        cout << "bobot\t\t: " <<(bobot3=2.5);
    }
     else if (score3>=50 && score3<=59.9)
    {
        cout <<"Huruf\t\t: C"<<endl;
        cout << "bobot\t\t: " <<(bobot3=2);
    }
     else if (score3>40 && score3<=49.9)
    {
        cout <<"Huruf\t\t: CD"<<endl;
        cout << "bobot\t\t: " <<(bobot3=1.5);
    }
     else if (score3>30 && score3<=39.9)
    {
        cout <<"Huruf\t\t: D"<<endl;
        cout << "bobot\t\t: " <<(bobot3=1);
    }
     else if (score3>20 && score3<=29.9)
    {
        cout <<"Huruf\t\t: DE"<<endl;
        cout << "bobot\t\t: " <<(bobot3=0.5);
    }
    else if (score3>0 && score3<=19.9)
    {
        cout <<"Huruf\t\t: E"<<endl;
        cout << "bobot\t\t: " <<(bobot3=0);
    }

    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul4;
    cout <<"Jumlah SKS\t: ";
    cin >> sks4;
    cout << "Niai Mid (35%)\t: ";
    cin >> nMid;
    cout << "Niai UAS (35%)\t: ";
    cin >> nUAS;
    cout << "Niai Tugas(30%)\t: ";
    cin >> nTugas;
    score4=nMid*35/100+nUAS*35/100+nTugas*30/100;
    cout <<"Score\t\t: "<<score4<<endl;
    if (score4>=90 && score4<=100)
    {
         cout <<"Huruf\t\t: A"<<endl;
         cout << "bobot\t\t: " <<(bobot4=4);
    }
    else if (score4>=80 && score4<=89.9)
    {
        cout <<"Huruf\t\t: AB"<<endl;
        cout << "bobot\t\t: " <<(bobot4=3.5);
    }
     else if (score4>=70 && score4<=79.9)
    {
        cout <<"Huruf\t\t: B"<<endl;
        cout << "bobot\t\t: " <<(bobot4=3);
    }
     else if (score4>60 && score4<=69.9)
    {
        cout <<"Huruf\t\t: BC"<<endl;
        cout << "bobot\t\t: " <<(bobot4=2.5);
    }
     else if (score4>=50 && score4<=59.9)
    {
        cout <<"Huruf\t\t: C"<<endl;
        cout << "bobot\t\t: " <<(bobot4=2);
    }
     else if (score4>40 && score4<=49.9)
    {
        cout <<"Huruf\t\t: CD"<<endl;
        cout << "bobot\t\t: " <<(bobot4=1.5);
    }
     else if (score4>30 && score4<=39.9)
    {
        cout <<"Huruf\t\t: D"<<endl;
        cout << "bobot\t\t: " <<(bobot4=1);
    }
     else if (score4>20 && score4<=29.9)
    {
        cout <<"Huruf\t\t: DE"<<endl;
        cout << "bobot\t\t: " <<(bobot4=0.5);
    }
    else if (score4>0 && score4<=19.9)
    {
        cout <<"Huruf\t\t: E"<<endl;
        cout << "bobot\t\t: " <<(bobot4=0);
    }

    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul5;
    cout <<"Jumlah SKS\t: ";
    cin >> sks5;
    cout << "Niai Mid (35%)\t: ";
    cin >> nMid;
    cout << "Niai UAS (35%)\t: ";
    cin >> nUAS;
    cout << "Niai Tugas(30%)\t: ";
    cin >> nTugas;
    score5=nMid*35/100+nUAS*35/100+nTugas*30/100;
    cout <<"Score\t\t: "<<score5<<endl;
    if (score5>=90 && score5<=100)
    {
         cout <<"Huruf\t\t: A"<<endl;
         cout << "bobot\t\t: " <<(bobot5=4);
    }
    else if (score5>=80 && score5<=89.9)
    {
        cout <<"Huruf\t\t: AB"<<endl;
        cout << "bobot\t\t: " <<(bobot5=3.5);
    }
     else if (score5>=70 && score5<=79.9)
    {
        cout <<"Huruf\t\t: B"<<endl;
        cout << "bobot\t\t: " <<(bobot5=3);
    }
     else if (score5>60 && score5<=69.9)
    {
        cout <<"Huruf\t\t: BC"<<endl;
        cout << "bobot\t\t: " <<(bobot5=2.5);
    }
     else if (score5>=50 && score5<=59.9)
    {
        cout <<"Huruf\t\t: C"<<endl;
        cout << "bobot\t\t: " <<(bobot5=2);
    }
     else if (score5>40 && score5<=49.9)
    {
        cout <<"Huruf\t\t: CD"<<endl;
        cout << "bobot\t\t: " <<(bobot5=1.5);
    }
     else if (score5>30 && score5<=39.9)
    {
        cout <<"Huruf\t\t: D"<<endl;
        cout << "bobot\t\t: " <<(bobot5=1);
    }
     else if (score5>20 && score5<=29.9)
    {
        cout <<"Huruf\t\t: DE"<<endl;
        cout << "bobot\t\t: " <<(bobot5=0.5);
    }
    else if (score5>0 && score5<=19.9)
    {
        cout <<"Huruf\t\t: E"<<endl;
        cout << "bobot\t\t: " <<(bobot5=0);
    }

    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul6;
    cout <<"Jumlah SKS\t: ";
    cin >> sks6;
    cout << "Niai Mid (35%)\t: ";
    cin >> nMid;
    cout << "Niai UAS (35%)\t: ";
    cin >> nUAS;
    cout << "Niai Tugas(30%)\t: ";
    cin >> nTugas;
    score6=nMid*35/100+nUAS*35/100+nTugas*30/100;
    cout <<"Score\t\t: "<<score6<<endl;
    if (score6>=90 && score6<=100)
    {
         cout <<"Huruf\t\t: A"<<endl;
         cout << "bobot\t\t: " <<(bobot6=4);
    }
    else if (score6>=80 && score6<=89.9)
    {
        cout <<"Huruf\t\t: AB"<<endl;
        cout << "bobot\t\t: " <<(bobot6=3.5);
    }
     else if (score6>=70 && score6<=79.9)
    {
        cout <<"Huruf\t\t: B"<<endl;
        cout << "bobot\t\t: " <<(bobot6=3);
    }
     else if (score6>60 && score6<=69.9)
    {
        cout <<"Huruf\t\t: BC"<<endl;
        cout << "bobot\t\t: " <<(bobot6=2.5);
    }
     else if (score6>=50 && score6<=59.9)
    {
        cout <<"Huruf\t\t: C"<<endl;
        cout << "bobot\t\t: " <<(bobot6=2);
    }
     else if (score6>40 && score6<=49.9)
    {
        cout <<"Huruf\t\t: CD"<<endl;
        cout << "bobot\t\t: " <<(bobot6=1.5);
    }
     else if (score6>30 && score6<=39.9)
    {
        cout <<"Huruf\t\t: D"<<endl;
        cout << "bobot\t\t: " <<(bobot6=1);
    }
     else if (score6>20 && score6<=29.9)
    {
        cout <<"Huruf\t\t: DE"<<endl;
        cout << "bobot\t\t: " <<(bobot6=0.5);
    }
    else if (score6>0 && score6<=19.9)
    {
        cout <<"Huruf\t\t: E"<<endl;
        cout << "bobot\t\t: " <<(bobot6=0);
    }

    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul7;
    cout <<"Jumlah SKS\t: ";
    cin >> sks7;
    cout << "Niai Mid (35%)\t: ";
    cin >> nMid;
    cout << "Niai UAS (35%)\t: ";
    cin >> nUAS;
    cout << "Niai Tugas(30%)\t: ";
    cin >> nTugas;
    score7=nMid*35/100+nUAS*35/100+nTugas*30/100;
    cout <<"Score\t\t: "<<score7<<endl;
    if (score7>=90 && score7<=100)
    {
         cout <<"Huruf\t\t: A"<<endl;
         cout << "bobot\t\t: " <<(bobot7=4)<<endl;
    }
    else if (score7>=80 && score7<=89.9)
    {
        cout <<"Huruf\t\t: AB"<<endl;
        cout << "bobot\t\t: " <<(bobot7=3.5) << endl;
    }
     else if (score7>=70 && score7<=79.9)
    {
        cout <<"Huruf\t\t: B"<<endl;
        cout << "bobot\t\t: " <<(bobot7=3) << endl;
    }
     else if (score7>60 && score7<=69.9)
    {
        cout <<"Huruf\t\t: BC"<<endl;
        cout << "bobot\t\t: " <<(bobot7=2.5) << endl;
    }
     else if (score7>=50 && score7<=59.9)
    {
        cout <<"Huruf\t\t: C"<<endl;
        cout << "bobot\t\t: " <<(bobot7=2) << endl;
    }
     else if (score7>40 && score7<=49.9)
    {
        cout <<"Huruf\t\t: CD"<<endl;
        cout << "bobot\t\t: " <<(bobot7=1.5) << endl;
    }
     else if (score7>30 && score7<=39.9)
    {
      cout <<"Huruf\t\t: D"<<endl;
      cout << "bobot\t\t: " <<(bobot7=1) << endl;
    }
     else if (score7>20 && score7<=29.9)
    {
        cout <<"Huruf\t\t: DE"<<endl;
        cout << "bobot\t\t: " <<(bobot7=0.5) << endl;
    }
    else if (score7>0 && score7<=19.9)
    {
        cout <<"Huruf\t\t: E"<<endl;
        cout << "bobot\t\t: " <<(bobot7=0)<<endl;
    }

    cout <<" "<< endl;
    cout <<"__________________________________ " << endl;
    ips=((bobot1*sks1)+(bobot2*sks2)+(bobot3*sks3)+(bobot4*sks4)+(bobot5*sks5)+(bobot6*sks6)+(bobot7*sks7))/(sks1+sks2+sks3+sks4+sks5+sks6+sks7);
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
    cout <<"Input nilai mahasiswa lainnya? (YA/TIDAK)" <<endl;
    cin >> ulang;
    }while (ulang=="YA");
    cout <<"==============================================================================================================" << endl;
}
