#include"iostream.h"

#include"stdlib.h"

int main()
{
int npm;
float a,b,c,d,e,f,g,h,i,ipk,mutu;
char ina,inb,inc,ind,ine,inf,ing,inh,ini;
char nm[20];
cout<<"Masukkan Data Mahasiswa"<< cout<<"NPM : "; cin>>npm;
cout<<"NAMA : "; cin>>nm;
system ("cls");
cout<<"INPUT NILAI MATAKULIAH"< cout< cout<<"Manajemen & Sistem Informasi Manaj 1*" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>a;
if (a >= 85)
{ina = 'A'; a = 4*2; }
else if (a >= 70)
{ina = 'B'; a = 3*2; }
else if (a >= 55)
{ina = 'C'; a = 2*2; }
else if (a >= 40)
{ina = 'D'; a = 1*2; }
else {ina = 'E'; a = 0;}
cout<<" Indeks : " <<< cout<<"Matematika Lanjut 1*/**" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>b;

if (b >= 85)
{inb = 'A'; b = 4*2; }
else if (b >= 70)
{inb = 'B'; b = 3*2; }
else if (b >= 55)
{inb = 'C'; b = 2*2; }
else if (b >= 40)
{inb = 'D'; b = 1*2; }
else {inb = 'E'; b = 0;}
cout<<" Indeks : " <<< cout<<"Akuntansi 1" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>c;

if (c >= 85)
{inc = 'A'; c = 4*2; }
else if (c >= 70)
{inc = 'B'; c = 3*2; }
else if (c >= 55)
{inc = 'C'; c = 2*2; }
else if (c >= 40)
{inc = 'D'; c = 1*2; }
else {inc = 'E'; c = 0;}
cout<<" Indeks : " <<< cout<<"Matematika Sistem informasi 1" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>d;

if (d >= 85)
{ind = 'A'; d = 4*2; }
else if (d >= 70)
{ind = 'B'; d = 3*2; }
else if (d >= 55)
{ind = 'C'; d = 2*2; }
else if (d >= 40)
{ind = 'D'; d = 1*2; }
else {ind = 'E'; d = 0;}
cout<<" Indeks : " <<< cout<<"Statistika 1 **" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>e;

if (e >= 85)
{ine = 'A'; e = 4*2; }
else if (e >= 70)
{ine = 'B'; e = 3*2; }
else if (e >= 55)
{ine = 'C'; e = 2*2; }
else if (e >= 40)
{ine = 'D'; e = 1*2; }
else {ine = 'E'; e = 0;}
cout<<" Indeks : " <<< cout<<"Stuktur & Organisasi Data 1" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>f;

if (f >= 85)
{inf = 'A'; f = 4*2; }
else if (f >= 70)
{inf = 'B'; f = 3*2; }
else if (f >= 55)
{inf = 'C'; f = 2*2; }
else if (f >= 40)
{inf = 'D'; f = 1*2; }
else {inf = 'E'; f = 0;}
cout<<" Indeks : " <<< cout<<"Teknik Pemrograman Terstruktur 1**" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>g;

if (g >= 85)
{ing = 'A'; g = 4*2; }
else if (g >= 70)
{ing = 'B'; g = 3*2; }
else if (g >= 55)
{ing = 'C'; g = 2*2; }
else if (g >= 40)
{ing = 'D'; g = 1*2; }
else {ing = 'E'; g = 0;}
cout<<" Indeks : " <<< cout<<"Teori Organisasi Umum #" < cout<<" Jumlah SKS : 2" < cout<<" Nilai : "; cin>>h;

if (h >= 85)
{inh = 'A'; h = 4*2; }
else if (h >= 70)
{inh = 'B'; h = 3*2; }
else if (h >= 55)
{inh = 'C'; h = 2*2; }
else if (h >= 40)
{inh = 'D'; h = 1*2; }
else {inh = 'E'; h = 0;}
cout<<" Indeks : " <<< cout<<"Pengantar Org. & Arsitektur Komp" < cout<<" Jumlah SKS : 3" < cout<<" Nilai : "; cin>>i;

if (i >= 85)
{ini = 'A'; i = 4*3; }
else if (i >= 70)
{ini = 'B'; i = 3*3; }
else if (i >= 55)
{ini = 'C'; i = 2*3; }
else if (i >= 40)
{ini = 'D'; i = 1*3; }
else {ini = 'E'; i = 0;}
cout<<" Indeks : " <<< mutu = a+b+c+d+e+f+g+h+i; ipk = mutu / 19; system("cls"); cout<<" Daftar Nilai Semester"< cout<<" PTA 2009 / 2010"<< cout<<"NPM : "<< cout<<"Nama : "<< cout<<"Jumlah MK : 9"< cout<<"Jumlah SKS : 19"< cout<<"Jumlah Mutu : "<< cout<<"IP Komulatif : "<<< cout<<"_______________________________________________________________"< cout<<"| Mata kuliah SKS NILAI MUTU |"< cout<<"|_____________________________________________________________|"< cout<<"| Manajemen & Sistem Informasi Manaj 1* 2"<<" "<< ina<<" "<< a<<" |"< cout<<"| Matematika Lanjut 1*/** 2"<<" "<< inb<<" "<< b<<" |"< cout<<"| Akuntansi 1 2"<<" "<< inc<<" "<< c<<" |"< cout<<"| Matematika Sistem informasi 1 2"<<" "<< ind<<" "<< d<<" |"< cout<<"| Statistika 1 ** 2"<<" "<< ine<<" "<< e<<" |"< cout<<"| Stuktur & Organisasi Data 1 2"<<" "<< inf<<" "<< f<<" |"< cout<<"| Teknik Pemrograman Terstruktur 1** 2"<<" "<< ing<<" "<< g<<" |"< cout<<"| Teori Organisasi Umum # 2"<<" "<< inh<<" "<< h<<" |"< cout<<"| Pengantar Org. & Arsitektur Komp 3"<<" "<< ini<<" "<< i<<" |"< cout<<"|_____________________________________________________________|"< cout<<"| Jumlah : 19"<<" "<<<" |"< cout<<"|_____________________________________________________________|"; cout<<'\n'; return 0; }
