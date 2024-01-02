#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;


int main()
{
    ifstream inClientFile( "text.dat", ios::in );
    if ( !inClientFile ) {
        cerr << "Datotekata ne moze da se otvori" << endl;
        exit( 1 );
    }

    vector<string> rez;
    string word;
    while ( inClientFile >> word ){         // izminuvame datoteka
        if(word.length()<=10){ // ako dolzinata e pomala ili ednakva so 10 ("/0")
            rez.push_back(word);  // se stava vo vektorot zborot
        }
    }
    inClientFile.close();
    ofstream outFile("rezultat.dat",ios::out);
    for(int i=0;i<rez.size();i++){
        outFile<<rez[i];
    }
    return 0;
}
