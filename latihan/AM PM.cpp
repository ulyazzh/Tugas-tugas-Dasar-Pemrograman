#include <iostream>
using namespace std;

//kamus:
int jam, menit, time;

int main()
{
    cout << "input jam : ";
    cin >> jam;
    cout << "input menit : ";
    cin >> menit;


    if (jam >= 12)
    {
        cout << (jam-12) << ":" << menit << " PM";
    }
    else
    {
        cout << jam << ":" <<menit << " AM";
    }
}
