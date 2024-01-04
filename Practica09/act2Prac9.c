#include<stdio.h>
#include<string.h>
int main()
{
    int i, l;
    char frase[50];
    
    printf("\nIntroduzca la frase: ");
    gets(frase);
    l=strlen(frase);
    if(frase[0]<=122 && frase[0]>=97)
    frase[0]=(frase[0]-32);
    if(frase[l-1]<=122 && frase[l-1]>=97)
    frase[l-1]=(frase[l-1]-32);

    for(i=1;i<l;i++){
    if(frase[i]==' '|| frase[i]=='\n' || frase[i]=='\t'){
        if(frase[i+1]<=122 && frase[i+1]>=97){
            frase[i+1]=(frase[i+1]-32);
        }
        if(frase[i-1]<=122 && frase[i-1]>=97){
            frase[i-1]=(frase[i-1]-32);
        }
        }
    }
    printf("\n\nLa frase es: %s",frase);
    return 0;
}
