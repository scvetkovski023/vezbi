#include <stdio.h>

int nzd(int x,int y);

int main() {
    int br1,br2;
    printf("Vnesi broevi:\n");
    scanf("%d %d",&br1,&br2);
    printf("Nzd na broevite e %d",nzd(br1,br2));
    return 0;
}

int nzd(int x,int y){
    int nzs;
    for(int i=1;i<x*y;i++){
        if(x>y){
            if((x*i)%y==0){
                nzs=x*i;
                break;
            }
        }
        else{
            if((y*i)%x==0){
                nzs=y*i;
                break;
            }
        }
    }
    return (x*y)/nzs;
}
