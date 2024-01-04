#include<stdio.h>

int main()
{
    char menosVendido;
    int precioA, precioB, precioC, ventasA, ventasB, ventasC, total;
    printf("\nIntroduzca el precio de la primer clase de boletos (a): ");
    scanf(" %d",&precioA);
    printf("\nIntroduzca el precio de la segunda clase de boletos (b): ");
    scanf(" %d",&precioB);
    printf("\nIntroduzca el precio de la tercer clase de boletos (c): ");
    scanf(" %d",&precioC);
    printf("\n¿Cuántos boletos de la primer clase se vendieron?\n");
    scanf(" %d",&ventasA);
    printf("\n¿Cuántos boletos de la segunda clase se vendieron?\n");
    scanf(" %d",&ventasB);
    printf("\n¿Cuántos boletos de la tercer clase se vendieron?\n");
    scanf(" %d",&ventasC);
    total=(precioA*ventasA)+(precioB*ventasB)+(precioC*ventasC);
    if(ventasA<ventasB && ventasA<ventasC)
        menosVendido='a';
    else if(ventasB<ventasA && ventasB<ventasC)
        menosVendido='b';
    else if(ventasC<ventasA && ventasC<ventasB)
        menosVendido='c';
    if((ventasA==ventasB && ventasA<ventasC) || (ventasA==ventasC && ventasA<ventasB) || (ventasB==ventasC && ventasA<ventasB) || (ventasA==ventasB && ventasB==ventasC)){
        printf("Se vendieron:\nPrimera clase: %d\nSegunda clase: %d\nTercer clase: %d",ventasA,ventasB,ventasC);
        printf("\n\nNo hubo una clase de boleto menos vendido en específico");
        printf("\n\nEl total recaudado en taquilla fue de: $%d\n",total);
        return 0;
    }
    printf("Se vendieron:\nPrimera clase: %d\nSegunda clase: %d\nTercer clase: %d",ventasA,ventasB,ventasC);
        printf("\n\nLa clase de boleto menos vendido fue: %c",menosVendido);
        printf("\n\nEl total recaudado en taquilla fue de: $%d\n",total);
    return 0;
}