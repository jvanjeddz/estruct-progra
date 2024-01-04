#include<stdio.h>

struct info{
    char nombre[100];
    struct keyDepartamento{
        int claveDepartamento;
        char nombreDepartamento[100];
        int numEmpleados;
        char jefeDepartamento[100];
    }claveDelDepartamento;
    int antiguedad;
    int sueldo;
}empleado[100];

int scan();
void print();
void searchEmpleado();
void searchDepa();

int main()
{
    int n, a, b;
    char c;
    printf("\n\nIntroduzca el número de empleados: ");
    scanf("%d",&n);
    scan(n,empleado);
    print(n,empleado);
    do{
        printf("\n\n\n///MENU///\n");
        printf("\n1 - Buscar empleado");
        printf("\n2 - Buscar departamento");
        printf("\n3 - Capturar información");
        printf("\n4 - Imprimir información");
        printf("\n0 - Salir");
        scanf("%d",&a);
        
        switch(a){
            case 1:
            searchEmpleado(n, empleado);
            break;
            case 2:
            searchDepa(n, empleado);
            break;
            case 3:
            scan(n, empleado);
            case 4:
            print(n, empleado);
            break;
        }
    }while(a!=0);
    do{
        printf("\n¿Desea salir? [Y/n]: ");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='Y' || c=='y'){
            b=0;
        }
        else
        break;
    }while(b!=0);
    return 0;
}

int scan(int n, struct info empleado[n]){
    int i;
    for(i=0;i<n;i++){
        fflush(stdin);
        printf("\nIntroduzca el nombre del empleado: ");
        gets(empleado[i].nombre);
        fflush(stdin);
        printf("\nIntroduzca la clave del departamento del empleado: ");
        scanf("%d",empleado[i].claveDelDepartamento.claveDepartamento);
        printf("\nIntroduzca el nombre del departamento del empleado: ");
        fflush(stdin);
        gets(empleado[i].claveDelDepartamento.nombreDepartamento);
        printf("\nIntroduzca el nombre del jefe del departamento del empleado: ");
        fflush(stdin);
        gets(empleado[i].claveDelDepartamento.jefeDepartamento);
        printf("\nIntroduzca la antigüedad del empleado: ");
        scanf("%d",&empleado[i].antiguedad);
        printf("\nIntroduzca el sueldo del empleado: ");
        scanf("%d",&empleado[i].sueldo);
    }
}

void print(int n, struct info empleado[n]){
    int j, z;
    char yesNo;
    printf("\n\n\n///Información empleados///\n");
    for(j=0;j<n;j++){
        printf("\nEmpleado %d",j+1);
        printf("\nNombre del empleado: %s",empleado[j].nombre);
        printf("\nClave del departamento del empleado: %d",empleado[j].claveDelDepartamento.claveDepartamento);
        printf("\nNombre del departamento del empleado: %s",empleado[j].claveDelDepartamento.nombreDepartamento);
        printf("\nJefe del departamento: %s",empleado[j].claveDelDepartamento.jefeDepartamento);
        printf("\nAntigüedad del empleado: %d",empleado[j].antiguedad);
        printf("\nSueldo del empleado: %d",empleado[j].sueldo);
        fflush(stdin);
        printf("\n\n¿Es la información correcta? [Y/n]: ");
        scanf("%c",&yesNo);
        fflush(stdin);
        if(yesNo=='N' || yesNo=='n'){
            fflush(stdin);
            scan(n,empleado);
        }
    }
}

void searchEmpleado(int n, struct info empleado[n]){
    int i;
    char nombreSearchEmpleado[100];
    printf("\nIntroduzca el nombre del empleado: ");
    fflush(stdin);
    gets(nombreSearchEmpleado);
    for(i=0;i<n;i++){
        if(strcmp(nombreSearchEmpleado,empleado[i].nombre)==0){
            printf("\nEmpleado: %s",empleado[i].nombre);
            printf("\nSueldo: %d",empleado[i].sueldo);
            printf("\nDepartamento: %s",empleado[i].claveDelDepartamento.nombreDepartamento);
            printf("\nJefe: %s",empleado[i].claveDelDepartamento.jefeDepartamento);
        }
    }
}
void searchDepa(int n, struct info empleado[n]){
    int i,numEmpleadosDepa=0,mayorSueldoDepa=0;
    char nombreSearchDepa[100],empleadoRico[100];
    printf("\nIntroduzca el nombre del departamento: ");
    fflush(stdin);
    gets(nombreSearchDepa);
    for(i=0;i<n;i++){
        if(strcmp(nombreSearchDepa,empleado[i].claveDelDepartamento.nombreDepartamento)==0){
            numEmpleadosDepa++;
            if(empleado[i].sueldo>mayorSueldoDepa){
                mayorSueldoDepa=empleado[i].sueldo;
                empleadoRico[100]=empleado[i].nombre;
            }
        }
    }
    printf("\nNúmero de empleados: %d",numEmpleadosDepa);
    printf("\nEmpleado que más gana: %s",empleadoRico);
}