#include <stdio.h>

int main(){
    float pi=3.14;
    float ploshtina,perimetar;
    int r;
    printf("Vnesete go radiusot na krugot\n");
    scanf("%d",&r);
    perimetar=2*pi*r;
    ploshtina= pi*r*r;
    printf("Ploshtinata e %f, a perimetarot %f",ploshtina,perimetar);
}
