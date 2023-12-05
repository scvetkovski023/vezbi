//1.
// Ako prviot string e pomal od vtoriot togas ima rizik od prezapishuvanje na memorija ( overwriting)

//2.
// Bidejki vtoriot argument ne smee da se menuva i na ovaj nachin e vo “read-only” mod
Proekt 2.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
    /* prototipovi */
    void meshaj( int wDeck[][ 13 ] );
void deli( const int wDeck[][ 13 ], char *wFace[], char *wSuit[] );

/* inicijaliziraj ja nizata na boi */
char *boja[ 4 ] = { "Srce", "Karo", "List", "Detelina" };

/* inicijaliziraj ja nizata na brojki */
char *brojka[ 13 ] =
    { "As", "Dva", "Tri", "Chetiri",
     "Pet", "Shest", "Sedum", "Osum",
     "Devet", "Deset", "Dzandar", "Dama", "Pop" };
int main()
{
    /* inicijaliziraj niza na spil */
    int spil[ 4 ][ 13 ] = { 0 };

    srand( time( 0 ) ); /* generator na sluchajni broevi */

    meshaj( spil );
    deli( spil, brojka, boja );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* meshaj gi kartite vo shpilot */
void meshaj( int wDeck[][ 13 ] )
{
    int row;    /* broj na red */
    int column; /* broj na kolona */
    int card;   /* brojach */

    /* za sekoja od 52-te karti,
   odberi sluchajno mesto vo shpilot */
    for ( card = 1; card <= 52; card++ ) {

        /* biraj nova sluchajna lokacija dodeka ne najdesh
      slobodno mesto */
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while( wDeck[ row ][ column ] != 0 ); /* kraj do...while */

        /* pojtavi ja kartata na izbranoto mesto vo spilot */
        wDeck[ row ][ column ] = card;
    } /* kraj for */
} /* kraj na funkcijata meshaj */

/* deli gi kartite vo shpilot */
void deli( const int wDeck[][13], char *wFace[],char *wSuit[] )
{
    int card;   /* brojach na karti */
    int row;    /* brojach na redovi */
    int column; /* brojach na koloni */

    int count=0;
    char *dbrojka[5];
    char *dboja[5];
    /* podeli ja sekoja od 52-te karti */
    for ( card = 1; card <= 5; card++ ) {
        /* pomini niz redovite na wDeck */
        for ( row = 0; row <= 3; row++ ) {
            /* pomini niz kolonite na wDeck za tekovniot red */
            for ( column = 0; column <= 12; column++ ) {
                /* ako mestoto ja sodrzhi tekovnata karta, prikazhi ja kartata */
                if ( wDeck[ row ][ column ] == card ) {
                    printf( "%s %s\n", wFace[ column ], wSuit[ row ]);
                    dbrojka[count]=wFace[column];
                    dboja[count]=wSuit[row];
                    count++;
                } /* kraj if */
            } /* kraj for */
        } /* kraj for */
    } /* kraj for */
    int i,j;
    int flag=0;
    int counter=1;
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(dbrojka[i],dbrojka[j])==0){
                ++counter;
            }
        }
        if(counter==4){
            printf("Imate 4 isti.\n");
        }
        else if(counter==2 && flag==0){
            printf("Imate par.\n");
            flag=1;

        }
        else if(counter ==2 && flag==1){
            printf("Imate uste eden par.\n");
        }
        else if(counter==3){
            printf("Imate 3 isti.\n");
        }
        counter=1;
    }
    counter=1;
    for(i=1;i<5;i++){
        if(strcmp(dboja[0],dboja[i])==0)
            counter++;
    }
    int min=13;
    if(counter==5){
        for(i=0;i<5;i++){
            for(j=1;j<13;j++){ // bez As barame vo slucaj na A K Q J 10
                if(strcmp(dbrojka[i],brojka[j])==0){
                    if(min>j){
                        min=j;
                    }
                }
            }
        }
        flag=1;
        if(min==9){ // ako e najmal 9 proverka za A K Q J 10
            for(i=0;i<5;i++){
                for(j=min+1;j<13;j++)
                    if(strcmp(dbrojka[i],brojka[j])==0)
                        flag++;
            }
            for(i=0;i<5;i++) // proveruva za As
                if(strcmp(dbrojka[i],brojka[0])==0)
                    flag++;
            if(flag==5) // ako flag e 5 togas ima kenta
                printf("Imate kenta");
        }
        for(i=0;i<5;i++){ // proveruva za drugite ( ne A K Q J 10)
            for(j=min+1;j<min+5;j++)
                if(strcmp(dbrojka[i],brojka[j])==0)
                    flag++;
        }
        if(flag==5)
            printf("Imate kenta.\n");
        else
            printf("Imate boja\n");
    }
}
