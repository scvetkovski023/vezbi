#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int size1=0,size2=0;
    do{
    try{
        int size1=rand()%999+1;  // dava random
        int size2=rand()%999+1; // dava random
        if(size1>=size2){       // ako e pogolem ili ednakov vektorot kopira
            for(int i=0;i<size2;i++){
                v2.push_back(i+1);  // dodava elementi vo vektorot
            }
            copy(v2.begin(),v2.begin()+size2,v1.begin());   // go kopira
        }
        else{
            throw(v1);
        }
    }
    catch(vector<int> v){
        cout<<"Goleminata e pomala i ne mozi da se iskopira"<<endl;
    }
    }
    while(size1<size2);

    return 0;
}
