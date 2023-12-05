#include <stdio.h>
#include <math.h>
int uslov(long int n);
int cifra(long int n);
void selekcija(int a[]);
int tocna[] = {0,1,2,3,4,5,6,7,8,9};
int main()
{
    int count=1;
    int cifri[10];
    int br_cifri=0;
    long int max=2;
    while(max<pow(10,10)){
        max=(count*count)+(count*count*count); // kvadrat + kub
        if(cifra(max)==10){     //ako ima 10 cifri
            if(uslov(max)==1){ // ako uslovot e 1
                printf("%d",count);
            }
        }
        count++;
    }
    return 0;
}

int cifra(long int n){
    int cifri=0;
    while(n!=0){
        n=n/10;
        cifri++;
    }
    return cifri;
}
int uslov(long int n){
    int cifri[10];
    int i=0,flag=1;
    while(n!=0){
        cifri[i]=n%10;
        n=n/10;
        i++;
    }
    selekcija(cifri); // cifrite gi podredvame pr 4561230789 vo 0123456789
    for(i=0;i<10;i++){
        if(cifri[i]!=tocna[i])
            flag=0;             // ako ja nema sekoja cifra po ednas flag e 0
    }
    return flag; // flag e 1 ako e ispolnet uslovot
}
void selekcija(int a[]){
    int min;
    int pom;
    for(int i=0;i<9;i++){
        min=a[i];
        for(int j=i+1;j<10;j++){
            if(min>a[j]){
                pom=a[i];
                a[i]=a[j];
                a[j]=pom;
            }
        }
    }
}
