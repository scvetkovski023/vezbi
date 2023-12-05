#include <stdio.h>

int prost(int n); //prototip
//pocetok na main
int main(){
    int n,i;
    ;
    int f_counter=1,counter=0;  //f_counter pocnuva od 1 - mora da ima barem 1 prost za ovaj counter
    printf("Vnesi priroden broj:\n");
    scanf("%d",&n);
    int pom=n;
    int prosti[n/2];
    if(n<0) // ako e ne e priroden izleguva od programata
        printf("Ne vnesovte priroden broj.\n");
    else{
        for(i=2;i<=n/2;i++){
            if(prost(i)){   // barame prosti
                while(pom%i==0){    // delime so najmaliot prost kolku sho mozi potoa so sledniot
                    pom=pom/i;
                    prosti[counter]=i;  // gi smestuvame vo niza pr. za 24 nizata e 2 2 2 3
                    counter++;  // brojac za prosti nizata
                }
            }
        }
        for(i=0;i<counter;i++){
            if(prosti[i]==prosti[i+1]){
                f_counter++;    // ako sledniot prost e ist se zgolema counter
            }
            else{   // ako ne e pecati kolku pati e ist prost broj pojaven pr. 2^3
                printf("%d^%d ",prosti[i],f_counter);
                f_counter=1;    //setira brojac na 1 za sleden prost broj
            }

        }

    }
    return 0; // kraj na main
}

int prost(int n){ // fukncija za dali n e prost broj
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
