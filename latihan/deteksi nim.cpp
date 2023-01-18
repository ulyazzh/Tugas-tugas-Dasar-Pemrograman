#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "masukkan nim anda : ";
    cin >> a;
    if (a[0] == 'A' && a[1]=='1' && a[2]=='1')
    {
        cout << "teknik informatika S1";
    }

    else if (a[0] == 'A' && a[1]=='1' && a[2]=='2')
    {
        cout << "sistem informasi S1";
    }

    else if (a[0] == 'A' && a[1]=='1' && a[2]=='4')
    {
        cout << "DKV S1";
    }

    else if(a[0] == 'A' && a[1] == '1' && a[2]=='5')
    {
        cout << "ilmu komunikasi S1";
    }

    else
    {
        cout << "prodi tidak terdeteksi";
    }
}
