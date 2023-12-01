#include <stdio.h>

int vreme(int x,int y,int z);

int main() {
    int cas,min,sec;
    printf("Vnesi go vremeto:\n");
    scanf("%d %d %d",&cas,&min,&sec);
    printf("Ima uste %d sekundi do 12 casot",vreme(cas,min,sec));
    return 0;
}

int vreme(int x,int y,int z){
    int pom = 43200; /* 12h = 43200 sec */
    int vreme_vo_sec=60*60*x+60*y+z; /*vremeto vneseno vo sec */
    return pom-vreme_vo_sec; /* kraen rezultat */
}
