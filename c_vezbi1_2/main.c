#include <stdio.h>
//1.
//a) scanf(“%d”,&vrednost);
//b) printf(" Proizvodot na %d i %d e %d\n",x,y,sum);
//c) prvBroj + vtorBroj = sumaBroevi;
//d) /* Programata naogja maksimum od dva broja */
//e) scanf(“%d”,&nekojBroj);

// 2.
int main()
{
    int br1,br2,br3,br4;
    int sum=0;
    printf( "Vnesi 4 broja\n" );
    scanf( "%d %d %d %d",&br1,&br2,&br3,&br4 );
    sum=br1 + br2 + br3 + br4;
    printf(" Sumata e %d",sum);
    return 0;
}
