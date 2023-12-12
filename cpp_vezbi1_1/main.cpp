#include <iostream>
using namespace std;
#define pi 3.14
inline double circleArea(int r){
    return pi*r*r;
}


int main(){
    int r;
    cout<<"Vnesi go radiusot na krugot:"<<endl;
    cin>>r;
    cout<<"Povrsinata na krugot e "<<circleArea(r)<<endl;
    return 0;
}
