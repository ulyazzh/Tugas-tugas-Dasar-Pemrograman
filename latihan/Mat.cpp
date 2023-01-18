#include <iostream>
using namespace std;

int MatA,MatB,MatC,a,x;
int a1[4]={2,3,4,1};
int a2[4]={2,4,1,6};
int a3[4]={8,1,1,1};

int b1[4]={4,4,9,1};
int b2[4]={8,2,1,1};
int b3[4]={1,5,1,3};

int c1[4]={4,7,9,1};
int c2[4]={1,7,3,1};
int c3[4]={3,3,1,2};

int main(){
    x=0;
    while(x < 4){
        MatA=MatA+a1[x]+a2[x]+a3[x];
        MatB=MatB+a1[x]+b2[x]+b3[x];
        MatC=MatC+c1[x]+c2[x]+c3[x];
        x++;
    }
    a=(MatA+MatB)-(MatA+MatC);
    cout<<"Jumlah A = "<< MatA << endl << "Jumlah B = " << MatB << endl << "Jumlah C = " << MatC << endl << "Jumlah D = " << a;
}
