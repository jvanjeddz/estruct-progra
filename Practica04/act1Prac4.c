#include<stdio.h>

int main()
{
    char producto;
    int cantidad, costo;
    float costoFinal;
    printf("\nIntroduzca el producto que desea comprar:\n(A)\n(B)\n(C)\n");
    scanf( "%c",&producto);
    printf("\nIntroduzca el número de piezas de producto que desea comprar: ");
    scanf( "%d",&cantidad);
    if(producto=='A' || producto=='a'){
        costo=cantidad*10;
        costoFinal=costo;
        if(costoFinal>100){
            costoFinal=costoFinal*0.90;
        }
    }
    
    else if(producto=='B' || producto=='b'){
        costo=cantidad*4;
        costoFinal=costo;
        if(cantidad>5){
            costoFinal=costoFinal - 30;
        }
    }
    
    else if(producto=='C' || producto=='c'){
        costo=cantidad*9;
        costoFinal=costo;
    }
    else{
        printf("\nInserte un valor válido");
        return 0;
    }
    printf("\nProducto seleccionado: %c\nCantidad de piezas: %d\nCosto total: $%.2f\n",producto,cantidad,costoFinal);
    return 0;
}

