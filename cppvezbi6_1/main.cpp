#include <iostream>
#include <string.h>
#include <cassert>
using namespace std;
class Covek{
private:
    char *ime;
    char *prezime;
    char *adresa;
    char *telefon;
public:
    Covek(const char *i,const char *p, const char *adr,const char *tel){
        ime= new char[strlen(i)+1];
        assert(ime!=0);
        strcpy(ime,i);
        prezime = new char[strlen(p)+1];
        assert(prezime!=0);
        strcpy(prezime,p);
        adresa= new char[strlen(adr)+1];
        assert(adresa!=0);
        strcpy(adresa,adr);
        telefon= new char[strlen(tel)+1];
        assert(telefon!=0);
        strcpy(telefon,tel);
    }
    ~Covek(){}
    const char *get_ime() const{
        return ime;
    }
    const char *get_prezime() const{
        return prezime;
    }
    const char *get_adresa() const{
        return adresa;
    }
    const char *get_telefon() const{
        return telefon;
    }

};

class Stedac{
private:
    Covek lice;
    float bilans;
    float kredit;
    static int brojStedaci;
    static float kamata;
public:
    Stedac(const char *i,const char *p,const char *adr,const char *tel,float b,float k):
        lice(i,p,adr,tel)
    {

        bilans=b;
        kredit=k;
        ++brojStedaci;
    }
    ~Stedac(){
        delete [] lice.get_ime();
        delete [] lice.get_prezime();
        delete [] lice.get_adresa();
        delete [] lice.get_telefon();
        --brojStedaci;
    };
    Covek getlice(){
        return lice;
    }
    int getbrojStedaci(){
        return brojStedaci;
    }
    float getkamata(){
        return kamata;
    }
};

int main()
{
    Stedac *eden= new Stedac("Stefan","Cvetkovski","Partizanska19","098765431",500.00,23650.00);
    Stedac *dva= new Stedac("Nekoj","Nekojson","Negde","22334455",1000.00,3000.00);
    cout<<"Ime:"<<eden->getlice().get_ime()<<" Prezime: "<<eden->getlice().get_prezime()<<endl;
    cout<<"Ime:"<<dva->getlice().get_ime()<<" Prezime: "<<dva->getlice().get_prezime()<<endl;
    delete eden;
    eden=0;
    delete dva;
    dva=0;
    return 0;
}

int Stedac::brojStedaci=0;
