#include <stdio.h>
#include <math.h>

//pocnuva main
int main(){
    int row,column;
    int i,j,counter=1;

    printf("Vnesi broj na redici i koloni:\n");
    scanf("%d %d",&row,&column);

    int rezultat[row][column];
    for(j=0;j<column;j++){
        if(j%2==0){
            for(i=0;i<row;i++){
                rezultat[i][j]=counter;
                counter++;
            }
            printf("\n");
        }
        else{
            for(i=row-1;i>=0;i--){
                rezultat[i][j]=counter;
                counter++;
            }
            printf("\n");
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++)
            printf("%d ",rezultat[i][j]);
        printf("\n");
    }
    return 0;
}

