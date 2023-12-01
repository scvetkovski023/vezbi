#include <stdio.h>
int main()
{
    char pom = '*';
    char a[7][5];
    int i,j;
    for(i=0;i<7;i++){
        for(j=0;j<5;j++){
            a[i][j]=' ';
        }
    }
    for(i=0;i<7;i++){
        for(j=0;j<5;j++){
            if(i==0 || i==6)
                a[i][j]=pom;
            if(j==0 || j ==4)
                a[i][j]=pom;
        }
    }
    printf("Zadaca pod a\n");
    for(i=0;i<7;i++){
        for(j=0;j<5;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    printf("Zadaca pod b\n");
    int b[7][7];
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            b[i][j]=' ';
        }
    }
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(i==0 || i==6){
                if(j==2 || j==3 || j==4)
                    b[i][j]=pom;
            }
            if(i==1 || i==5){
                b[i][1]=pom;
                b[i][5]=pom;
            }
            if(i==2 || i==3 || i==4){
                b[i][0]=b[i][6]=pom;
            }
        }
    }
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%c",b[i][j]);
        }
        printf("\n");
    }
    printf("Zadaca pod v\n");
    char c[7][7];
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            c[i][j]=' ';
        }
    }

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(j==3){
                c[i][j]=pom;
                if(i==1){
                    c[i][j-1]=c[i][j+1]=pom;
                }
            }
            if(i==2)
                c[i][j]=pom;
        }
    }
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%c",c[i][j]);
        }
        printf("\n");
    }

    printf("Zadaca pod d\n");
    char d[7][7];
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            d[i][j]=' ';
        }
    }

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(i==0 && j==3){
                d[i][j]=d[i+6][3]=pom;
                d[i+1][j-1]=d[i+1][j+1]=d[i+5][j-1]=d[i+5][j+1]=pom;
                d[i+2][j-2]=d[i+2][j+2]=d[i+4][j-2]=d[i+4][j+2]=pom;
                d[i+3][j-3]=d[i+3][j+3]=pom;
            }
        }
    }
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%c",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
