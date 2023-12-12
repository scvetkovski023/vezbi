#include <iostream>

using namespace std;

class Dropki{
private:
    int broitel;
    int imenitel;
public:
    Dropki(int b=0,int i=1){
        setDropki(b,i);
    }
    void setDropki(int b,int i);
    ~Dropki(){};
    int get_broitel();
    int get_imenitel();

};

void Dropki::setDropki(int b,int i){
    if(i==0)
        cout<<"So 0 ne se deli."<<endl;
    else{
        broitel=b;
        imenitel=i;
    }
}
int Dropki::get_broitel(){
    return broitel;
}
int Dropki::get_imenitel(){
    return imenitel;
}

void sobiranje(Dropki a, Dropki b);
void odzemanje(Dropki a,Dropki b);
void mnozenje(Dropki a,Dropki b);
void delenje(Dropki a,Dropki b);
int main()
{
    Dropki a,b;
    int br,im;
    cout<<"Vnesi ja prvata dropka(prvo broitel,pa imenitel):"<<endl;
    cin>>br>>im;
    a.setDropki(br,im);
    cout<<"Vnesi ja prvata dropka(prvo broitel,pa imenitel):"<<endl;
    cin>>br>>im;
    b.setDropki(br,im);
    sobiranje(a,b);
    odzemanje(a,b);
    mnozenje(a,b);
    delenje(a,b);
    return 0;
}
void sobiranje(Dropki a, Dropki b){
    int br,im;  // rezultat od sobiranje
    float rez;
    im=a.get_imenitel()*b.get_imenitel();
    br=(a.get_broitel()*b.get_imenitel())+(b.get_broitel()*a.get_imenitel());
    int pom=im;
    for(int i=2;i<=pom/2;i++){
        while(br%i==0 && im%i==0){
            br=br/i;
            im=im/i;
        }
    }
    rez=(float)br/im;
    cout<<"Rezultatot e: "<<br<<" / "<<im<<" ili "<<rez<<endl;
}
void odzemanje(Dropki a,Dropki b){
    int br,im;  // rezultat od odzemanje
    float rez;
    im=a.get_imenitel()*b.get_imenitel();
    br=(a.get_broitel()*b.get_imenitel())-(b.get_broitel()*a.get_imenitel());
    int pom=im;
    for(int i=2;i<=pom/2;i++){
        while(br%i==0 && im%i==0){
            br=br/i;
            im=im/i;
        }
    }
    rez=(float)br/im;
    cout<<"Rezultatot e: "<<br<<" / "<<im<<" ili "<<rez<<endl;
}
void mnozenje(Dropki a,Dropki b){
    int br,im;  // rezultat od odzemanje
    im=a.get_imenitel()*b.get_imenitel();
    br=a.get_broitel()*b.get_broitel();
    int pom=im;
    for(int i=2;i<=pom/2;i++){
        while(br%i==0 && im%i==0){
            br=br/i;
            im=im/i;
        }
    }
    float rez=(float)br/im;
    cout<<"Rezultatot e: "<<br<<" / "<<im<<" ili "<<rez<<endl;
}
void delenje(Dropki a,Dropki b){
    int br,im;  // rezultat od odzemanje
    br=a.get_broitel()*b.get_imenitel();
    im=a.get_imenitel()*b.get_broitel();
    int pom=im;
    for(int i=2;i<=pom/2;i++){
        while(br%i==0 && im%i==0){
            br=br/i;
            im=im/i;
        }
    }
    float rez=(float)br/im;
    cout<<"Rezultatot e: "<<br<<" / "<<im<<" ili "<<rez<<endl;
}
