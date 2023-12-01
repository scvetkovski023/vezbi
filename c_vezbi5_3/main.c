#include <stdio.h>
#include <math.h>

/* zapochnuva izvrshuvanjeto na programot */
int main()
{
    int i,j,k;
    for(i=3;i<=100;i++){    /* se zapocnuva od i=3,j=4,k=5 bidejki toa se najmalite Pitagorini broevi */
        for(j=4;j<=100;j++){
            for(k=5;k<=100;k++)
                if(i*i+j*j == k*k)
                    printf("%d %d %d se Pitagorini broevi\n",i,j,k);
        }
    }
    return 0;
}
