#include<stdio.h>

int main()
{
    char sala, palomitas, membresia;
    int edad, precioSala, precioPalomitas, precioMembresia, total;
    printf("\nIntroduzca el tipo de sala que desea seleccionar:\nnormal (A)\npremium (B)\n3D (C)\n");
    scanf(" %c",&sala);
    printf("\nIntroduzca su edad: ");
    scanf(" %d",&edad);
    printf("\nSi quiere, introduzca el tipo de palomitas que quiere comprar:\nchicas (1)\nmedianas (2)\ngrandes (3)\n\nsi no quiere palomitas, presione la tecla (0)\n");
    scanf(" %c",&palomitas);
    printf("\n¿Cuenta con membresía? (s/n)\n");
    scanf(" %c",&membresia);
    switch(sala){
        case 'a':
        case 'A':
        precioSala=35;
        break;
        case 'b':
        case 'B':
        precioSala=50;
        break;
        case 'c':
        case 'C':
        precioSala=60;
        break;
        default:
        printf("\nIntroduzca un valor válido\n");
        return 0;
    }
    
    if(edad<18 || edad>40){
        precioSala=precioSala - 5;
    }
    
    switch(palomitas){
        case '1':
        precioPalomitas=40;
        break;
        case '2':
        precioPalomitas=50;
        break;
        case '3':
        precioPalomitas=60;
        break;
        case '0':
        precioPalomitas=0;
        break;
        default:
        printf("\nInserte un valor válido\n");
        return 0;
    }
    switch(membresia){
        case 's':
        case 'S':
        precioMembresia=5;
        break;
        case 'n':
        case 'N':
        precioMembresia=0;
    }
    total=precioSala+precioPalomitas+precioMembresia;
    printf("\nSala seleccionada: %c - $%d\nEdad: %d\nCompras: %c - $%d\nMembresía: %c\n\nTotal: $%d\n",sala,precioSala,edad,palomitas,precioPalomitas,membresia, total);
    return 0;
}

