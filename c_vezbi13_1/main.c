#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* samo-referencirachka struktura */
struct stackNode {
    char *data;                  /* definiraj int podatoci */
    struct stackNode *nextPtr; /* stackNode pokazhuvach */
}; /* kraj na strukturata stackNode */

typedef struct stackNode StackNode; /* sinonim za struct stackNode */
typedef StackNode *StackNodePtr; /* sinonim za StackNode* */

/* prototipovi */
void push( StackNodePtr *topPtr, char *info );
char *pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
/* pochetok na izvrshuvanjeto */
int main()
{
    StackNodePtr stackPtr = NULL; /* pokazhuva na vrvot na stekot */
    int choice; /* izbor na korisnikot od menito */
    int value;  /* korisnichki vnesena vrenost */
    char vlez[1000];
    printf("Vnesi go tekstot:\n");
    gets(vlez);
    //vlez="odime napred";
    //printf("%s",vlez);
    char *token=strtok(vlez," ");
    while(token!=NULL){
        push(&stackPtr,token);
        token=strtok(NULL," ");
    }
    while(!isEmpty(stackPtr)){
        printf("%s ",pop(&stackPtr));
    }
    return 0; /* uspeshen kraj */

} /* kraj main */

/* Vnesi jazel na vrvot na stekot */
void push( StackNodePtr *topPtr, char *info )
{
    StackNodePtr newPtr; /* pokazhuvach do noviot jazel */

    newPtr = malloc( sizeof( StackNode ) );

    /* vnesi jazel na vrvot na stekot */
    if ( newPtr != NULL ) {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    } /* kraj if */
    else { /* nema mesto */
        printf( "%s ne e vnesen. Nema dovolno memorija.\n", info );
    } /* kraj else */

} /* kraj na funkcijata push */

/* Izvadi jazel od vrvot na stekot */
char *pop( StackNodePtr *topPtr )
{
    StackNodePtr tempPtr; /* pokazhuvach do privremen jazol */
    char *popValue; /* vrednost na jazelot */

    tempPtr = *topPtr;
    popValue = ( *topPtr )->data;
    *topPtr = ( *topPtr )->nextPtr;
    free( tempPtr );

    return popValue;

} /* kraj na funkcijata pop */

/* Vrati 1 ako stekot e prazen,0 inaku */
int isEmpty( StackNodePtr topPtr )
{
    return topPtr == NULL;

} /* kraj na funkcijata isEmpty */

