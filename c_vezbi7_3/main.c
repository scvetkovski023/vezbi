#include <stdio.h>

int obraten(int x);

int main() {
    int broj;
    printf("Vnesi broj:\n");
    scanf("%d",&broj);
    printf("Brojot napisan obratno e %d",obraten(broj));
    return 0;
}

int obraten(int x){
    int rez=0;
    while(x!=0){
        rez=rez*10;
        rez=rez+x%10;
        x=x/10;
    }
    return rez;
}
