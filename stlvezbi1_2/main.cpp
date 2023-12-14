#include <iostream>

using std::cout;
using std::endl;
int printArray(int count,int lowSubscript, int highSubscript){
    if(lowSubscript>0 && highSubscript<count){
        return 0;
    }
    else{
        return highSubscript-lowSubscript;
    }
}
template< class T >  //*
void printArray( const T *array, const int count, int lowSubscript, int highSubscript ){
    if(printArray(count,lowSubscript,highSubscript)!=0){
        for ( int i = lowSubscript; i < highSubscript; i++ ){
            cout << array[ i ] << " ";
        }
        cout << endl;
    }
}
int main()

{
    const int aCount = 5;
    const int bCount = 7;
    const int cCount = 6;
    int a[ aCount ] = { 1, 2, 3, 4, 5 };
    double b[ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
    char c[ cCount ] = "HELLO";
    cout << "Poleto a sodrzi:" << endl;
    printArray( a, aCount,0,3 ); cout<<printArray(aCount,0,3) << endl;
    cout << "Poleto b sodrzi:" << endl;
    printArray( b, bCount,0,3 );cout<<printArray(bCount,0,3) << endl;
    cout << "Poleto c sodrzi:" << endl;
    printArray( c, cCount , 0,3);cout<<printArray(cCount,0,3) << endl;

}
// 3 zadaci kodot ne kompajlira bidejki ocekuva float a dobiva int, a potoa obratno
