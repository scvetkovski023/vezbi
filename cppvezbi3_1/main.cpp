#include <iostream>

using namespace std;
class Kvadar{
private:
    int height;
    int width;
    int length;
public:
    int ploshtina(){
        return length*width;
    }
    int volumen(){
        return length*width*height;
    }
    void set(int x,int y,int z){
        length=x; width=y; height=z;
    }
    int getLength(){
        return length;
    }
    int getWidth(){
        return width;
    }
    int getHeight(){
        return height;
    }
    void pechati(){
        cout<<"Length:"<<length<<" width: "<<width<<" height: "<<height;
        cout<<"Ploshtina: "<<ploshtina()<<" Volumen: "<<volumen()<<endl;
    }
};



int main()
{
    Kvadar pole[10];
    int izbor=0;
    int x,y,z,i;
    int o,counter=0;
    while(izbor!=6){
    cout<<"(1)Kreiraj nov objekt."<<endl<<"(2)Postavi gi dimenziite."<<endl;
    cout<<"(3)Pechati gi dimenziite na site objekti."<<endl<<"(4)Pechati gi dimenziite na poedin objekt."<<endl;
    cout<<"(5)Pechati gi onie koi go zadovoluvaat uslovot."<<endl<<"(6)Kraj."<<endl;
    cin>>izbor;
    switch(izbor){
    case 1:{
        Kvadar nov;
        nov.set(1,1,1);
        pole[counter]=nov;
        counter++;
        break;
    }
    case 2:{
        cout<<"Vnesi x,y,z:"<<endl;
        cin>>x>>y>>z;
        pole[counter-1].set(x,y,z);
        break;
    }
    case 3:{
        for(i=0;i<counter;i++){
            pole[i].pechati();
        }
        break;
    }
    case 4:{
        cout<<"Koj objekt da se ispecati:"<<endl;
        cin>>o;
        if(o>counter){
            cout<<"Pogresen objekt"<<endl;
            break;
        }
        for(i=0;i<counter;i++){
            if(i==o)
                pole[i].pechati();
        }
        break;
    }
    case 5:{
        int min=pole[i].ploshtina();
        for(i=0;i<counter;i++){
            if(pole[i].getLength()!=pole[i].getHeight() && pole[i].getLength()!=pole[i].getWidth())
                pole[i].pechati();
            if(min>pole[i].ploshtina())
                min=pole[i].ploshtina();
        }
        for(i=0;i<counter;i++){
            if(min==pole[i].ploshtina()){
                cout<<"Kvadar so najmala ploshtina e: "<<endl;
                pole[i].pechati();
            }
        }
        break;
    }
    case 6:
        cout<<"Kraj.";
        break;
    default: cout<<"Pogresna vrednost."<<endl;
    }
    }
    return 0;
}
