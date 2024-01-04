#include<stdio.h>

int main()
{
    float tonMen[12];
    int i, mesMaxProd, aboveMes[12]={0};
    float ton, tonAnual, avg, maxProd=0;
    for(i=0;i<12;i++){
        printf("\nIntroduzca el número de tolenadas almacenadas el mes %d: ",i+1);
        scanf(" %f",&ton);
        tonMen[i]=ton;
        tonAnual=tonAnual+ton;
        avg=tonAnual/12;
        if(maxProd<tonMen[i]){
            maxProd=tonMen[i];
            mesMaxProd=i;
        }
        
    }
    printf("\n\nEl promedio anual de toneladas cosechadas es de: %.2f toneladas",avg);
    printf("\nLa mayor producción fue de: %.2f toneladas",maxProd);
    printf("\nEl mes más profuctivo fue el número %d",mesMaxProd);
    printf("\nLos meses por encima del promedio son: ");
    for(i=0;i<12;i++){
        if(tonMen[i]>avg){
            aboveMes[i]=i;
        }
        if(aboveMes[i] != 0)
        printf("%d ",aboveMes[i]);
    }
    printf("\n");
    return 0;
}
