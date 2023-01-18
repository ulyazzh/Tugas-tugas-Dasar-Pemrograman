# include <iostream>
using namespace std;

int main()
{
    double alas, tinggi, luas;
    cout << "masukkan alasnya : ";
    cin >> alas;
    cout << "masukkan tingginya : ";
    cin >> tinggi;
    luas = (alas*tinggi)/2;
    cout << "diketahui : " << endl;
    cout << "alas : " << alas << " cm" << endl;
    cout << "tinggi : " << tinggi << " cm" << endl;
    cout << " ditanyakan ? luas" << endl;
    cout << "penyelesaian : " << endl;
    cout << "(alas*tinggi)/2"<< endl;
    cout << alas << "*" << tinggi << "/2"  << endl;
    cout << "hasilnya adalah : " << luas << " cm" << endl;
}
