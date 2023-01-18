//judul     : Program palindrome
//          : 21 des 2022
#include <iostream>
using namespace std;
//kamus
string kata;
int i, n;
/*bool palindrome = true;*/
bool palindrome  ;

//deskripsi
int main()
{
    cout << "Program Mengecek Kata - Kalimat Palindrom atau Bukan" << endl;

    cout << "Input Kata : ";
    getline(cin,kata);
    n = kata.length();
    palindrome = true;
    i=0;
    while(i<n)
    {
        if(kata[i] != kata[n-i-1])
        {
            palindrome = false;
            break;
        }
        i++;
    }

    cout << "Result : ";
    if(palindrome == true)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Bukan Palindrome";
    }
    cin.ignore();
    return 0;

}
