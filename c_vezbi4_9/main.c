#include <stdio.h>

/* pochnuva izvrshuvanjeto na prоgramot */
int main()
{
    float promet; /* vkupen promet za mesec */
float plata; /* plata so bonus */
while (promet != -1){
    printf("Vnesi promet vo evra(-1 za kraj):\n");
    scanf(" %f",&promet);
    if( promet != -1){
        plata=200+(0.09*promet);
        printf("Platata e:%.2f\n",plata);
    }
}
}
