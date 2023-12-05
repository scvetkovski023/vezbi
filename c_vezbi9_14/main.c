#include <stdio.h>
#include <math.h>

int print_broj(int broj,int start);
void print_broj1(int start,int broj);
void pattern1(int broj,int i,int start);
void pattern(int broj,int i, int start);
//pocnuva main
int main(){

    int broj=5;
    pattern(4,5,1);
    pattern1(5,1,5);
    return 0;
}

int print_broj(int start,int broj){
    if (broj==0){
        return start;
    }
    printf("%d ",start);
    return print_broj(start+1,broj-1);
}
void pattern(int broj,int i,int start){
    if( broj == 0)
        return;
    print_broj(i,start);
    printf("\n");
    pattern(broj-1,i-1,start+1);
}
void print_broj1(int start,int broj){
    if ( start >= broj){
        printf("%d",start);
        return;
    }
    printf("%d ",start);
    return print_broj1(start+1,broj);
}
void pattern1(int broj,int i,int start){
    if( broj == 0)
        return;
    print_broj1(i,start);
    printf("\n");
    pattern1(broj-1,i+1,start);
}
