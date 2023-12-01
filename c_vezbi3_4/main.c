#include <stdio.h>
float result; /* Rezultat od delenje */
int main()
{
    result = 7.0 / 22.0;
    printf("Rezultatot e %d\n", result);
    return (0);
}
// bidejki %d ocekuva int vrednost a dobiva double se dobiva nedefiniran izlez odnosno random brojka
