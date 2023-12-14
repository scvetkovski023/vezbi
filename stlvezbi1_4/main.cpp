#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;
void printArray(int a[],int count){
    for(int i=0;i<count;i++){
        if(i%4==0){
            cout<<endl;
        }
        cout<<setw(5)<<left<<a[i];
    }
}
template< class T >  //*
void printArray( const T *array, const int count, int lowSubscript, int highSubscript ){
    for ( int i = lowSubscript; i < highSubscript; i++ ){
        cout << array[ i ] << " ";
    }
    cout << endl;
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
    printArray( a, aCount,0,3 );
    cout << "Poleto b sodrzi:" << endl;
    printArray( b, bCount,0,3 );
    cout << "Poleto c sodrzi:" << endl;
    printArray( c, cCount , 0,3);
    printArray(a,aCount);

}
