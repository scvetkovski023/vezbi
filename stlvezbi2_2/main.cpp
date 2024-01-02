#include <iostream>
using namespace std;

class Kvadrat{
private:
    int strana;
    static int count;
public:
    Kvadrat(int s=0){
        strana=s;
        ++count;
    }
    int ploshtina(){
        return strana*strana;
    }
    void print(){
        cout<<"Kvadrat so strana "<<strana<<endl;
        cout<<"Ploshtina ima "<<ploshtina()<<endl;
    }
    int getCount(){
        return count;
    }

};
int Kvadrat:: count=0;
class Pravoagolnik{
private:
    int sirina;
    int dolzina;
    static int count;
public:
    Pravoagolnik(int s=0,int d=0){
        sirina=s;
        dolzina=d;
        ++count;
    }
    int ploshtina(){
        return sirina*dolzina;
    }
    void print(){
        cout<<"Pravoagolnik so sirina "<<sirina<<" i dolzina "<<dolzina<<endl;
        cout<<"Ploshtina ima "<<ploshtina()<<endl;
    }
    int getCount(){
        return count;
    }

};
int Pravoagolnik::count=0;

template <class T>
void pechatiPole(T pole[]){
    for(int i=0;i<pole[i].getCount();i++){
        pole[i].print();
    }
}

template <class T>
void sortPole(T pole[]){
    T temp=pole[0];
    for(int i=0;i<pole[i].getCount()-1;i++){
        int min=pole[i].ploshtina();
        for(int j=i+1;j<pole[i].getCount();j++){
            if(pole[i].ploshtina()>pole[j].ploshtina()){
                temp=pole[i];
                pole[i]=pole[j];
                pole[j]=temp;
            }
        }
    }
}
int main()
{
    Kvadrat array1[]={Kvadrat(3),Kvadrat(4),Kvadrat(2)};
    Pravoagolnik array2[]={Pravoagolnik(4,5),Pravoagolnik(2,1),Pravoagolnik(3,4)};
    pechatiPole(array1);
    sortPole(array1);
    cout<<"Posle sort"<<endl;
    pechatiPole(array1);

    cout<<"Pravoagolnik"<<endl;
    pechatiPole(array2);
    sortPole(array2);
    cout<<"Posle sort"<<endl;
    pechatiPole(array2);
    return 0;
}
