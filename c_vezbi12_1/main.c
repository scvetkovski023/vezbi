#include <stdio.h>
#include <string.h>
struct proizvod{
    int kod;
    char ime[30];
    int kolicina;
    float cena;
};
int vnesiIzbor( void);
void vnesi( FILE *fp);
void pechati(FILE *fp);
void pechati_del(FILE *fp);
void brishi_del(FILE *fp);
void azhuriraj(FILE *fp);
void prodazba(FILE *fp);
int main()
{
    FILE *cfPtr;
    int izbor;
    if( (cfPtr=fopen("hardware.dat","rb+"))==NULL){
        printf("Ne mozam da otvoram.\n");
    }
    else{
        while( (izbor=vnesiIzbor() ) != 7){
            switch(izbor){
            case 1: vnesi(cfPtr); break;
            case 2: pechati(cfPtr); break;
            case 3: pechati_del(cfPtr); break;
            case 4: brishi_del(cfPtr); break;
            case 5: azhuriraj(cfPtr); break;
            case 6: prodazba(cfPtr); break;
            default:printf("Pogresen izbor.\n"); break;
            }
        }
        fclose(cfPtr);
    }
    return 0;
}
int vnesiIzbor( void){
    int izbor;
    printf("Vnesete operacija shto ke pravite:(7 za kraj)\n");
    printf("1 - Vnesuva podatoci.\n");
    printf("2 - Pechati kompleten listing.\n");
    printf("3 - Pechati specificen del.\n");
    printf("4 - Brishi del.\n");
    printf("5 - Menuva del.\n");
    printf("6 - Prodazba.\n");
    scanf("%d",&izbor);
    return izbor;
}
void FindWord(char *word , char *file){
    char line[1024] ;
    FILE* fp = fopen(file, "r") ;
    while (fgets(line , sizeof(line) , fp )!= NULL)
    {
        if (strstr(line , word )!= NULL)
        {
            printf("%s",line);
        }
    }
}
void vnesi(FILE *fp){
    struct proizvod pom={0," ",0,0.0};
    printf( "Vnesi kod, ime na proizvod kolicina i cena.\n" );
    printf( "Vnesi EOF za kraj.\n" );
    printf( "Sledno: " );
    scanf( "%d%s%d%f", &pom.kod, pom.ime, &pom.kolicina,&pom.cena );
    while ( !feof( stdin ) ) {
        fprintf( fp, "%d %s %d %.2f\n", pom.kod,pom.ime,pom.kolicina,pom.cena );
        printf( "Sledno: " );
        scanf( "%d %s %d %f", &pom.kod, pom.ime, &pom.kolicina,&pom.cena );
    }
}
void pechati(FILE *fp){
    printf("\n");
    struct proizvod pom={0," ",0,0.0};
    printf( "%s  %s  %s  %s\n", "Kod", "Ime na del", "Kolicina", "Cena" );
    while ( !feof( fp ) ) {
        fscanf( fp, "%d%s%d%f", &pom.kod, pom.ime, &pom.kolicina,&pom.cena );
        printf( "%d %s  %d  %.2f\n", pom.kod,pom.ime,pom.kolicina,pom.cena );

    }
}
void pechati_del(FILE *fp){
    printf("Vnesi go kodot na proizvodot");
    struct proizvod pom;
    scanf("%d",&pom.kod);
    fseek(fp,(pom.kod-1)*sizeof(struct proizvod),SEEK_SET);
    fread(&pom,sizeof(struct proizvod),1,fp);
    printf("%s\n",pom);
}
void brishi_del(FILE *fp){
    struct proizvod delete;
    struct proizvod prazen = { 0, "", 0, 0.0 };
    int kod;
    printf( "Vnesi kod za brisenje:\n " );
    scanf( "%d", &kod );
    fseek( fp, ( kod - 1 ) * sizeof( struct proizvod ), SEEK_SET );
    fread( &delete, sizeof( struct proizvod ), 1, fp );
    if ( delete.kod == 0 ) {
        printf( "Proizvodot %d ne postoi.\n", kod);
    }
    else {
        fseek( fp, ( kod - 1 ) * sizeof( struct proizvod ),  SEEK_SET );
        fwrite( &prazen, sizeof( struct proizvod ), 1, fp );
    }

}
void azhuriraj(FILE *fp){
    int kod;
    float cena;
    int kolicina;

    struct proizvod pom = { 0, "", 0, 0.0 };


    printf( "Vnesi kod na proizvodot na koj treba promeni:\n " );
    scanf( "%d", &kod );
    fseek( fp, ( kod - 1 ) * sizeof( struct proizvod ), SEEK_SET );

    fread( &pom, sizeof( struct proizvod ), 1, fp );
    if ( pom.kod == 0 ) {
        printf( "Proizvodot #%d nema informacii.\n", kod );
    }
    else {
        printf( "%-8d%-16s%-11d%10.2f\n\n", pom.kod, pom.ime, pom.kolicina, pom.cena);
        printf("Vnesi promena na kolicina:\n");
        scanf("%d",kolicina);
        pom.kolicina+=kolicina;
        printf( "Vnesi promena na cena: \n" );
        scanf( "%lf", &cena );
        pom.cena+=cena;
        printf( "%-8d%-16s%-11d%10.2f\n\n", pom.kod, pom.ime, pom.kolicina, pom.cena);
        fseek( fp, ( kod - 1 ) * sizeof( struct proizvod),
              SEEK_SET );

        fwrite( &pom, sizeof( struct proizvod ), 1, fp );
    }
}
void prodazba( FILE *fp){
    int kod;
    int kolicina;
    struct proizvod pom = { 0, "", 0, 0.0 };


    printf( "Vnesi kod na proizvodot koj se prodade:\n " );
    scanf( "%d", &kod );
    fseek( fp, ( kod - 1 ) * sizeof( struct proizvod ), SEEK_SET );
    fread( &pom, sizeof( struct proizvod ), 1, fp );
    if ( pom.kod == 0 ) {
        printf( "Proizvodot #%d nema informacii.\n", kod );
    }
    else {
        printf( "%-8d%-16s%-11d%10.2f\n\n", pom.kod, pom.ime, pom.kolicina, pom.cena);
        printf("Vnesi promena na kolicina:\n");
        scanf("%d",kolicina);
        pom.kolicina+=kolicina;
        printf( "%-8d%-16s%-11d%10.2f\n\n", pom.kod, pom.ime, pom.kolicina, pom.cena);
        fseek( fp, ( kod - 1 ) * sizeof( struct proizvod),
              SEEK_SET );
        fwrite( &pom, sizeof( struct proizvod ), 1, fp );
    }
}
