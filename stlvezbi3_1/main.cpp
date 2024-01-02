#include <iostream>
using namespace std;

template <class T>
class Zapis{
private:
    T x,y,z;
public:
    Zapis(T x1,T y1,T z1){
        x=x1;
        y=y1;
        z=z1;
    }
    T suma(){
        return x+y+z;
    }

};
template <class T>
bool kontrolor( Zapis<T> a){
    if(a.suma()>1000)
        return true;
    else
        return false;
}
int main()
{
    Zapis<int> a=Zapis<int>(2,3,4);
    Zapis<double> b=Zapis<double>(2.5,3.6,4.7);
    if(kontrolor(a)==1){
        cout<<"Sumata nadminuva 1000."<<endl;
    }
    else{
        cout<<"Sumata ne nadminuva 1000."<<endl;
    }
    if(kontrolor(b)==1){
        cout<<"Sumata nadminuva 1000."<<endl;
    }
    else{
        cout<<"Sumata ne nadminuva 1000."<<endl;
    }

    return 0;
}
