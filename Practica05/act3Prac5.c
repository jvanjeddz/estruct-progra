#include<stdio.h>

int main()
{
    int n, i, refrescosos, cantRefrescos, noToma, totalMarca1, totalMarca2, totalRefrescos; 
    float avgTotalRefrescos;
    char tomar, marca;
    noToma=0;
    totalMarca1=0;
    totalMarca2=0;
    totalRefrescos=0;
    refrescosos=0;
    printf("\n¿Cuántas personas serán entrevistadas? ");
    scanf(" %d",&n);
    refrescosos=n;
    for(i=1; i<=n;i++){
        printf("\n¿Usted toma refresco? [s/n] ");
        scanf(" %c", &tomar);
        if(tomar=='s' || tomar=='S'){
            printf("¿Qué marca de refresco prefiere?\nPepsi Cola [1]\nCoca Cola [2]\nOtra marca [3] ");
            scanf(" %c", &marca);
            if(marca=='1' || marca=='2' || marca=='3'){
                if(marca=='1')
                totalMarca1++;
                if(marca=='2')
                totalMarca2++;
                printf("¿Cuántos refrescos toma en un día? ");
                scanf(" %d", &cantRefrescos);
                totalRefrescos+=cantRefrescos;
            }
            else{
                printf("Introduzca un valor válido");
                return 0;
            }
        }
        else if(tomar=='N' || tomar=='n'){
            noToma++;
            refrescosos--;
        }
        else{
        printf("Introduzca un valor válido");
        return 0;
        }
    }
    avgTotalRefrescos=totalRefrescos/refrescosos;
    printf("\n\nEl total de personas encuestadas que no toman refresco es de: %d personas",noToma);
    printf("\n%d personas tomaron de la marca 1, mientras que %d personas tomaron de la marca 2",totalMarca1,totalMarca2);
    printf("\nEl promedio por día de refrescos es de: %.2f",avgTotalRefrescos);
    return 0;
}
