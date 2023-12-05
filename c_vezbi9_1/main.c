#include <stdio.h>

int ploshtina(int n, int L, int r); // prototip
int obikolka(int n,int L); // prototip

// start na main
int main(){
    int n,L,r;
    printf("Vnesi broj na strani,dolzina na strana i radius na vcrtaniot krug:\n");
    scanf("%d %d %d",&n,&L,&r);
    ploshtina(n,L,r);
    obikolka(n,L);
}

int ploshtina(int n, int L, int r){
    printf("Ploshtinata e %d\n",(n/2)*L*r);
}
int obikolka(int n,int L){
    printf("Obikolkata e %d",n*L);
}

