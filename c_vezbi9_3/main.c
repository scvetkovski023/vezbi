#include <stdio.h>

int sprotiven(int n); //prototip

//start na main
int main(){
    int broj;
    printf("Vnesi priroden broj:\n");
    scanf("%d",&broj);
    if(broj<0)
        printf("Ne vnesovte priroden broj\n");
    else{
        printf("%d",sprotiven(broj));
    }
    return 0;
    // kraj na main
}
// fukncija za sprotiven
int sprotiven(int n){
    int rez=0;
    while(n!=0){
        int pom=n%10;
        rez=rez*10+pom;
        n=n/10;
    }
    return rez;
}

