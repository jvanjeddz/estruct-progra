#include<stdio.h>

int main()
{
    float lecAnt, lecAct, facAnt, facAct, facturaTotal;
    printf("\nIntroduzca la lectura anterior en metros cúbicos: ");
    scanf(" %f",&lecAnt);
    
    if(lecAnt>0 && lecAnt<=70){
        facAnt=lecAnt*500;
    }
    else if(lecAnt>70 && lecAnt<=170){
        facAnt=((lecAnt - 70)*50) + 35000;
    }
    else if(lecAnt>170 && lecAnt<=400){
        facAnt=((lecAnt - 170)*25) + 35000 + 5000;
    }
    else if(lecAnt>400){
        facAnt=((lecAnt - 400)*15) + 35000 + 5000 + 5750;
    }
    else{
        printf("\nIntroduzca un valor válido\n");
        return 0;
    }
    
    printf("Introduzca la lectura actual en metros cúbicos: ");
    scanf(" %f",&lecAct);
    
    if(lecAct>0 && lecAct<=70){
        facAct=lecAct*500;
    }
    else if(lecAct>70 && lecAct<=170){
        facAct=((lecAct - 70)*50) + 35000;
    }
    else if(lecAct>170 && lecAct<=400){
        facAct=((lecAct - 170)*25) + 35000 + 5000;
    }
    else if(lecAnt>400){
        facAct=((lecAct - 400)*15) + 35000 + 5000 + 5750;
    }
    else{
        printf("\nIntroduzca un valor válido\n");
        return 0;
    }
    
    facturaTotal=facAct;
    if((facAct<facAnt)&&(facAct>0 && facAct<=170)){
        facturaTotal=facAct * 0.80;
    }
    else if(facAct==(facAnt/2)){
        if(facAct>170 && facAct<=400){
            facturaTotal=facAct * 0.50;
        }
        
    }
    printf("\nValor de factura: $%.2f\n",facturaTotal);
    return 0;
}
