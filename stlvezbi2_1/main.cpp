#include <iostream>

using namespace std;

template <class T>
T suma(T* pole,T start,T end,T vrednost,T init=T()){
    init=vrednost;
    while(start != end){
        init+=pole[start];
        start++;
    }
    return init;
}
int main()
{
    int array[]={1,2,3,4,5};


    cout<<suma(array,1,3,2);

    return 0;
}
