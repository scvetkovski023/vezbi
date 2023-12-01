#include <stdio.h>

int main()
{
    int br1,br2,br3;
    int sum,proizvod,sredna_vrednost;

    printf("Vnesi 3 broja so space\n");
    scanf_s("%d %d %d",&br1,&br2,&br3);
    sum=br1+br2+br3;
    proizvod=br1*br2*br3;
    sredna_vrednost= (br1+br2+br3)/3;
    printf("Sumata e %d,proizvodot e %d,srednata vrednost e %d\n",sum,proizvod,sredna_vrednost);
    return 0;

}
