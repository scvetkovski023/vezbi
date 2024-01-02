#include <iostream>
#include <list>
#include <string.h>
#include <cctype>
#include <numeric>
#include <iterator>
#include <functional>
using namespace std;

class Vraboten{
private:
    char *ime;
    int bodovi;
    static int count;
public:
    Vraboten(char i[]=" ",int b=0);
    ~Vraboten(){
        delete [] ime;
        --count;
    }
    int returnCount(){
        return count;
    }
    void print(){
        cout<<ime<<" so bodovi "<<bodovi<<endl;
    }
    void setIme( char i[]){
        strcpy(ime,i);
    }
    void setBodovi(int b){
        bodovi=b;
    }
    int getBodovi(){
        return bodovi;
    }
    int getCount(){
        return count;
    }
};

int Vraboten::count=0;
Vraboten::Vraboten(char i[],int b){
    ime=new char[strlen(i)+1];
    strcpy(ime,i);
    bodovi=b;
    ++count;
}
void mySort(list<Vraboten> a);
int main()
{
    int vrednost;
    int b=0; char im[10]="Default";
    list <Vraboten> vraboteni;
    list<Vraboten>::iterator it;

    cout<<"Vnesi vrednost na bodovi:"<<endl;
    cin>>vrednost;
    for(int i=0;i<2;i++){
        cout<<"Vnesi informacii"<<endl;
        cin>>b;
        cin>>im;
        Vraboten *pom= new Vraboten(im,b);
        vraboteni.push_back(*pom);
    }
    int suma=0;
    int niza[vraboteni.size()]; int c=0;
    for(it=vraboteni.begin(); it!=vraboteni.end(); ++it)
        niza[c++]=it->getBodovi()*vrednost;
    cout<<"Vkupno treba da se isplati: "<<accumulate(niza,niza+2,suma)<<endl;

    vraboteni.sort([](Vraboten  & lhs, Vraboten  & rhs) {return lhs.getBodovi()>rhs.getBodovi();});
    for(it=vraboteni.begin(); it!=vraboteni.end(); ++it)
        it->print();
    return 0;
}

