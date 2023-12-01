#include <stdio.h>

int main()
{
    int broj,i;
    int a[5];
    printf("Vnesete petcifren broj\n");
    scanf("%d",&broj);
    for(i=5;i>0;i--){
        a[i-1]=broj%10;
        broj=broj/10;
    }
    for(i=0;i<5;i++){
        printf("%d   ",a[i]);
    }
    return 0;
}
