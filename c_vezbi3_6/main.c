#include <stdio.h>

int main(){
    char bukvi[5];
    int i;
    printf("Vnesi 5 bukvi\n");
    for(i=0;i<5;i++){
        scanf("%c",&bukvi[i]);
    }
    printf("%c%c%c%c%c",bukvi[4],bukvi[2],bukvi[1],bukvi[0],bukvi[3]);
    return 0;
}
