//judul : urutan bilangan yang lebih besar
#include <iostream>
using namespace std;

//kamus
float A, Be, Ce;

//deskripsi
int main()
{


    cout << "Nilai A = ";
    cin >> A;
    cout << "Nilai B = ";
    cin >> Be;
    cout << "Nilai C = ";
    cin >> Ce;

    cout << "___________________" << endl;
    cout << endl;

    if ((A > Be) && (Be > Ce))
    {
        cout << "A > B > C" << endl;
        cout << "Nilai A lebih besar dari nilai B. Nilai B lebih besar dari nilai C" << endl;
    }

    else if ((A > Ce) && (Ce > Be))
    {
        cout << "A > C > B" << endl;
        cout << "Nilai A lebih besar dari nilai C. Nilai C lebih besar dari nilai B" << endl;
    }

    else if ((Be > A) && (A > Ce))
    {
        cout << "B > A > C" << endl;
        cout << "Nilai B lebih besar dari nilai A. Nilai A lebih besar dari nilai C" << endl;
    }

    else if ((Be > Ce) && (Ce > A))
    {
        cout << "B > C > A" << endl;
        cout << "Nilai B lebih besar dari nilai C. Nilai C lebih besar dari nilai A" << endl;
    }

    else if ((Ce > A) && (A > Be))
    {
        cout << "C > A > B" << endl;
        cout << "Nilai C lebih besar dari nilai A. Nilai A lebih besar dari nilai B" << endl;
    }

    else if ((Ce > Be) && (Be > A))
    {
        cout << "C > B > A" << endl;
        cout << "Nilai C lebih besar dari nilai B. Nilai B lebih besar dari nilai A" << endl;
    }

    cout << "___________________" << endl;
    cout << endl;

    return 0;
}
