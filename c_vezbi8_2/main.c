#include <stdio.h>

int prosti(int a); // prototip

int main(){

    int i,counter=0,n;
    int krajna[10];
    printf("Vnesi kolku broevi ke vnesuvate(n):\n");
    scanf("%d",&n);
    int niza[n];
    // inicijalizira na 1 cela niza
    for(int i=0;i<=n;i++){ // <=n se proveruva i n dali e prost
        niza[i]=1;
    }
    // gi setira na 0 prostite indeksi
    for (i=0; i<=n;i++)
        niza[i]=prosti(i);
    // gi stava vo niza krajna indeksite koi se prosti
    for(i=2;i<=n;i++){
        if(niza[i]==0){
            krajna[counter]=i;
            counter++;
        }
    }
    //printame
    for(i=0;i<counter;i++)
        printf("%d\t",krajna[i]);
    return 0;
}

int prosti(int a){
    int flag=0; // flag=0 za prosti broevi
    for(int i=2; i<=a/2;i++){ // do a/2 bidejki najgolem delitel e
        if(a%i==0)
            flag=1;
    }
    if(flag==0)
        return 0;
    else
        return 1;
}
