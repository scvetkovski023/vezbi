#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* prototipovi */
void print(char *datum);

char *meseci[12]={"januari","fevruari","mart","april","maj","juni","juli","avgust","septemvri","oktomvri","noemvri","dekemvri"};
#define max 11
int main(){
    //14/06/2005
    char vlez[max]="00/00/0000";
    while(strcmp(vlez,"end")!=0){
        printf("Vnesi datum(end za kraj):\n");
        gets(vlez);
        print(vlez);

    }
    return 0;
}
void print(char *datum){
    char *token=strtok(datum,"/");
    char *pom=token;
    token=strtok(NULL,"/");
    int mesec=atoi(token);
    if(mesec>12)
        printf("Vnesovte pogresen mesec\n");
    else{
        printf("%s ",pom);
        printf("%s ",meseci[mesec-1]);
        token=strtok(NULL,"\0");
        printf("%s\n",token);
    }

}
