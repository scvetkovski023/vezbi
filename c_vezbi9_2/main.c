#include <stdio.h>

int det3(int a[3][3]); //prototip
int main(){
    int A[3][3];
    int B[3];
    int i,j;
    // koristime Kramerovo pravilo za 3x3
    printf("Vnesi gi koeficienite na ravenkite:\n");
    // gi vnesuvame ravankite pr. 3x+4y-z=5 3 4 -1 5 kade 5 se smestuva vo B nizata
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(j==3)
                scanf("%d",&B[i]);
            else
                scanf("%d",&A[i][j]);
        }
    }
    // determinantite za x,y,z
    int detx[3][3] = {{B[0],A[0][1],A[0][2]},{B[1],A[1][1],A[1][2]},{B[2],A[2][1],A[2][2]}};
    int dety[3][3] = {{A[0][0],B[0],A[0][2]},{A[1][0],B[1],A[1][2]},{A[2][0],B[2],A[2][2]}};
    int detz[3][3] = {{A[0][0],A[0][1],B[0]},{A[1][0],A[1][1],B[1]},{A[2][0],A[2][1],B[2]}};
    // se deli detx/det3, dety/det3, detz/det3 za resenie
    if(det3(A)!=0)
        printf("\nSistemot ima edinstveno resenie ( %d, %d, %d)",det3(detx)/det3(A), det3(dety)/det3(A), det3(detz)/det3(A));
    else
        printf("\nSistemot nema edinsveno resenie bidejki determinantata e 0");
    return 0;
}
// funkcija za dobivanje na determinanta
int det3(int a[3][3])
{
    return (a[0][0]*a[1][1]*a[2][2])-(a[0][0]*a[1][2]*a[2][1]),+(a[0][1]*a[1][2]*a[2][0])-(a[0][1]*a[1][0]*a[2][2]),+(a[0][2]*a[1][0]*a[2][1])-(a[0][2]*a[1][1]*a[2][0]);

}
