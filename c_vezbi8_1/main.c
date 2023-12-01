#include <stdio.h>
#define size 32
int main()
{
    int i;  // brojac za for
    int length; // dolzina na mesec
    float sredna_temp=0; // kraen rezultat, sredna temperatura za mesec
    int vlez[size]; // vlezot od tastatura
    for(i=0;i<size;i++)
        vlez[i]=0;
    printf("Vnesi mesec i temperaturi za toj mesec\n");
    for(i=0;i<size;i++)
        scanf("%d",&vlez[i]);
    switch(vlez[0]){ // vlez[0] e mesecot i se presmetuva kolku denovi ima,
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: length=31; break;
    case 4:
    case 6:
    case 9:
    case 11: length=30; break;
    case 2: length=28; break; // dali treba prestapni godini da se smetaat?
    default: printf("Vnesivte pogresen mesec");
    }
    for(i=0;i<length;i++){ // suma na site temperaturi vo mesecot
        sredna_temp+=vlez[i+1];
    }
    // printame sredna vrednost ( sumata od site temperaturi deleno so broj na denovi)
    printf("Srednata vrednost za %d-vi mesec e %.2f",vlez[0],sredna_temp/length);
    return 0;
}
