#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, n;
    printf("\nIntroduzca el valor de n: ");
    scanf(" %d",&n);
    char cadenas[n][30];
    int m[n];
    
    for(i=0;i<n;i++){
            printf("\nInserte la cadena %d: ",i+1);
            fflush(stdin);
            gets(cadenas[i]);
            fflush(stdin);
            int l=strlen(cadenas[i]);
            m[i]=1;
            for(j=0;j<30;j++){
            if(((cadenas[i][j-1]!=' ' && cadenas[i][j-1]!='\n' && cadenas[i][j-1]!='\t')&&(cadenas[i][j+1]!=' ' && cadenas[i][j+1]!='\n' && cadenas[i][j+1]!='\t'))&&(cadenas[i][j]==' ' || cadenas[i][j]=='\n' || cadenas[i][j]=='\t'))
            m[i]++;
            }
            if(cadenas[i][l]==' ' || cadenas[i][l]=='\n' || cadenas[i][l]=='\t')
            m[i]--;
    }
    for(i=0;i<n;i++){
        printf("\nCadena %d: %d palabras",i+1,m[i]);
    }
    
    return 0;
}
