#include<stdio.h>
#include<string.h>
#include<ctype.h>

void print(char str[]);
int main()
{
    char str[25];

    printf("Vnesi fraza shto treba da se prevedi vo Morzeova azbuka:\n");
    gets(str);
    print(str);
    return 0;
}
void print(char str[]){
    int i,j=0;
    char str1[100];
    for(i=0;i<strlen(str);i++)
    {
        switch(toupper(str[i]))
        {
        case 'A':
            str1[j++]='.';
            str1[j]='-';
            break;

        case 'B':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case 'C':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case 'D':
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='.';
            break;

        case 'E':
            str1[j]='.';
            break;

        case 'F':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case 'G':
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='.';
            break;

        case 'H':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case 'I':
            str1[j++]='.';
            str1[j]='.';
            break;

        case 'J':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case 'K':
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='-';
            break;

        case 'L':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='.';
            break;

        case 'M':
            str1[j++]='-';
            str1[j]='-';
            break;

        case 'N':
            str1[j++]='-';
            str1[j]='.';
            break;

        case 'O':
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case 'P':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='.';
            break;

        case 'Q':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='-';
            break;

        case 'R':
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case 'S':
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case 'T':
            str1[j]='-';
            break;

        case 'U':
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;

        case 'V':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;

        case 'W':
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='-';
            break;

        case 'X':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;

        case 'y':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='-';
            break;

        case 'Z':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '0':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '1':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '2':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '3':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='-';
            break;

        case '4':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;

        case '5':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '6':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '7':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '8':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '9':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j]='.';
            break;

        case '.':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='-';
            break;

        case ',':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='-';
            break;

        case ':':
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '?':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j]='.';
            break;


        case '-':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;

        case ';':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case '"':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case '+':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case '/':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case '&':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='.';
            break;

        case '$':
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;


        case '@':
            str1[j++]='.';
            str1[j++]='-';
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='-';
            str1[j]='.';
            break;

        case '=':
            str1[j++]='-';
            str1[j++]='.';
            str1[j++]='.';
            str1[j++]='.';
            str1[j]='-';
            break;

        case ' ':
            str1[j]=' ';
            break;
        }
        j++;
    }
    str1[j-1]='\0';
    i=0;
    puts(str1);
}
