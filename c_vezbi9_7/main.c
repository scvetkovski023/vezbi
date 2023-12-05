#include <stdio.h>
#include <math.h>
int sprotiven(int n); // prototip

//pocnuva main
int main(){
    int n1,n2;
    printf("Vnesi gi broevite na intervalot:\n");
    scanf("%d %d",&n1,&n2);
    if(n1>0 && n2>0){
        for(int i=n1;i<n2+1;i++){
            if(i%sprotiven(i)==0)
                printf("%d\t",i);
        }
    }
    else{
        printf("Ne vnesovte prirodni broevi\n");
    }
    return 0;
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
