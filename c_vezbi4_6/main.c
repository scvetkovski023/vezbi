#include <stdio.h>

/* pochnuva izvrshuvanjeto na prоgramot */
int main()
{
    int suma=0;
    int broj;
    printf("Vnesuvaj broevi, za kraj vnesi -1\n");
    while ( 1 > 0){
        scanf("%d",&broj);
        if( broj == -1)
            break;
        suma+=broj;
    }
    printf("Sumata e %d",suma);
    return 0;
}
