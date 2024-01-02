#include <iostream>
#include <map>
#include <string.h>

using namespace std;
class Uplata{
private:
    char *ime;
    int uplata;
    static int count;
public:
    Uplata(char *i,int u){
        char* ime=new char[strlen(i+1)];
        strcpy(ime,i);
        uplata=u;
        ++count;
    }
    ~Uplata(){
        delete [] ime;
        --count;
    }
    int getCount(){
        return count;
    }
};
int Uplata::count=0;

int main()
{
    mmid stedaci;
    Uplata *stedac;
    int izbor=0;
    while(izbor!=3){
        cout<<"(1)Dodaj uplata."<<endl;
        cout<<"(2)Prikazi uplata za daden stedac."<<endl;
        cout<<"(3)Kraj."<<endl;
        cin>>izbor;
        switch(izbor){
        case 1:{
            char *ime;
            int uplata;
            cout<<"Vnesete stedac i uplata"<<endl;
            cin>>ime>>uplata;
            typedef std::pair<char*,int> pom;
            stedaci.insert(pom(ime,uplata));
            Uplata stedac(ime,uplata);
            break;
        }
        case 2:{
            cout<<"Vnesi ime na stedac"<<endl;
            char *ime;
            cin>>ime;
            for (mmid::const_iterator iter = stedaci.begin(); iter != stedaci.end(); ++iter ){
                if(strcmp(iter->first,ime)==0){
                    cout<<iter->first<<" "<<iter->second<<endl;
                }
            }
        }
        case 3:{
            cout<<"Kraj."<<endl;
        }
        default:cout<<"Pogresen broj."<<endl;
        }
    }
    return 0;
}

