#include <stdio.h>
#include <string.h>

struct generator{
    int cifra;
    char *bukvi;
};
void najdi_cifra(FILE *fp, char c);

int main()
{
    FILE *cfPtr;
    struct generator pom;
    char vlez[7];
    int i;
    if ( ( cfPtr = fopen( "telbroj.dat", "r" ) ) == NULL ) {
        printf( "Datotekata ne mozhe da se otvori.\n" );
    }
    else{
        printf("Vnesete go stringot:\n");
        for(i=0;i<7;i++)
            scanf("%c",vlez[i]);
        for(i=0;i<7;i++){
            najdi_cifra(cfPtr,vlez[i]); // bara cifra za site 7 vneseni bukvi
        }
    }

    return 0;
}
void najdi_cifra(FILE *fp, char c){
    struct generator pom;
    while(!feof(fp)){
        fread(&pom,sizeof(struct generator),1,fp); // chita red po red
        for(int i=0;i<strlen(pom.bukvi);i++){ // gi cita bukvite od toj red
            if(c==pom.bukvi[i]) // ako se sovpagja so taa od scanf
                printf("%d",pom.cifra); // ja pecati cifrata
        }
    }
}
