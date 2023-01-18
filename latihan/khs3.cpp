#include<iostream>

using namespace std;

int main(){
    char grade[2],nama[50][50], matkul[15][15];
    int i,j, nim[50][50],sks[50], absen[50], jmlmhs, tugas[50], uts[50], uas[50], nilai[15];
    float bbttugas[15], bbtuts[15], bbtuas[15], nilaiangka[15], bbtabsen[15];


    cout<<"Masukkan Mata Kuliah : ";
    cin>>matkul[15];
    cout<<"Masukkan SKS : ";
    cin>>sks[15];
    cout<<"Masukkan Jumlah Mahasiswa : ";
    cin>>jmlmhs;

    for(i=0;i<jmlmhs;i++){
        cout<<"\nMasukkan NIM : ";
        cin>>nim[i][i];
            if(nim[i][i]<0){
                cout<<"Program Terhenti";
                break;
            }
        cout<<"Masukkan Nama Mahasiswa : ";
        cin>>nama[i];
        cout<<"Masukkan Jumlah Hadir : "; cin>>absen[i];
        bbtabsen[i]=(absen[i]/14)*100*0.1;
        cout<<"Masukkan Nilai Tugas : "; cin>>tugas[i];
        bbttugas[i]=tugas[i]*0.2;
        cout<<"Masukkan Nilai UTS : "; cin>>uts[i];
        bbtuts[i]=uts[i]*0.3;
        cout<<"Masukkan Nilai UAS : "; cin>>uas[i];
        bbtuas[i]=uas[i]*0.4;

        nilaiangka[i]=bbtuas[i]+bbtuts[i]+bbttugas[i]+bbtabsen[i];

}

        if(!bbtabsen || !bbttugas || !bbtuts || !bbtuas){
            grade[i] = 'E';
        }

        if(nilaiangka[i]>=80){
            grade[i]='A';
        }else if(nilaiangka[i]>=70){
            grade[i]='B';
        }else if(nilaiangka[i]>=60){
            grade[i]='C';
        }else if(nilaiangka[i]>=50){
            grade[i]='D';
        }else{
            grade[i]='E';
        }


        cout<<"\n============================="<<endl;
        cout<<"Nama Mata Kuliah : "<<matkul[15]<<endl;
        cout<<"SKS : "<<sks[15]<<endl;


        cout<<"=============================\n"
        "NIM\t Nama\t Hadir\t Tugas\t UTS\t UAS\t Nilai\t Grade\n";
        for(j=0;j<jmlmhs;j++){
            if(nilaiangka[j]>=80){
                grade[j]='A';
            }else if(nilaiangka[j]>=70){
                grade[j]='B';
            }else if(nilaiangka[j]>=60){
                grade[j]='C';
            }else if(nilaiangka[j]>=50){
                grade[j]='D';
            }else{
                grade[j]='E';
            }

        cout<<nim[j][j]<<"\t"<<nama[j]<<"\t"<<absen[j]<<"\t"<<tugas[j]<<"\t"<<uts[j]<<"\t"<<uas[j]<<"\t"<<nilaiangka[j]<<"\t"<<grade[j]<<"\n";


    }
}
