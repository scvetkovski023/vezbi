#include <stdio.h>

/* pochnuva izvrshuvanjeto na programot */
int main()
{
    int number;  /* brojot shto kje mu bide dodaden na sum */

    for ( int sum=0,number = 2; number <= 100;number += 2 ) {
        sum+=number;  /* dodaj broj na sum */
        if(number == 100)
            printf( "Sumata e %d\n", sum );     /* koga ke dojdi do posledniot broj da se ispecati sumata */
    } /* kraj for */
    return 0; /* programot uspeshno zavrshil */

}
