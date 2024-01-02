#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    int i,n,m;
    cout<<"Vnesi do koj broj n:"<<endl;
    cin>>n;
    cout<<"Vnesi do koja decimala m:"<<endl;
    cin>>m;
    cout<<setw(m)<<"i"<<setw(m)<<setw(m)<<"i*i"<<setw(m)<<"sqrt(i)"<<setw(m)<<"i^(1/3)"<<endl;
    for(int i=1;i<=n;i++){
        cout<<setw(m)<<i<<setw(m)<<setw(m)<<i*i<<setw(m)<<setprecision(4)<<sqrt(i)<<setw(m)<<setprecision(4)<<pow(i,1./3.)<<endl;
    }
    return 0;
}
