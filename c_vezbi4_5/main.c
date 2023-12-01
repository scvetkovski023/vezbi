#include <stdio.h>

/* pochnuva izvrshuvanjeto na prоgramot */
int main()
{
    int proizvod=1;
    int counter=1;
    int broj;
    printf("Vnesi 10 broevi\n");
    while ( counter <=10){
        scanf("%d",&broj);
        proizvod*=broj;
        counter++;
    }
    printf("Proizvodot e %d",proizvod);
    return 0;
}
