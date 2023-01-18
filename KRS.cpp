//judul:

#include <iostream>
using namespace std;

//kamus:

string nama, prodi, nim1, nim2, nim3, matkul1, matkul2, matkul3, matkul4, matkul5, matkul6, matkul7;
int i, jMatkul;
float nMid,nUAS, nTugas, score1, score2, score3, score4, score5, score6, score7;
char huruf;


//diskripsi
int main()
{




    cout << "NIM (Masukkan 3 karakter awal)\t\t : ";
    cin >> nim1;
    cout << "NIM (Masukkan 4 angka di tengah)\t : ";
    cin >> nim2;
    cout << "NIM (Masukkan 5 angka terakhir)\t\t : ";
    cin >> nim3;
    cout << "" <<endl;
    cout << "" <<endl;
    cout << "" <<endl;
    cout << "============================================= SISTEM PENILAIAN ===============================================" <<endl;
    cout << "======================================== UNIVERSITAS DIAN NUSWANTORO =========================================" <<endl;
    cout << "" <<endl;
    cout << "NIM\t\t : " <<nim1<<"."<<nim2<<"."<<nim3<<"\t\t\t\t\t";

    if (nim1=="A11")
    {
        cout <<"PRODI\t\t : TEKNIK INFORMATIKA" << endl;
    }
    else if (nim1=="A12")
    {
        cout <<"PRODI\t\t : SISTEM INFORMASI" << endl;
    }
    else if (nim1=="A13")
    {
        cout <<"PRODI\t\t :BROADCAST"<< endl;
    }
    else if (nim1=="A14")
    {
        cout <<"PRODI\t\t :DESAIN KOMUNIKASI VISUAL" << endl;
    }
    else
    {
        cout << "Prodi tidak terdeteksi." << endl;
    }



    cout << "NAMA\t\t : ";
    cin >> nama;


    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul1;
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
         cout <<"Huruf\t\t: A";
    }
    else if (score1>=80 && score1<=89)
    {
        cout <<"Huruf\t\t: AB";
    }
     else if (score1>=70 && score1<=79)
    {
        cout <<"Huruf\t\t: B";
    }
     else if (score1>60 && score1<=69)
    {
        cout <<"Huruf\t\t: BC";
    }
     else if (score1>=50 && score1<=59)
    {
        cout <<"Huruf\t\t: C";
    }
     else if (score1>40 && score1<=49)
    {
        cout <<"Huruf\t\t: CD";
    }
     else if (score1>30 && score1<=39)
    {
        cout <<"Huruf\t\t: D";
    }
     else if (score1>20 && score1<=29)
    {
        cout <<"Huruf\t\t: DE";
    }
    else if (score1>0 && score1<=19)
    {
        cout <<"Huruf\t\t: E";
    }




    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul2;
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
         cout <<"Huruf\t\t: A";
    }
    else if (score2>=80 && score2<=89)
    {
        cout <<"Huruf\t\t: AB";
    }
     else if (score2>=70 && score2<=79)
    {
        cout <<"Huruf\t\t: B";
    }
     else if (score2>60 && score2<=69)
    {
        cout <<"Huruf\t\t: BC";
    }
     else if (score2>=50 && score2<=59)
    {
        cout <<"Huruf\t\t: C";
    }
     else if (score2>40 && score2<=49)
    {
        cout <<"Huruf\t\t: CD";
    }
     else if (score2>30 && score2<=39)
    {
        cout <<"Huruf\t\t: D";
    }
     else if (score2>20 && score2<=29)
    {
        cout <<"Huruf\t\t: DE";
    }
    else if (score2>0 && score2<=19)
    {
        cout <<"Huruf\t\t: E";
    }



    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul3;
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
         cout <<"Huruf\t\t: A";
    }
    else if (score3>=80 && score3<=89)
    {
        cout <<"Huruf\t\t: AB";
    }
     else if (score3>=70 && score3<=79)
    {
        cout <<"Huruf\t\t: B";
    }
     else if (score3>60 && score3<=69)
    {
        cout <<"Huruf\t\t: BC";
    }
     else if (score3>=50 && score3<=59)
    {
        cout <<"Huruf\t\t: C";
    }
     else if (score3>40 && score3<=49)
    {
        cout <<"Huruf\t\t: CD";
    }
     else if (score3>30 && score3<=39)
    {
        cout <<"Huruf\t\t: D";
    }
     else if (score3>20 && score3<=29)
    {
        cout <<"Huruf\t\t: DE";
    }
    else if (score3>0 && score3<=19)
    {
        cout <<"Huruf\t\t: E";
    }



    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul4;
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
         cout <<"Huruf\t\t: A";
    }
    else if (score4>=80 && score4<=89)
    {
        cout <<"Huruf\t\t: AB";
    }
     else if (score4>=70 && score4<=79)
    {
        cout <<"Huruf\t\t: B";
    }
     else if (score4>60 && score4<=69)
    {
        cout <<"Huruf\t\t: BC";
    }
     else if (score4>=50 && score4<=59)
    {
        cout <<"Huruf\t\t: C";
    }
     else if (score4>40 && score4<=49)
    {
        cout <<"Huruf\t\t: CD";
    }
     else if (score4>30 && score4<=39)
    {
        cout <<"Huruf\t\t: D";
    }
     else if (score4>20 && score4<=29)
    {
        cout <<"Huruf\t\t: DE";
    }
    else if (score4>0 && score4<=19)
    {
        cout <<"Huruf\t\t: E";
    }



    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul5;
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
         cout <<"Huruf\t\t: A";
    }
    else if (score5>=80 && score5<=89)
    {
        cout <<"Huruf\t\t: AB";
    }
     else if (score5>=70 && score5<=79)
    {
        cout <<"Huruf\t\t: B";
    }
     else if (score5>60 && score5<=69)
    {
        cout <<"Huruf\t\t: BC";
    }
     else if (score5>=50 && score5<=59)
    {
        cout <<"Huruf\t\t: C";
    }
     else if (score5>40 && score5<=49)
    {
        cout <<"Huruf\t\t: CD";
    }
     else if (score5>30 && score5<=39)
    {
        cout <<"Huruf\t\t: D";
    }
     else if (score5>20 && score5<=29)
    {
        cout <<"Huruf\t\t: DE";
    }
    else if (score5>0 && score5<=19)
    {
        cout <<"Huruf\t\t: E";
    }



    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul6;
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
         cout <<"Huruf\t\t: A";
    }
    else if (score6>=80 && score6<=89)
    {
        cout <<"Huruf\t\t: AB";
    }
     else if (score6>=70 && score6<=79)
    {
        cout <<"Huruf\t\t: B";
    }
     else if (score6>60 && score6<=69)
    {
        cout <<"Huruf\t\t: BC";
    }
     else if (score6>=50 && score6<=59)
    {
        cout <<"Huruf\t\t: C";
    }
     else if (score6>40 && score6<=49)
    {
        cout <<"Huruf\t\t: CD";
    }
     else if (score6>30 && score6<=39)
    {
        cout <<"Huruf\t\t: D";
    }
     else if (score6>20 && score6<=29)
    {
        cout <<"Huruf\t\t: DE";
    }
    else if (score6>0 && score6<=19)
    {
        cout <<"Huruf\t\t: E";
    }



    cout <<""<<endl;
    cout <<"____________________________________________________" << endl;
    cout <<"Mata Kuliah\t: ";
    cin >> matkul7;
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
         cout <<"Huruf\t\t: A";
    }
    else if (score7>=80 && score7<=89)
    {
        cout <<"Huruf\t\t: AB";
    }
     else if (score7>=70 && score7<=79)
    {
        cout <<"Huruf\t\t: B";
    }
     else if (score7>60 && score7<=69)
    {
        cout <<"Huruf\t\t: BC";
    }
     else if (score7>=50 && score7<=59)
    {
        cout <<"Huruf\t\t: C";
    }
     else if (score7>40 && score7<=49)
    {
        cout <<"Huruf\t\t: CD";
    }
     else if (score7>30 && score7<=39)
    {
        cout <<"Huruf\t\t: D";
    }
     else if (score7>20 && score7<=29)
    {
        cout <<"Huruf\t\t: DE";
    }
    else if (score7>0 && score7<=19)
    {
        cout <<"Huruf\t\t: E";
    }





    cout <<"Indeks Prestasi Semester";

    cout <<""<<endl;
    cout <<"==============================================================================================================" << endl;

}
