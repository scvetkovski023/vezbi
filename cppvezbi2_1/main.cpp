#include <iostream>

using namespace std;

template < typename T >
T minimum ( T value1, T value2 ){
    if(value1<value2)
        return value1;
    else
        return value2;
}
int main()
{
    cout<<"Rezultat od integer: "<<minimum(1,2)<<endl;
    cout<<"Rezultat od float: "<<minimum(2.0,3.0)<<endl;
    cout<<"Rezultat od char: "<<minimum('b','c')<<endl;

    return 0;
}
