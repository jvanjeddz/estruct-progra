#include<stdio.h>
#include<string.h>

int main()
{
    int i, n=0;
    char cadena[20];
    printf("\nIntroduzca la cadena de caracteres: ");
    gets(cadena);
    for(i=0;i<=20;i++){
        if(cadena[i]==65 && cadena[i+1]==66){
            n++;
        }
    }
    printf("\n\nCadena: %s\n\nTotal de secuancias de AB en la cadena: %d",cadena,n);
    return 0;
}
