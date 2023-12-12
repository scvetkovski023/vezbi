#include <iostream>
#include <string.h>
using namespace std;
class Datum{
private:
    int den;
    int mesec;
    int godina;
    int check(int);
public:
    Datum( int d ,int m,int g){
        if(m>0 && m<13){
            mesec=m;
        }
        else{
            mesec=1;
            cout<<"Pogresen mesec. Postaven e na 1."<<endl;
        }
        if(g<1950){
            godina=1900;
            cout<<"Nema tolku staro zivotno.Postaveno e na 1950."<<endl;
        }
        else{
            godina=g;
        }
        den=check(d);
    }
    int get_den(){
        return den;
    }
    int get_mesec(){
        return mesec;
    }
    int get_godina(){
        return godina;
    }
    ~Datum(){};
    void print(){
        cout<<den<<"/"<<mesec<<"/"<<godina<<" ";
    }
};

class Zivotno{
private:
    Datum raganje;
    Datum primanje;
    char tip[15];
    char pol;
    char ime[10];
    Datum p_vakcina;
public:
    Zivotno(char *t,char *i,char mz, int rd,int rm, int rg, int pd,int pg, int pm, int vd,int vm,int vg):
        raganje(rd,rm,rg),primanje(pd,pm,pg),p_vakcina(vd,vm,vg){
        int length = strlen( t );
        length = ( length < 15 ? length : 14 );
        strncpy( tip, t, length );
        t[ length ] = '\0';
        length = strlen( i );
        length = ( length < 10 ? length : 9 );
        strncpy( ime, i, length );
        i[ length ] = '\0';
        pol=mz;
    }
    char get_tip(){
        return tip[0];
    }
    int presmetaj_vakcina(){            // prikazuva samo za denesen datum 10 12 2023
        Datum denes=Datum(10,12,2023);
        if(get_tip()=='c'){
            if(p_vakcina.get_godina()==(denes.get_godina()-1) && p_vakcina.get_mesec()==denes.get_mesec())
                if((p_vakcina.get_den()-denes.get_den())<=7 && (p_vakcina.get_den()-denes.get_den())>=0)
                    return 1;       // za cicaci e 1 godina odnosno od 10.12.2022 do 17.12.2022.
        }
        if(get_tip()=='v'){
            if(p_vakcina.get_godina()==denes.get_godina()){
                if(p_vakcina.get_mesec()==4 && p_vakcina.get_den()<18 && p_vakcina.get_den()>9)
                    return 1;
            }
        }
        if(get_tip()=='p'){
            if(p_vakcina.get_godina()==denes.get_godina()){
                if(p_vakcina.get_mesec()==6 && p_vakcina.get_den()<18 && p_vakcina.get_den()>9)
                    return 1;
            }
        }
        return 0;
    }
    void Prikazhi_Podatoci(){
        cout<<"Ime: "<<ime;
        cout<<" Pol: "<<pol<<" Tip: "<<tip;
        cout<<" Datum na raganje:";
        raganje.print();
        cout<<"Datum na primanje:";
        primanje.print();
        cout<<" Datum na posledna vakcina: ";
        p_vakcina.print();
    }

};

int Datum::check( int t){
    static const int den_mesec[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(t>0 && t<=den_mesec[mesec])
        return t;
    if( mesec == 2 && t==29 && (godina%400==0 || ( godina%4==0 && godina%100!=0)))
        return t;
    cout<<"Denot "<<t<<" e gresen.Postaveno e na 1"<<endl;
    return 1;
}

void sostojba(Zivotno *z,int c);
void prikaz_grupa(Zivotno *z,int c,char v);
void print(Zivotno *z,int c);
void vakcina(Zivotno *z,int c);


int main()
{
    Zivotno zivotni[]={};
    int counter=0;
    int izbor=0;
    while(izbor!=6){
        cout<<"(1) Dodavanje na zivotno:"<<endl;
        cout<<"(2) Prikazuvanje na brojna sostojba"<<endl;
        cout<<"(3) Prikazuvanje na grupa."<<endl;
        cout<<"(4) Cela lista."<<endl;
        cout<<"(5) Zivotni za vakcina za edna nedela."<<endl;
        cout<<"(6) Izlez."<<endl;
        cin>>izbor;
        switch(izbor){
        case 1:{
            char t[15],i[10],p;
            int rd,rm,rg,pd,pm,pg,vd,vm,vg;
            cout<<"Vnesi tip na zivotno, ime i pol."<<endl;
            cin>>t>>i>>p;
            cout<<"Vnesi datum na raganje,primanje i posledna vakcina";
            cin>>rd>>rm>>rg>>pd>>pm>>pg>>vd>>vm>>vg;
            zivotni[counter]=Zivotno(t,i,p,rd,rm,rg,pd,pg,pm,vd,vm,vg);
            counter++;
            break;
        }
        case 2:{
            sostojba(zivotni,counter); break;
        }
        case 3:{
            char baran;
            cout<<"Vnesi za koj vid sakash da se ispechati:"<<endl;
            cin>>baran;
            prikaz_grupa(zivotni,counter,baran);
            break;
        }
        case 4:{
            print(zivotni,counter); break;
        }
        case 5:
            vakcina(zivotni,counter); break;
        case 6:
            cout<<"Kraj."<<endl; break;
        default:cout<<"Pogresen broj."<<endl;
        }
    }
    return 0;
}
void print(Zivotno *z,int c){
    for(int i=0;i<c;i++){
        z[i].Prikazhi_Podatoci();
    }
}
void sostojba(Zivotno *z,int c){
    int brojac_v=0,brojac_c=0,brojac_p=0;   // brojaci za trite kategorii
    for(int i=0;i<c;i++){
        if(z[i].get_tip()=='v')     // ako e vlekac
            brojac_v++;
        if(z[i].get_tip()=='c')     // ako e cicach
            brojac_c++;
        if(z[i].get_tip()=='p')     // ako e ptica
            brojac_p++;
    }
    cout<<"Vo zooloshkata ima:"<<endl;
    cout<<brojac_p<<" ptici,"<<brojac_v<<" vlekaci i "<<brojac_c<<" cicaci."<<endl;
}
void prikaz_grupa(Zivotno *z,int c,char baran){
    for(int i=0;i<c;i++){
        if(z[i].get_tip()==baran)           // ako prvata bukva se sovpagja so char v ( vnesenata )
            z[i].Prikazhi_Podatoci();   // togas pechati
    }
}
void vakcina(Zivotno *z,int c){
    for(int i=0;i<c;i++){
        if(z[i].presmetaj_vakcina()==1)
            z[i].Prikazhi_Podatoci();
    }
}
