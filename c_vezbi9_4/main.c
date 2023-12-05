#include <stdio.h>

int sovrshen(int n); //prototip

//start na main
int main(){
    int broj,i;
    printf("Vnesi priroden broj do koj ke barame sovrseni broevi:\n");
    scanf("%d",&broj);
    int rezultat[broj];
    int counter=0;
    if(broj<0)
        printf("Ne vnesovte priroden broj\n");
    else{
        for( i=1;i<broj;i++){
            if(sovrshen(i))
                printf("%d ",i);
        }
    }
    return 0;
    // kraj na main
}
// fukncija za sovrshen
int sovrshen(int n){
    int suma=0;
    for(int i=1;i<n;i++)
        if(n%i==0)
            suma+=i;
    if(suma==n)
        return 1;
    else
        return 0;
}
