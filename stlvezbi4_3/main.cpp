#include <set>
#include <vector>
#include <string.h>
#include <iostream>

#include <algorithm>

using namespace std;

int main()

{
    vector<string> pom;
    set<string> zborovi;
    set<string>::iterator itr;
    char vlez[100];
    cin.get(vlez,100);
    char *p;
    p=strtok(vlez," ");
    while(p!=NULL){
        pom.push_back(p);
        p=strtok(NULL," ");
    }
    for(int i=0;i<pom.size();i++){
        zborovi.insert(pom[i]);
    }
    for (itr = zborovi.begin(); itr != zborovi.end(); itr++)
        cout<< *itr<< " " ;
    cout<<endl;

    return 0;
