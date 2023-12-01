#include <stdio.h>

int paren( int x);

int main(){
    int x;
    printf("Vnesi 10 broevi\n");
    for(int i=0;i<10;i++){
        scanf("%d",&x);
        printf("%d\n",paren(x));
    }
    return 0;
}

int paren( int x){
    if(x%2==0)
        return 1;
    else
        return 0;
}
