#include <stdio.h>

/* pochnuva izvrshuvanjeto na prоgramot */
int main()
{
    int sum=0;
    int counter=1;
    while ( counter <= 10){
        sum+=counter;
        counter++;
    }
    printf("Sumata e %d",sum);
    return 0;
}
