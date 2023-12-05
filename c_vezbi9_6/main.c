#include <stdio.h>
#include <math.h>
int najdi_broj(int n); // prototip

//pocnuva main
int main(){
    int n;

    printf("Vnesi priroden broj:\n");
    scanf("%d",&n);
    if(n<0)
        printf("Ne vnesovte priroden broj.\n");
    else{
        for(int i=1;i<n;i++){ // gi pominuva site broevi do n
            if(najdi_broj(i)==1){ //ako go ispolnuva uslovot go pecati
                printf("%d \n",i);
            }
        }
    }

    return 0;
}
// funkcija za da se najdi brojot koj go ispolnuva uslovot
int najdi_broj(int n){
    int cifra;
    int suma=0;
    int pom=n;
    while(n!=0){
        cifra=n%10;
        n=n/10;
        suma=suma+pow(cifra,3);
    }
    if(suma==pom) // ako ispolnuva vrakja 1 inace 0
        return 1;
    else
        return 0;

}
