//judul
#include <iostream>
using namespace std;

//kamus
float A, Be, Ce;


//deskripsi
int main()
{
    A = 1.9;
    Ce = 20;

    cout << "masukkan nilai Be : " ;
    cin >> Be;
    cout << "_________________" << endl;
    cout << " " << endl;
    cout << "A * Be " << endl;
    cout << A << " * " << Be << " = " << A * Be << endl;
    cout << "_________________" << endl;
    cout << " " << endl;
    cout << "A + Ce * Be  " << endl;
    cout << A << " + " << Ce <<" * " << Be << " = "<< A + Ce * Be << endl;
    cout << "_________________" << endl;
    cout << " " << endl;

    cout << "===========================================" << endl;
    cout << endl;

    A = 20;
    Ce = 1.9;

    cout << "masukkan nilai Be : " ;
    cin >> Be;
    cout << "_________________" << endl;
    cout << " " << endl;
    cout << "A * Be " << endl;
    cout << A << " * " << Be << " = " << A * Be << endl;
    cout << "_________________" << endl;
    cout << " " << endl;
    cout << "A + Ce * Be  " << endl;
    cout << A << " + " << Ce <<" * " << Be << " = "<< A + Ce * Be << endl;
    cout << "_________________" << endl;
    cout << " " << endl;
    return 0;
}


