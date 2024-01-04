#include<stdio.h>

void scan();
void print();
void total();
void mostUsedServicio();
void clienteRico();

int main()
{
    int n;
    printf("\nIngrese el número de carreras: ");
    scanf("%d",&n);
    scan(n);
    return 0;
}
    
    void scan(int n){
    int i,j;
    int clientes[n][4];
    for(i=0;i<n;i++){
        printf("\n\n///Carrera Número %d///",i+1);
        printf("\nIntroduzca el código del taxi (01, 02, 03, 04, 05): ");
        j=0;
        while(j==0){
            scanf("%d",&clientes[i][0]);
            if(clientes[i][0]==1 || clientes[i][0]==2 || clientes[i][0]==3 || clientes[i][0]==4 || clientes[i][0]==5)
            j=1;
            else
            printf("\nIntroduzca un valor válido");
        }
        printf("\nIntroduzca la clave del cliente: ");
        scanf("%d",&clientes[i][1]);
        printf("\nIntroduzca el tipo de servicio:\n01 - Puerta a puerta\n02 - Normal\n03 - Especial\n");
        j=0;
        while(j==0){
            scanf("%d",&clientes[i][2]);
            if(clientes[i][2]==1 || clientes[i][2]==2 || clientes[i][2]==3)
            j=1;
            else
            printf("\nIntroduzca un valor válido");
        }
        printf("\nIntroduzca el costo del servicio: ");
        scanf("%d",&clientes[i][3]);
    }
    print(n,clientes);
    total(n,clientes);
    mostUsedServicio(n,clientes);
    clienteRico(n,clientes);
}

void print(int printN, int printClientes[printN][4]){
    int i, j;
    printf("%10s|%10s|%10s|%10s","Codigo Taxi   ","   Clave Cliente   "," Tipo Servicio   "," Costo Servicio  \n");
    for(i=0; i<printN;i++){
        for(j=0;j<4;j++){
            printf("%-18d", printClientes[i][j]);
        }
        printf("\n");
    }
}

void total(int printN, int printClientes[printN][4]){
    int i, totalTaxi01=0, totalTaxi02=0, totalTaxi03=0, totalTaxi04=0, totalTaxi05=0;
    for (i=0; i<printN; i++){
        switch(printClientes[i][0]){
            case 1:
            totalTaxi01=totalTaxi01+printClientes[i][3];
            break;
            case 2:
            totalTaxi02=totalTaxi02+printClientes[i][3];
            break;
            case 3:
            totalTaxi03=totalTaxi03+printClientes[i][3];
            break;
            case 4:
            totalTaxi04=totalTaxi04+printClientes[i][3];
            break;
            case 5:
            totalTaxi05=totalTaxi05+printClientes[i][3];
            break;
        }
    }
    printf("\n\nTotal Producido:");
    printf("\nTaxi 01: $%.2d",totalTaxi01);
    printf("\nTaxi 02: $%.2d",totalTaxi02);
    printf("\nTaxi 03: $%.2d",totalTaxi03);
    printf("\nTaxi 04: $%.2d",totalTaxi04);
    printf("\nTaxi 05: $%.2d",totalTaxi05);
}
void mostUsedServicio(int printN, int printClientes[printN][4]){
    int i, tipoServicio01=0, tipoServicio02=0,tipoServicio03=0;
    for(i=0;i<printN;i++){
        switch(printClientes[i][2]){
            case 1:
            tipoServicio01++;
            case 2:
            tipoServicio02++;
            case 3:
            tipoServicio03++;
        }
    }
    if(tipoServicio01>tipoServicio02 && tipoServicio01>tipoServicio03)
    printf("\n\nServicio 01 Puerta a puerta se usó %d veces",tipoServicio01);
    else if(tipoServicio02>tipoServicio01 && tipoServicio02>tipoServicio03)
    printf("\n\nServicio 02 Normal se usó %d veces",tipoServicio02);
    else if(tipoServicio03>tipoServicio01 && tipoServicio03>tipoServicio02)
    printf("\n\nServicio 03 Especial se usó %d veces",tipoServicio03);
    else if(tipoServicio01==tipoServicio02 && tipoServicio01>tipoServicio03)
    printf("\n\nServicios 01 y 02 se usaron %d veces",tipoServicio01);
    else if(tipoServicio02==tipoServicio03 && tipoServicio02>tipoServicio01)
    printf("\n\nServicios 02 y 03 se usaron %d veces",tipoServicio02);
    else if(tipoServicio03==tipoServicio01 && tipoServicio03>tipoServicio02)
    printf("\n\nServicios 01 y 03 se usaron %d veces",tipoServicio03);
    else
    printf("\n\nTodos los servicios se utilizaron por igual");
}
void clienteRico(int printN, int printClientes[printN][4]){
    int i, mayorPago=0, claveCliente;
    for(i=0;i<printN;i++){
        if(printClientes[i][3]>mayorPago){
            mayorPago=printClientes[i][3];
            claveCliente=printClientes[i][1];
        }
    }
    printf("\n\nEl cliente %d fue el que pagó más, pagando la cantidad de $%d",claveCliente,mayorPago);
}