#include <iostream>
#include <iomanip>
using namespace std;

class Complex {
public:
    Complex( double = 0.0, double = 0.0 );       // konstruktor
    Complex operator+( const Complex & ) const;  // sobiranje
    Complex operator-( const Complex & ) const;  // odzemanje
    const Complex &operator=( const Complex & ); // dodeluvanje
    friend ostream &operator<<(ostream&, const Complex &);
    friend istream &operator>>(istream&, Complex &);
    Complex operator*(const Complex &);
    Complex operator*(double num);
    bool operator==(const Complex &);
    bool operator!=(const Complex &);
    Complex operator+=(const Complex &);
    Complex operator-=(const Complex &);
    Complex operator*=(const Complex &);
private:
    double real;       // realen del
    double imaginary;  // imaginaren del
};
istream &operator>>(istream &input, Complex &num){
    input>>setw(2) >> num.real;
    input.ignore(3);
    input>>setw(2)>>num.imaginary;
    input.ignore(2);
    return input;
}
ostream &operator<<(ostream &output,const Complex &num){
    output << num.real <<"+ ("<<num.imaginary<<") *i"<<endl;
    return output;
}
Complex Complex::operator+=(const Complex &o2){
    real+=o2.real;
    imaginary+=o2.imaginary;
    return Complex(real,imaginary);
}
Complex Complex::operator-=(const Complex &o2){
    real-=o2.real;
    imaginary-=o2.imaginary;
    return Complex(real,imaginary);
}
Complex Complex::operator*=(const Complex &o2){
    real*=o2.real;
    imaginary*=o2.imaginary;
    return Complex(real,imaginary);
}
// Konstruktor
Complex::Complex( double r, double i )
    : real( r ), imaginary( i ) { }
// ==
bool Complex::operator==(const Complex &o2){
    if(real == o2.real && imaginary == o2.imaginary)
        return true;
    else
        return false;
}
bool Complex::operator!=(const Complex &o2){
    if(real!= o2.real && imaginary != o2.imaginary)
        return true;
    else
        return false;
}
// Mnozenje
Complex Complex::operator*(const Complex &o2){
    double realen = real*o2.real - imaginary*o2.imaginary;
    double imaginaren = real*o2.imaginary + imaginary*o2.real;
    return Complex(realen,imaginaren);
}
Complex Complex::operator*(double num){
    return Complex(real*num,imaginary*num);
}
// Preklopi operator za sobiranje
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real,
                   imaginary + operand2.imaginary );
} // kraj na funkcijata operator+

// Preklopi operator za odzemanje
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,
                   imaginary - operand2.imaginary );
} // kraj na funkcijata operator-

// Preklopi operator =
const Complex& Complex::operator=( const Complex &right )
{
    real = right.real;
    imaginary = right.imaginary;
    return *this;   // ovozmozhuva kaskadiranje
} // ekraj na funkcijata operator=

int main()
{
    // napraveno da se vnesuva primer +1 + -3*i
    Complex x,y,z;
    cout<<"Vnesi prv broj:"<<endl;
    cin>>x;
    cout<<"Vnesi vtor broj:"<<endl;
    cin>>y;
    cout<<"Sobiranje na dva kompleksni."<<endl;
    z=x+y;
    cout<<z;
    cout<<"Mnozenje na dva kompleksni."<<endl;
    z=x*y;
    cout<<z;
    cout<<"Mnozenje na kompleksen so cel broj,"<<endl;
    z=x*2;
    cout<<z;
    cout<<"+= operator, pa -= i *="<<endl;
    x+=y;
    cout<<x;
    x-=y;
    cout<<x;
    x*=y;
    cout<<x;
    z=x-y;
    cout<<z;
    return 0;
}
