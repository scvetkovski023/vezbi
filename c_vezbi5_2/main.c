#include <stdio.h>
#include <math.h>

/* zapochnuva izvrshuvanjeto na programot */
int main()
{
    double amount;             /* vrednost na depozitot */
    double principal = 1000.0; /* pochetna suma */
    double rate = .05;         /* godishna kamatna stapka */
    int year;                  /* brojach na godini */

    /* Ispechati zaglavie na tabelata */
    printf( "%4s%25s\n", "Godina", "Vrednost na depozitot" );

    /* presmetaj ja vrednosta na depozitot za sekoja od desette godini */
    for ( year = 1; year <= 10; year++ ) {

        /* presmetaj ja novata vrednost za tekovnata godina */
        amount = principal * pow( 1.0 + rate, year );

        /* ispecati nov red vo tabelata */
        printf( "%4d%13.2f\n", year, amount );   /* za poramnuvanje odlevo namesto 25 se pishuva 13 */
    } /* kraj for */

    return 0; /* programot zavrshil uspeshno */

}
