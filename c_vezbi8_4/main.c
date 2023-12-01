#include <stdio.h>
#include <string.h>
int a[100][100];

// FUNCKIITE KOI SE SO KOMENTAR SE ZA POD A ODNOSNO ITERATIVNI
// DODEKA DRUGITE SE REKURZIVNI
void vnesiMatrica(int row,int start_row,int column,int start_column); // prototip
void pechatiMatrica(); // prototip
// void vnesiMatrica ( int row, int column);
// void pechatiMatrica ( int row, int column);

int main(){
    int row,column;
    printf("Vnesi broj na redici i koloni vo matricata:\n");
    scanf("%d %d",&row,&column);
    printf("Vnesi elementi:\n");
    // vnesiMatrica(row,column);
    vnesiMatrica(row,0,column,0);
    printf("Pechati matrica:\n");
    //pechatiMatrica(row,column);
    pechatiMatrica(row,0,column,0);
    return 0;
}

/*void vnesiMatrica(int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void pechatiMatrica(int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}*/

void vnesiMatrica(int row,int start_row,int column,int start_column){
    if ( start_row >= row)
        return;
    if ( start_column >= column)
        return vnesiMatrica(row,start_row+1,column,0);
    scanf("%d",&a[start_row][start_column]);
    return vnesiMatrica(row,start_row,column,start_column+1);

}

void pechatiMatrica(int row,int start_row,int column,int start_column){
    if ( start_row >= row)
        return;
    if ( start_column >= column){
        printf("\n");
        return pechatiMatrica(row,start_row+1,column,0);
    }
    printf("%d ",a[start_row][start_column]);
    return pechatiMatrica(row,start_row,column,start_column+1);
}
