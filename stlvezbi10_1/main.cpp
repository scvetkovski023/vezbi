#include <iostream>

using namespace std;

class Primer{
private:
    int number;
public:
    Primer(int n=0):number(n){
        cout<<"Kreiran objekt so vrednost "<<number<<endl;
    }
    ~Primer(){
        cout<<"Izbrisan objekt"<<endl;
    }
    void setNumber(int n){
        number=n;
    }
    void print(){
        cout<<number<<endl;
    }
};
int main()
{
    Primer *p1 = new Primer(5);
    Primer *p2 = p1;
    p2->setNumber(4); p2->print();
    // bez delete ne se brisi objektot
    return 0;
}
