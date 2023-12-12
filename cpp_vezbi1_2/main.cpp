#include <iostream>

using namespace std;
int tripleCallByValue(int);
void tripleCallByReference(int &);
int main()
{
    int count;
    cout<<"Vnesi go count:"<<endl;
    cin>>count;
    cout<<"count/call by value/count"<<endl;
    cout<<count<<" "<<tripleCallByValue(count)<<" "<<count<<endl;
    cout<<count<<" pred call by reference "<<endl;
    tripleCallByReference(count);
    cout<<count<<" posle call by reference";
    return 0;
}
int tripleCallByValue(int value){
    return value*3;
}
void tripleCallByReference(int &ref){
    ref= ref*3;
}
