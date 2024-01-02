#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
bool palindrom(vector<T> v);
int main()
{
    vector<int> brojki;
    brojki.push_back(2);
    brojki.push_back(1);
    brojki.push_back(5);
    brojki.push_back(1);
    brojki.push_back(2);
    cout<<"1 e palindrom,0 ne e: "<<palindrom(brojki);

    return 0;
}
template <class T>
bool palindrom(vector<T> v){
    int length=v.size();
    for(int i=0;i<length/2;i++){
        if(v[i]!=v[length-1-i])
            return false;
    }
    return true;
}
