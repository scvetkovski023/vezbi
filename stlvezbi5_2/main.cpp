#include<iostream>
#include<list>
#include<string.h>
#include<algorithm>
#include<string>
#include <set>
using namespace std;
int main(){

    list <string> lista1;
    list <string> lista2;
    list <string> lista3;
    set <string> email;
    set<string>::iterator itr;
    list <string> rezultat;
    lista1.push_back("stc@hotmail.com");
    lista1.push_back("qqq@hotmail.com");
    lista2.push_back("stc@hotmail.com");
    lista2.push_back("ww");
    lista3.push_back("wwr@hotmail.com");
    while(!lista1.empty()){
        string pom=lista1.back();
        lista1.pop_back();
        email.insert(pom);
    }
    while(!lista2.empty()){
        string pom=lista2.back();
        lista2.pop_back();
        email.insert(pom);
    }
    while(!lista3.empty()){
        string pom=lista3.back();
        lista3.pop_back();
        email.insert(pom);
    }
    for (itr = email.begin(); itr != email.end(); itr++)
        rezultat.push_back(*itr);
    while(!rezultat.empty()){
        cout<<rezultat.back()<<endl;
        rezultat.pop_back();
    }
    return 0;
}
