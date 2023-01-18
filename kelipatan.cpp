#include <iostream>

using namespace std;

int main()
{
    int i, n, h, x;

    cout<<"\n   Masukan Nilai X = ";
    cin>>x;
    cout<<"\n   Masukan Nilai N = ";
    cin>>n;

        h=x%x;
    cout<<"\n Kelipatan "<<x<<" Sebanyak "<<n<<" Adalah :"<<endl;
        for(i=1; i<=n; i++)
        {
            if(h%x==0){
                h=h+x;
            cout<<" "<<h;
            }
        }
        cout<<"\n";
    return 0;
}
