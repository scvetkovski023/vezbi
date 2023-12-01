#include <stdio.h>
#include <string.h>
void palindrom(char str[]); // prototip

int main(){
    char vlez[20];
    printf("Vnesi go stringot:\n");
    scanf("%s",vlez);
    palindrom(vlez);
    return 0;
}

void palindrom( char str[]){
    int j = 0;
    int i = strlen(str) - 1;
    while (i > j){
        if (str[j++] != str[i--]){
            printf("0");
            return;
        }
    }
    printf("1");
}
