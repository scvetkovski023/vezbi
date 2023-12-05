#include <stdio.h>
#include <math.h>

//pocnuva main
int main(){
    int i; // counter e za elementi na podnizi
    int niza[7];
    printf("Vnesi niza:\n");
    for(i=0;i<7;i++)
        scanf("%d",&niza[i]);
    int start=niza[0];
    printf("Podnizi se:\n");
    for(i=0;i<7;i++){
        if(start<niza[i+1]){
            printf("%d ",start);
            start=niza[i+1];
        }
        else{
            printf("%d ",start);
            start=niza[i+1];
            printf("\n");
        }
    }
    return 0;
}
// 11 ista kako 10??
