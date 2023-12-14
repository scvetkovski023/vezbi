#include <iostream>
using namespace std;

template <typename T>
void selekcija(T a[],int n){
    T min;
    T pom;
    for(int i=0;i<n-1;i++){
        min=a[i];
        for(int j=i+1;j<n;j++){
            if(min>a[j]){
                pom=a[i];
                a[i]=a[j];
                a[j]=pom;
            }
        }
    }
}

int main (){

    int a[100],n;
    double b[100];
    cout<<"Vnesi broj na elementi:"<<endl;
    cin>>n;
    cout<<"Vnesi niza"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Vnesi double"<<endl;
    for(int i=0;i<n;i++)
        cin>>b[i];
    selekcija(a,n);
    selekcija(b,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        printf("%.2f ",b[i]);
    }
    return 0;
}

