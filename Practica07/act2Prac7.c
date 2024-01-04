#include<stdio.h>

int main()
{
    int i, n, o;
    printf("\nIntroduzca la cantidad de productos de la que se requiere controlar su existencia: ");
    scanf(" %d",&n);
    if(n>0){
        printf("\nIntroduzca la cantidad de productos de las que hay pedidos por parte de los clientes: ");
        scanf(" %d",&o);
        printf("\n");
        if(n==o){
            int vectorA[n], vectorB[n], vectorC[n];
            for(i=0;i<n;i++){
                printf("Introduzca la cantidad en existencia del producto número %d: ",i+1);
                scanf(" %d",&vectorA[i]);
            }
            printf("\n");
            for(i=0;i<n;i++){
                printf("Introduzca la cantidad de pedidos del producto número %d: ",i+1);
                scanf(" %d",&vectorB[i]);
            }
            for(i=0;i<n;i++){
                if(vectorA[i]==vectorB[i])
                    vectorC[i]=vectorA[i];
                else if(vectorA[i]<vectorB[i])
                    vectorC[i]=2*(vectorB[i]-vectorA[i]);
                else
                    vectorC[i]=vectorB[i];
            }
            printf("\nVector A: ");
            for(i=0;i<n;i++)
                printf("%d ",vectorA[i]);
            printf("\nVector B: ");
            for(i=0;i<n;i++)
                printf("%d ",vectorB[i]);
            printf("\nVector C: ");
            for(i=0;i<n;i++)
                printf("%d ",vectorC[i]);
        }
        else{
            printf("\nIntroduzca un valor válido. No se cumple con la igualdad\n");
            return 0;
        }
    }
    else
        printf("\nIntroduzca un valor válido\n");
    return 0;
}