#include <vector>
#include <string.h>
#include <iostream>

#include <algorithm>

using namespace std;



class Imenik{
private:
    char *ime;
    char *tel_broj;
    int static count;
public:
    Imenik(char *i,char *t){
        ime=new char[strlen(i+1)];
        strcpy(ime,i);
        tel_broj=new char[strlen(t+1)];
        strcpy(tel_broj,t);
        ++count;
    }
    ~Imenik(){
        delete [] ime;
        delete [] tel_broj;
        --count;
    }
    void print(){
        cout<<"Ime: "<<ime<<endl;
        cout<<"Tel. broj: "<<tel_broj<<endl;
    }
};
int Imenik::count=0;

bool comp( char* i1, char* i2);
int main( )

{
    vector <Imenik*> kniga;

    Imenik *pom= new Imenik("Stefan","070955220");
    Imenik *temp= new Imenik("Ana","070222555");
    kniga.push_back(pom);
    kniga.push_back(temp);

    sort(kniga.begin(),kniga.end());
    reverse(kniga.begin(),kniga.end());
    for(int i=0;i<kniga.size();i++){
        kniga[i]->print();
    }
    delete [] pom; delete [] temp;
    delete kniga[0]; delete kniga[1];
    return 0;

}
