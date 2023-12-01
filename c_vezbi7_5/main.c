#include <stdio.h>

long fibonacci( long n ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
    long result; /* fibonacci-eva vrednost */
    long number; /* broj vnesen od korisnikot */

    /* zemi cel broj od korisnikot */
    printf( "Vnesi cel broj: " );
    scanf( "%ld", &number );

    /* presmetaj fibonacci-eva niza za vneseniot broj */
    result = fibonacci( number );

    /* ispechati rezultat */
    printf( "Fibonacci( %ld ) = %ld\n", number, result );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* Rekurzivna definicija na funkcijata fibonacci */
long fibonacci( long n )
{
    int prv=0,vtor=1,i,result;
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            result = i;
        else
        {
            result = prv + vtor;
            prv = vtor;
            vtor = result;
        }
    }
    return result;
}
