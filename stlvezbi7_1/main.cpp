#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

bool neparen(int n);
bool pomalo_2k(int n);
bool megju2_4(int n);
bool megju4_6(int n);
bool megju6_8(int n);
bool megju8_10(int n);
int main(){
    const int SIZE = 10000;
    int niza[SIZE];

    for(int i=0;i<SIZE;i++){
        int random= rand()%10000;
        niza[i]=random;
    }
    for(int i=0;i<SIZE;i++){
        cout<< niza[i]<<" ";
    }
    cout<<endl;
    // parni
    int parni[SIZE]; int count_p=0;
    int *end=remove_copy_if(niza,niza+SIZE,parni,neparen);
    int* begin = parni;
    while(begin != end){
        *begin++;
        count_p++;
    }
    cout<<"Broj na parni elementi:"<<count_p<<endl;

    // pomali od 2000
    int pomali2k[SIZE]; int count_2k=0;
    end=remove_copy_if(niza,niza+SIZE,pomali2k,pomalo_2k);
    begin=pomali2k;
    while(begin!=end){
        *begin++;
        count_2k++;
    }
    cout<<"Broj na elementi pomali od 2000:"<<count_2k<<endl;

    // interval 2000-4000
    int i2_4[SIZE]; int count2_4=0;
    end=remove_copy_if(niza,niza+SIZE,i2_4,megju2_4);
    begin=i2_4;
    while(begin!=end){
        *begin++;
        count2_4++;
    }
    cout<<"Broj na elementi megju 2000-4000:"<<count2_4<<endl;
    // interval 4000-6000
    int i4_6[SIZE]; int count4_6=0;
    end=remove_copy_if(niza,niza+SIZE,i4_6,megju4_6);
    begin=i4_6;
    while(begin!=end){
        *begin++;
        count4_6++;
    }
    cout<<"Broj na elementi megju 4000-6000:"<<count4_6<<endl;
    // interval 6000-8000
    int i6_8[SIZE]; int count6_8=0;
    end=remove_copy_if(niza,niza+SIZE,i6_8,megju6_8);
    begin=i6_8;
    while(begin!=end){
        *begin++;
        count6_8++;
    }
    cout<<"Broj na elementi megju 6000-8000:"<<count6_8<<endl;
    // interval 8000-10000
    int i8_10[SIZE]; int count8_10=0;
    end=remove_copy_if(niza,niza+SIZE,i8_10,megju8_10);
    begin=i8_10;
    while(begin!=end){
        *begin++;
        count8_10++;
    }
    cout<<"Broj na elementi megju 8000-10000:"<<count8_10<<endl;
    // sredna vrednost
    float suma=0.0;
    for(int i=0;i<SIZE;i++){
        suma+=niza[i];
    }
    cout<<"Srednata vrednost e:"<<(suma/SIZE)<<endl;
    return 0;
}

bool neparen(int n){
    if(n%2!=0)
        return true;
    else
        return false;
}
bool pomalo_2k(int n){
    if(n<2000)
        return false;
    else
        return true;
}
bool megju2_4(int n){
    if(n>=2000 && n<4000)
        return false;
    else
        return true;
}
bool megju4_6(int n){
    if(n>=4000 && n<6000)
        return false;
    else
        return true;
}
bool megju6_8(int n){
    if(n>=6000 && n<8000)
        return false;
    else
        return true;
}
bool megju8_10(int n){
    if(n>=8000 && n<10000)
        return false;
    else
        return true;
}
