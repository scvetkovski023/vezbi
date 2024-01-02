#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
const char* suit[4]={"Srce","Karo","List","Detelina"};
const char* face[13]={"Ace","Dva","Tri","Cetiri","Pet","Shest","Sedum","Osum","Devet","Deset","Dzandar","Dama","Pop"};
void shuffle( int [] [ 13 ]);
void deal( const int [][ 13 ], const char *[], const char *[], int);
int main(){
    int broj;
    int deck[ 4 ][ 13 ] = { 0 };
    cout<<"Vnesi broj na igraci"<<endl;
    cin>>broj;
    srand( time( 0 ) );

    shuffle( deck );
    deal( deck, face, suit,broj);
    return 0;
}
void shuffle( int wDeck[][13] ){
    int row, column, card;
    for ( card = 1; card <= 52; card++){
        do{
            row = rand() % 4;
            column = rand() % 13;
        } while( wDeck [ row ][ column ] != 0 );
        wDeck[ row ][ column ] = card;
    }
}
void deal( const int wDeck[][ 13 ], const char *wFace[], const char *wSuit[],int n){
    int card, row, column;
    const char *space;
    int karti_na_igrac=52/n;
    int count=1,br_igrac=0;
    int suma=0;
    int sumi[n];
    for ( card = 1; card <= n*karti_na_igrac; card++ ){
        if(card%karti_na_igrac==1){
            ++br_igrac;
            cout<<"Igracot so broj "<<br_igrac<<" ima:"<<endl;
        }
        for( row = 0; row <= 3; row++)
            for( column = 0; column <= 12; column++)
                if( wDeck[ row ][ column ] == card ){
                    for(int i=0;i<13;i++){
                        if(strcmp(wFace[column],face[i])==0)
                            if(strcmp(wSuit[row],"Srce")==0){
                                suma+=(i+1)*2;
                            }
                            else
                                suma+=i+1;
                    }
                    count++;
                    cout<<wFace[ column ]<<" "<<wSuit[row ]<<endl;
                }
        if(card%karti_na_igrac==0){
            sumi[br_igrac-1]=suma;
            cout<<"Sumata na kartite e:"<<suma<<endl;
            suma=0;
        }
    }
    int pobedi=1;
    int maksimum=sumi[0];
    for(int i=1;i<n;i++){
        if(maksimum<sumi[i]){
            maksimum=sumi[i];
            pobedi=i+1;
        }

    }
    cout<<"Pobedi igracot "<<pobedi;
    cout<<" so suma od "<<maksimum;
}

