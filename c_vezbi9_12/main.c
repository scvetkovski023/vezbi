#include <stdio.h>
#include <math.h>

//pocnuva main
int main(){
    int n,m,i;

    printf("Vnesi gi stepenite na polinomite n,m:\n");
    scanf("%d %d",&n,&m);
    int polA[n],polB[m];
    printf("Vnesi gi koeficientite:\n");
    for(i=0;i<=n;i++)
        scanf("%d",&polA[i]);
    for(i=0;i<=m;i++)
        scanf("%d",&polB[i]);
    if(n>m){
        int razlika=n-m;
        int polB1[n];
        for(i=0;i<=n;i++) // pomaliot polinom go pravime so golemina od pogolemiot i 0 koef
            polB1[i]=0;
        for(i=0;i<=m;i++)
            polB1[i+razlika]=polB[i]; // koef od B gi dodavame vo B1
        for(i=0;i<n;i++)
            printf("%dx^%d + ",polA[i]+polB1[i],n-i); // sobirame
        printf("%d",polA[n]+polB1[n]);
    }
    else{
        int razlika=m-n;
        int polA1[m];
        for(i=0;i<=m;i++)
            polA1[i]=0;
        for(i=0;i<=n;i++)
            polA1[i+razlika]=polA[i];
        for(i=0;i<m;i++)
            printf("%dx^%d + ",polA1[i]+polB[i],m-i);
        printf("%d",polA1[m]+polB[m]);
    }

    return 0;
}
