#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Array{
public:
    Array( int s= 10){
        size=s>0 ? s : 10;
        top=-1;
        ptr=new T[size];
    }
    ~Array(){
        delete [] ptr;
    }
    bool isEmpty() const{
        return top==-1;
    }
    bool isFull() const{
        return top==size-1;
    }
    bool push( const T &value){
        if(!isFull()){
            ptr[++top]=value;
            return true;
        }
        return false;
    }
    T find( const int position){
        for(int i=0;i<=top;i++)
            if(i==position)
                return *(ptr+i);
        cout<<"Nema takva pozicija.Vrakjam prv element"<<endl;
        return ptr[0];
    }

private:
    int size;
    int top;
    T *ptr;
};
int main()
{
    Array<int> a;
    a.push(2);
    a.push(5);
    a.push(3);
    cout<<"Prva niza(int):"<<endl;
    cout<<a.find(3)<<endl;
    Array<double> b;
    b.push(2.5);
    b.push(3.3);
    b.push(4.1);
    cout<<"Vtora niza(double):"<<endl;
    cout<<b.find(0);
    return 0;
}
