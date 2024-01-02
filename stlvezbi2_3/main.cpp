#include <iostream>
#include <string.h>
#include <cstring>
#include <typeinfo>
using namespace std;

void proveri( int k, int kod){
    kod=k;
}
void proveri(char *k, char*kod){
    kod=new char[strlen(k)+1];
    strcpy(kod,k);
}

template<class T>
class Lica{
private:
    char *imeprezime;
    int mat_br;
    int vozrast;
    char *adresa;
    T kod;
    int static count;
public:
    Lica(char *ip,int m,int v,char *a, T k){
        imeprezime=new char[strlen(ip)+1];
        strcpy(imeprezime,ip);
        adresa=new char[strlen(a)+1];
        strcpy(adresa,a);
        proveri(k,kod);
        mat_br=m;
        vozrast=v;
        ++count;
    }
    ~Lica(){
        delete [] imeprezime;
        delete [] adresa;
        --count;
    }
    void print(){
        cout<<"Ime prezime "<<imeprezime<<endl;
        cout<<"Adresa "<<adresa<<endl;
        cout<<"Vozrast i mat br "<<vozrast<<" "<<mat_br<<endl;
        cout<<"Kod "<<kod<<endl;
    }
    int getCount(){
        return count;
    }

};
template <class T>
int Lica<T>::count=0;



template <class T>
void pechatiPole(T* pole){
    for(int i=0;i<pole[i]->getCount();i++){
        pole[i]->print();
    }
}

int main(){
    Lica<int> **Vraboteni;
    Vraboteni=(Lica<int>**)malloc(50*sizeof(Lica<int>));
    Lica<char[]> **Klienti;
    Klienti=(Lica<char[]>**)malloc(50*sizeof(Lica<char[]>));
    int vr=0;
    int kl=0;
    int izbor=0;
    while(izbor!=5){
        cout<<"(1)Podatoci za vraboten."<<endl;
        cout<<"(2)Podatoci za klient."<<endl;
        cout<<"(3)Pecati lista na vraboteni."<<endl;
        cout<<"(4)Pecati lista na klienti."<<endl;
        cout<<"(5)Kraj."<<endl;
        cin>>izbor;
        switch(izbor){
        case 1:{
            int m,v,k;
            char ip[20],a[20];
            cout<<"Vnesi ime i prezime"<<endl;
            cin>>ip;
            cout<<"Vnesi adresa"<<endl;
            cin>>a;

            cout<<"Vnesi vozrast"<<endl;
            cin>>v;
            cout<<"Vnesi mat_br"<<endl;
            cin>>m;
            cout<<"Vnesi kod"<<endl;
            cin>>k;
            Vraboteni[vr]=new Lica<int>(ip,m,v,a,k); vr++;
            break;
        }
        case 2:{
            int m,v;
            char k[20];
            char ip[20],a[20];
            cout<<"Vnesi ime i prezime"<<endl;
            cin>>ip;
            cout<<"Vnesi adresa"<<endl;
            cin>>a;
            cout<<"Vnesi vozrast"<<endl;
            cin>>v;
            cout<<"Vnesi mat_br"<<endl;
            cin>>m;
            cout<<"Vnesi kod"<<endl;
            cin>>k;
            Klienti[vr]=new Lica<char[]>(ip,m,v,a,k); kl++;
            break;
        }
        case 3:{
            pechatiPole(Vraboteni);
            break;
        }
        case 4:{
            pechatiPole(Klienti);
            break;
        }
        case 5:{
            cout<<"Kraj."<<endl;
            break;
        }
        default:cout<<"Pogresen broj"<<endl;
        }
    }
    for(int i=0;i<Vraboteni[0]->getCount();i++){
        delete [] Vraboteni[i];
    }
    for(int i=0;i<Klienti[0]->getCount();i++){
        delete [] Klienti[i];
    }
    return 0;
}
