#include <stdio.h>

int main()
{
    int br1,br2;

    printf("Vnesi dva celi broevi\n");
    scanf("%d %d",&br1,&br2);
    if(br1%2 == 0)
        printf("Brojot %d e paren\n",br1);
    else
        printf("Brojot %d e neparen\n",br1);

    if(br2%2 == 0)
        printf("Brojot %d e paren\n",br2);
    else
        printf("Brojot %d e neparen\n",br2);

}
