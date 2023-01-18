#include <iostream>
using namespace std;

int main()
{
    string kata;
    int a, n, i;
    bool palindrome=true;

    cout << "Program Mengecek kata - Kalimat Palindrom atau bukan" << endl;

    cout << "Input Kata: ";
    getline(cin, kata);
    n = kata.length();

    i = 0;
    while (i < n){
        if (kata[1]!= kata[n-i-1])
        {
            palindrome = false;
            break;
        }

        i++;
    }
    cout << "result: ";
    if (palindrome = true)
    {
           cout << "palindrome";
    }
    else
    {
        cout << "Bukan Palindrom";
    }

    cin.ignore();
    return 0;
}
