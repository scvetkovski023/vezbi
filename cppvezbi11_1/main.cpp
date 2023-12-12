#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;
class Datum{
private:
    int den;
    int mesec;
    int godina;
public:
    Datum(int d,int m,int g){
        setDatum(d,m,g);
    }
    void setDatum(int d,int m,int g){
        if(m>0 && m<13){
            mesec=m;
        }
        else{
            mesec=1;
            cout<<"Nema takov mesec. Postaveno e na 1."<<endl;
        }
        if(g<2024){
            godina=g;
        }
        else{
            cout<<"Gresna godina"<<endl;
        }
        den=proveriDen(d,m,g);
    }
    int getden(){ return den; }
    int getmesec(){ return mesec; }
    int getgodina(){ return godina; }
    void print(){
        cout<<den<<"/"<<mesec<<"/"<<godina<<endl;
    }
    int proveriDen( int day , int m,int g)
    {
        static const int denovi[ 13 ] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ( day > 0 && day <= denovi[ m ] )
            return day;
        if ( m == 2 && day == 29 && ( g % 400 == 0 || ( g % 4 == 0 && g % 100 != 0 ) ) )
            return day;
        cout << "Denot " << day << " e greshen. Postaveno na 1."<<endl;
        return 1;
    }
};

class Artikl{
protected:
    char *ime;
    char *golemina;
    int cena;
    Datum donesen;

    static int broj;
    static int vkupna_cena;
public:
    Artikl(const char *,const char *,int,int,int,int);
    ~Artikl();
    void printArtikl();
    int getbroj(){
        return broj;
    }
    int get_vkupna(){
        return vkupna_cena;
    }
};
int Artikl::broj=0;
int Artikl::vkupna_cena=0;
Artikl::Artikl(const char *i,const char *g,int c,int d,int m,int god):donesen(d,m,god){
    ime=new char[strlen(i)+1];
    strcpy(ime,i);
    golemina=new char[strlen(g)+1];
    strcpy(golemina,g);
    if(c<0)
        cena=1;
    else
        cena=c;
    ++broj;
    vkupna_cena+=cena;
}
Artikl::~Artikl(){
    delete [] ime;
    delete [] golemina;
    --broj;
    vkupna_cena-=cena;
}
void Artikl::printArtikl(){
    cout<<"Ime "<<ime<<" Golemina "<<golemina<<endl;
    cout<<"Cena: "<<cena<<"Datum donesen:";
    donesen.print();
}
class Pantoloni:public Artikl{
protected:
    Datum sledna;
public:
    Pantoloni(const char *i,const char *g,int c,int d,int m,int god,int d1,int m1,int g1):Artikl(i,g,c,d,m,god),sledna(d1,m1,g1){}
    ~Pantoloni(){}
    void printPantoloni(){
        printArtikl();
        cout<<"Datum na sledna nabavka:";
        sledna.print();
    }
    Datum getSledna(){
        return sledna;
    }
};
class Kosuli:public Artikl{
public:
    Kosuli(const char *i,const char *g,int c,int d,int m,int god):Artikl(i,g,c,d,m,god){}
    ~Kosuli(){}
    void printKosuli(){
        printArtikl();
    }
};
int naracka(Datum *,Datum);
int main()
{
    int izbor=0,pa=0,k=0;
    Pantoloni **pantolon;
    pantolon=(Pantoloni**)malloc(50*sizeof(Pantoloni*));
    Kosuli **kosuli;
    kosuli=(Kosuli**)malloc(50*sizeof(Kosuli*));
    char izbor1;
    while(izbor!=5){
        cout<<"(1)Dodaj artikl."<<endl;
        cout<<"(2)Artikli od grupa."<<endl;
        cout<<"(3)Cela lista."<<endl;
        cout<<"(4)Artikli koi se za naracka za 1 nedela."<<endl;
        cout<<"(5)Izlez."<<endl;
        cin>>izbor;
        switch(izbor){
        case 1:{
            cout<<"Pantoloni ili koshuli"<<endl;
            cin>>izbor1;
            switch(izbor1){
            case 'p':{
                cout<<"Vnesi ime,golemina,cena,datum na primanje"<<endl;
                string vlez[6];
                int i;
                for(i=0;i<6;i++){
                    cin>>vlez[i];
                }
                cout<<"Vnesi datum na naracka:"<<endl;
                int naracka[3];
                for(i=0;i<3;i++){
                    cin>>naracka[i];
                }
                //pantolon[pa]=new Pantoloni("levis","xl",500,17,10,2020,15,11,2023);
                const char *name=vlez[0].c_str(),*g=vlez[1].c_str();
                int c=stoi(vlez[2],0,10),d=stoi(vlez[3],0,10),m=stoi(vlez[4],0,10),god=stoi(vlez[5],0,10);
                pantolon[pa]=new Pantoloni(name,g,c,d,m,god,naracka[0],naracka[1],naracka[2]);
                pa++;
                break;
            }
            case 'k':{
                cout<<"Vnesi ime,golemina,cena,datum na primanje"<<endl;
                string vlez[6];
                for(int i=0;i<6;i++){
                    cin>>vlez[i];
                }
                kosuli[k]= new Kosuli(vlez[0].c_str(),vlez[1].c_str(),stoi(vlez[2],0,10),
                                       stoi(vlez[3],0,10),stoi(vlez[4],0,10),stoi(vlez[5],0,10)); k++;
                break;
            }
            default: cout<<"Pogresen artikl"<<endl;
            }
            break;
        }
        case 2:{
            cout<<"Pantoloni ili koshuli"<<endl;
            cin>>izbor1;
            switch(izbor1){
            case 'p':{
                for(int i=0;i<pa;i++){           // gi pechati site pantaloni
                    cout<<"Pantoloni:"<<endl;
                    pantolon[i]->printArtikl();
                }
                break;
            }
            case 'k':{
                for(int i=0;i<k;i++){
                    cout<<"Kosula:"<<endl;
                    kosuli[i]->printArtikl();      // site koshuli
                }
                break;
            }
            default: cout<<"Pogresen artikl"<<endl;
            }
        }
        case 3:{
            int i;
            for(i=0;i<pa;i++){           // gi pechati site pantaloni
                cout<<"Pantoloni:"<<endl;
                pantolon[i]->printArtikl();
            }
            for(i=0;i<k;i++){
                cout<<"Kosula:"<<endl;
                kosuli[i]->printArtikl();      // site koshuli
            }
            cout<<"Vkupna cena e:"<<kosuli[0]->get_vkupna()<<endl;
            break;
        }
        case 4:{
            time_t t = time(0);
            tm* now=localtime(&t);
            int godina=(now->tm_year+1900);
            int mesec=now->tm_mon+1;
            int den=now->tm_mday;
            Datum *deneshen= new Datum(den,mesec,godina);
            for(int i=0;i<pa;i++){
                Datum pom=pantolon[i]->getSledna();
                if(naracka(deneshen,pom)==1)
                    pantolon[i]->printArtikl();
            }
            delete [] deneshen;
        }
        case 5:{
            cout<<"Kraj."<<endl; break;
        }
        default:cout<<"Pogresen broj"<<endl;
        }
    }
    int i;
    for(i=0;i<pa;i++){
        delete [] pantolon[i];
    }
    for(i=0;i<k;i++){
        delete [] kosuli[i];
    }
    return 0;
}
int naracka(Datum *d,Datum s){
    static const int denovi[ 13 ] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(denovi[d->getmesec()]-d->getden()>=7){         // se gleda od 1 do 23 ili 24ti vo mesecot
        if(((s.getden())-(d->getden()))<=7){
            return 1;       // treba da se naracha vo slednata nedela
        }
    }
    else{
        if(((denovi[d->getmesec()]-d->getden())+s.getden())<=7){ // primer denes e 27 od 31 to e 31-27=4 i den na naracka pomalo od 7 treba da e
            if(d->getmesec()==12 && s.getmesec()==1 && s.getgodina()==(d->getgodina()+1)){ // ova samo za dekemvri
                return 1;
            }
            if((d->getmesec()+1)==s.getmesec())      // momentalniot mesec + 1 = sledniot
                return 1;
        }
    }
    return 0;
}
