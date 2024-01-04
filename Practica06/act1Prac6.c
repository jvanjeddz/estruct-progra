#include<stdio.h>

int main()
{
    int n, i; 
    float gasto, gastoTotal, sumaDiaria[i];
    char yesNo;
    for(i=0; i<6; i++){
        do{
        printf("\nIntroduzca lo gastado durante el día %d: ",i+1);
        scanf(" %f",&gasto);
        printf("¿Desea agregar otro gasto realizado durante el día %d? [s/n]\n",i+1);
        scanf(" %c",&yesNo);
        if(yesNo=='s' || yesNo=='S')
        n=1;
        else if(yesNo=='n' || yesNo=='N')
        n=0;
        else{
            printf("Introduzca un valor válido\n");
            return 0;
        }
        sumaDiaria[i]=sumaDiaria[i]+gasto;
    }while(n!=0);
    }
    gastoTotal=sumaDiaria[0]+sumaDiaria[1]+sumaDiaria[2]+sumaDiaria[3]+sumaDiaria[4]+sumaDiaria[5];
    printf("\n\nEl gasto durante el día 1 fue de: $%.2f",sumaDiaria[0]);
    printf("\nEl gasto durante el día 2 fue de: $%.2f",sumaDiaria[1]);
    printf("\nEl gasto durante el día 3 fue de: $%.2f",sumaDiaria[2]);
    printf("\nEl gasto durante el día 4 fue de: $%.2f",sumaDiaria[3]);
    printf("\nEl gasto durante el día 5 fue de: $%.2f",sumaDiaria[4]);
    printf("\nEl gasto durante el día 6 fue de: $%.2f",sumaDiaria[5]);
    printf("\n\nEl total gastado es de: $%.2f\n",gastoTotal);
    return 0;
}
