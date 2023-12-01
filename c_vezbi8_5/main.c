#include <stdio.h>
#include <string.h>
// SO KOMENTAR E POD A ODNOSNO ITERATIVNA VERZIJA
//void selekcija(int a[],size_t size); // prototip
void selekcija(int a[], int i, int j, int size, int flag); //prototip
int main (){

    int a[] = { 5,-5,10,-10,15,-15};

    size_t size = sizeof(a) / sizeof(a[0]);
    //selekcija(a,size);
    selekcija(a,0,0,size,1);
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

/*void selekcija(int a[],size_t size){
    int min;
    int pom;
    for(int i=0;i<size-1;i++){
        min=a[i];
        for(int j=i+1;j<size;j++){
            if(min>a[j]){
                pom=a[i];
                a[i]=a[j];
                a[j]=pom;
            }
        }
    }
}*/
void selekcija(int a[], int i, int j, int size, int flag)
{
    int pom;
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (a[i] > a[j])
            {
                pom = a[i];
                a[i] = a[j];
                a[j] = pom;
            }
            selekcija(a, i, j + 1, size, 0);
        }
        selekcija(a, i + 1, 0, size, 1);
    }
}
// POD V: ovoj sort na selekcija e pobrz od bubble sort, no se slicni bidejki dvata se O(n^2) komplesksni
