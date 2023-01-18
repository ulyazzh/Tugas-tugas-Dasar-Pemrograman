
#include <iostream>
using namespace std;

int main()
{
    int pil;
    string jkel;

    cout <<"pilih"<< endl;
    cout <<"1. laki laki\n2. perempuan"<<endl;
    cout << "pilihan:";
    cin>>pil;

    switch (pil)
    {
        case 1 :
            jkel ="laki laki";
        break;
        case 2 :
            jkel = "perempuan";
            break;

        }
        cout <<"jenis kelamin anda adalah" <<jkel;
}
