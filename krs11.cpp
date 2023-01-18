//#include <iostream.h>
#include <iostream>
//#include <conio.h>
//#include <stdio.h>
//#include <iomanip.h>
using namespace std;
main()
{


struct biodata
{ char nama[50],nim[15],jurusan[50];
  }mhs;


struct nilai
{char makul[20];
 float tugas,kuis,mid,uas,bobot;
 int sks;
 float na;
 } nil[100];



int i,jml;
float ipk,jsks=0;

cout<<"===============================================================\n";
cout<<"\t\t       KHS MHASISWA \n";
cout<<"===============================================================\n";
cout<<"Nama \t\t: "; gets(mhs.nama);
cout<<"NIM  \t\t: "; gets(mhs.nim);
cout<<"Jurusan \t: ";gets(mhs.jurusan);

cout<<"\n________________________________________________________________";
input:
cout<<"\nBanyak Mata Kuliah = ";cin>>jml;
cout<<endl;
cout<<"\n_________________________________________________________________";

      for(i=0;i<jml;i++)
                {
            cout<<"\nMATA KULIAH "<<i+1<<" \t: ";gets(nil[i].makul);
          cout<<"\SKS \t\t: ";cin>>nil[i].sks;
          cout<<"\nNilai TUGAS \t: ";cin>>nil[i].tugas;
          cout<<"\Nilai KUIS \t: ";cin>>nil[i].kuis;
          cout<<"\Nilai MID \t: ";cin>>nil[i].mid;
          cout<<"\Nilai UAS \t: ";cin>>nil[i].uas;

          nil[i].na=(0.1*nil[i].tugas)+(0.2*nil[i].kuis)+(0.3*nil[i].mid)+
                                                (0.4*nil[i].uas);


          cout<<"_____________________________";
          cout<<"\nNilai Akhir \t: "<<nil[i].na;
          cout<<"\nNilai Huruf \t: ";
                if (nil[i].na>=85)
                                                {cout<<"A";
               nil[i].bobot=4*nil[i].sks;}
                                                else if (nil[i].na>70 && nil[i].na<=85)
                                                {cout<<"B";
                                                                nil[i].bobot=3*nil[i].sks;}
                                                else if (nil[i].na>55 && nil[i].na<=70)
                                                {cout<<"C";
                                                                nil[i].bobot=2*nil[i].sks;}
                                                else if (nil[i].na>40 && nil[i].na<=55)
            {cout<<"D";
                                                                nil[i].bobot=1*nil[i].sks;}
                                                else if (nil[i].na<=40)
            {cout<<"E";
                                                                nil[i].bobot=0*nil[i].sks;}

                jsks=jsks+nil[i].sks;
                ipk+=nil[i].bobot;
          cout<<endl;
          cout<<"_____________________________\n";
      }
cout<<"\n\t\tNama Mahasiswa \t: "<<mhs.nama;
cout<<"\n\t\tNIM            \t: "<<mhs.nim;
cout<<"\n\t\tJurusan \t: "<<mhs.jurusan;
cout<<"\n\t\tJumlah SKS \t: "<<jsks;
cout<<"\n\t\tIPK anda \t: "<<ipk/jsks;
cout<<endl;
cout<<"\n___________________________________________________________________";
cout<<endl;
}


