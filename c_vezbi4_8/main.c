#include <stdio.h>

/* pochnuva izvrshuvanjeto na prоgramot */
int main()
{
    int i; /* counter za for */
int br_p; /* broj na proizvod */
int kolicina; /* vnesena kolicina */
float suma[5]; /* prodadeni proizvodi posebno cena */
int total; /* prodadeni proizvodi vkupno cena */

/* napraveno e da se vnesuva par po par, dali treba da se smeni? */
while( br_p != -1){
    printf("Vnesi broj na proizvod i kolicina prodadena:(-1 kaj proizvod za kraj)\n");
    scanf("%d %d",&br_p,&kolicina);
    switch(br_p){
    case 1: suma[br_p-1]=kolicina*50.5; break;
    case 2: suma[br_p-1]=kolicina*45.6; break;
    case 3: suma[br_p-1]=kolicina*32.8; break;
    case 4: suma[br_p-1]=kolicina*65.3; break;
    case 5: suma[br_p-1]=kolicina*20.0; break;
    case -1: printf("Vnesuvanjeto na proizvodi zavrsi\n");
    default: printf("Vnesovte pogresen proizvod\n");
    }
}
for(i=1; i<=5;i++){
    printf("Za proizvod %d prodadeno e vkupno %f\n",i,suma[i-1]);
    total+=suma[i-1];
}
printf("Vkupno e prodadeno %d",total);
return 0;
}
