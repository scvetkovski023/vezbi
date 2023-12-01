#include <stdio.h>

/* pochnuva izvrshuvanjeto na prоgramot */
int main()
{
    int suma=0;
    int broj;
    char flag;
    while( flag != 'n'){
        printf("Vnesi broj:\n");
        scanf(" %d",&broj);
        suma+=broj;
        printf("Ushte?(d/n)\n");
        scanf(" %c",&flag);
    }
    printf("Sumata e %d",suma);
    return 0;
}
