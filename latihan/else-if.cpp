#include <iostream>
using namespace std;

int main()
{
    cout << "Nilai Saya ";
    int nilai = 91;

    if (nilai >= 90)
    {
        cout << "Baik Sekali";
    }
    else if (nilai > 75 && nilai <= 89)
    {
        cout << "Baik";
    }
    else if (nilai > 60 && nilai <= 74)
    {
        cout << "Cukup";
    }
    else
    {
        cout << "Kurang";
    }
}
