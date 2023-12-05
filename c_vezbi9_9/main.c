#include <stdio.h>
#include <math.h>

//pocnuva main
int main(){
    int i,j,k; // minuti
    int x;
    float n;
    int counter; // brojac za minuti

    printf("Vnesi i,j,k,n,x\n");
    scanf("%d %d %d %f %d",&i,&j,&k,&n,&x);
    float final=n;
    for(counter=0;counter<=k;counter++){
        if(counter%i==0 && counter%j != 0)
            final+=final; // se duplira
        if(counter%i != 0 && counter%j==0)
            final=final*(1.0-(x/100.0));
        if(counter%i==0 && counter%j==0)
            final+=final;
        final=final*(1.0-(x/100.0));
    }
    printf("%f",final);
    return 0;
}
