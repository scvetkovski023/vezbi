#include <stdio.h>

int nzd( int x, int y ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
    int br1,br2;

    printf( "Vnesi celi broevi: " );
    scanf( "%d %d", &br1,&br2 );
    int rez = nzd(br1,br2);
    printf( "Nzd na broevite( %d %d ) = %d\n",br1,br2,rez );
    return 0;
}


int nzd ( int x, int y )
{
    if( y != 0)
        return nzd(y,x%y);
    else
        return x;

}
