#include <stdio.h>

int main()
{
    int godina,den,mesec; /* inicijalizacija */
    printf("Vnesi datum:\n");   /* vnesuvanje na datumot */
    scanf("%d%*c%d%*c%d",&godina,&mesec,&den);

    printf("%d",den);
    switch(mesec){
    case 1: printf(" januari ");break;
    case 2: printf(" fevruari ");break;
    case 3: printf(" mart ");break;
    case 4: printf(" april ");break;
    case 5: printf(" maj ");break;
    case 6: printf(" juni ");break;
    case 7: printf(" juli ");break;
    case 8: printf(" avgust ");break;
    case 9: printf(" septemvri ");break;
    case 10: printf(" oktomvri ");break;
    case 11: printf(" noemvri ");break;
    case 12: printf(" dekemvri ");break;
    default: printf("Vnesivte pogresen mesec\n");
    }
    printf("%d godina.",godina);
    return 0;  /* uspeshen kraj */
}
