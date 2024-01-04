#include<stdio.h>

int main()
{
    int n, i, dos, tres, num, sum;
    dos=0;
    tres=0;
    printf("\nIntroduzca la cantidad de números que se usarán: ");
    scanf(" %d",&n);
    for(i=1; i<=n; i++){
        printf("Introduzca su número: ");
        scanf(" %d",&num);
        if(num%2==0)
            dos+=num;
        if(num%3==0)
            tres+=num;
    }
    sum=dos+tres;
    printf("\n\nLa suma de los múltiplos de 2 es: %d\nLa suma de los múltiplos de 3 es: %d\nLa suma de los múltiplos de ambos es: %d\n",dos,tres,sum);
    return 0;
}
