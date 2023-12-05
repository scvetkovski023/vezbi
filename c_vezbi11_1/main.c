#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* prototipovi */
int main(){
    char vlez[14]="(123)456-7890";
    //printf("Vnesi go brojot.\n");
    //scanf("%s",vlez);
    int drzava=0;
    char *token=strtok(vlez,")");
    int digit[3];
    int digit2[4];
    int i;
    long int broj=0;
    for(i=1;i<4;i++){
        digit[i-1]=token[i]-'0';
    }
    for(i=0;i<3;i++)
        drzava=drzava*10+digit[i];
    printf("%d - drzava\n",drzava);
    token=strtok(NULL,"-");
    //printf("%s ",token);
    for(i=0;i<3;i++){
        digit[i]=token[i]-'0';
        broj=broj*10+digit[i];
    }
    token=strtok(NULL,"\0");
    for(i=0;i<4;i++){
        digit2[i]=token[i]-'0';
        broj=broj*10+digit2[i];
    }
    printf("%ld - broj",broj);
    return 0;
}
