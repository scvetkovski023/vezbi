#include <iostream>
#include <string.h>
#include <string>
using namespace std;

template <class T>
class Mnozestvo{
private:
    T *elementi;
    int static broj;
public:
    Mnozestvo(){};
    void dodaj(T e){
        elementi[broj]=e;
        broj++;
    }
    T max(){
        return vratiMax(elementi,broj);
    }
    int returnCount(){
        return broj;
    }
    void print(){
        for(int i=0;i<broj;i++){
            cout<<elementi[i]<<" ";
        }
        cout<<endl;
    }

};
template <class T>
int Mnozestvo<T>::broj=0;

int vratiMax(int* a,int count){
    int max=a[0];
    for(int i=1;i<count;i++){
        if(max<a[i])
            max=a[i];
    }
    return max;
}
double vratiMax(double* a,int count){
    double max=a[0];
    for(int i=1;i<count;i++){
        if(max<a[i])
            max=a[i];
    }
    return max;
}
char* vratiMax(char **a,int count){
    char* max;
    strcpy(max,a[0]);
    for(int i=1;i<count;i++){
        if(strcmp(a[i],max)==1)
            strcpy(max,a[i]);
    }
    return max;
}
int vnesi(int in,int klasa){
    klasa=in;
    return klasa;
}
double vnesi(double in,double klasa){
    klasa=in;
    return klasa;
}
char* vnesi(char* in,char* klasa){
    strcpy(klasa,in);
    return klasa;
}

int main()
{
    Mnozestvo<int> A;
    Mnozestvo<double> B;
    Mnozestvo<char*> C;
    int izbor=0;
    while(izbor!=9){
        cout<<"(1)Dodaj element vo A"<<endl;
        cout<<"(2)Dodaj element vo B"<<endl;
        cout<<"(3)Dodaj element vo C"<<endl;
        cout<<"(4)Prikazi go A"<<endl;
        cout<<"(5)Prikazi go B"<<endl;
        cout<<"(6)Prikazi go C"<<endl;
        cout<<"(7)Prikazi gi najgolemite elementi"<<endl;
        cout<<"(8)Prikazi broj na elementi vo mnozestvata"<<endl;
        cout<<"(9)Kraj"<<endl;
        cin>>izbor;
        switch(izbor){
        case 1:{
            int vlez;
            cout<<"Vnesete integer:"<<endl;
            cin>>vlez;
            A.dodaj(vlez);
            break;
        }
        case 2:{
            double vlez;
            cout<<"Vnesete double:"<<endl;
            cin>>vlez;
            B.dodaj(vlez);
            break;
        }
        case 3:{
            char *vlez;
            cout<<"Vnesete *char"<<endl;
            cin>>vlez;
            C.dodaj(vlez);
            break;
        }
        case 4:{
            A.print();
            break;
        }
        case 5:{
            B.print();
            break;
        }
        case 6:{
            C.print();
            break;
        }
        case 7:{
            cout<<"A: "<<A.max()<<endl;
            cout<<"B: "<<B.max()<<endl;
            cout<<"C: "<<C.max()<<endl;
            break;
        }
        case 8:{
            cout<<"A count: "<<A.returnCount()<<endl;
            cout<<"B count: "<<B.returnCount()<<endl;
            cout<<"C count: "<<C.returnCount()<<endl;
        }
        default: cout<<"Pogresen broj."<<endl;
        }
    }

    return 0;
}
