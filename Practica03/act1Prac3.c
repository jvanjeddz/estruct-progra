#include<stdio.h>

int main()
{
    int numClient;
    float salIni, limCredit, cantSpent, cantDepo, gastoTotal;
    printf("\nIntroduzca su número de cliente: ");
    scanf(" %d",&numClient);
    printf("Introduzca su saldo inicial: ");
    scanf(" %f",&salIni);
    printf("Introduzca el límite de crédito: ");
    scanf(" %f",&limCredit);
    printf("Introduzca la cantidad que gastó: ");
    scanf(" %f",&cantSpent);
    printf("Introduzca la cantidad depositada en ese mes: ");
    scanf(" %f",&cantDepo);
    gastoTotal=cantSpent - salIni - cantDepo;
    if(gastoTotal>limCredit){
        float exceso;
        exceso=gastoTotal - limCredit;
        printf("\nCliente #%d\nSaldo inicial: $%0.2f\nLímite de crédito: $%0.2f\nCantidad que gastó: $%0.2f\nCantidad depositada en ese mes: $%0.2f\n\nEl límite de crédito se ha excedido por $%0.2f\n",numClient,salIni,limCredit,cantSpent,cantDepo,exceso);
    }
    else{
        printf("\nCliente #%d\nSaldo inicial: $%0.2f\nLímite de crédito: $%0.2f\nCantidad que gastó: $%0.2f\nCantidad depositada en ese mes: $%0.2f\n\nEl límite de crédito no se ha excedido.\n",numClient,salIni,limCredit,cantSpent,cantDepo);
    }
    return 0;
}

