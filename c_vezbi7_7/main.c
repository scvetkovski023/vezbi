#include <stdio.h>

int dzvezdi( int n ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
    int br;

    printf( "Vnesi broj na dzvezdi (n):\n " );
    scanf( "%d", &br );
    dzvezdi(br);
    return 0;
}


int dzvezdi ( int n )
{
    if(n==0){
        return 0;
    }
    else{
        for(int i=0;i<n;i++)
            printf("*");
        printf("\n");
    }
    return dzvezdi(n-1);
}
