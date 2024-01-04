#include<stdio.h>

int main()
{
    int n, id, edad, estatura, peso, mujeres, hombres;
    char sexo, colOjos, colCabello, yesNo;
    mujeres=0;
    hombres=0;
    do{
        printf("\nIntroduzca la matrícula: ");
        scanf(" %d",&id);
        printf("Introduzca el sexo [m/f]: ");
        scanf(" %c",&sexo);
        if(sexo=='m' || sexo=='M' || sexo=='f' || sexo=='F'){
            printf("Introduzca la edad: ");
        scanf(" %d",&edad);
        printf("Introduzca la estatura (cm): ");
        scanf(" %d",&estatura);
        printf("Introduzca el peso (kg): ");
        scanf(" %d",&peso);
        printf("Introduzca el color de ojos:\nazul [1]\ncastaño [2]\notro [3]\n");
        scanf(" %c",&colOjos);
        if(colOjos=='1' || colOjos=='2' || colOjos=='3'){
            printf("Introduzca el color de cabello:\ncastaño [1]\nrubio [2]\notro [3]\n");
        scanf(" %c",&colCabello);
        if(colCabello=='1' || colCabello=='2' || colCabello=='3'){
            if(colCabello=='2' && colOjos=='1' && estatura>=165 && estatura<=175 && peso<55)
        mujeres++;
            if(colOjos=='2' && estatura>170 && peso<=70 && peso>=60)
        hombres++;
        }
        else
            printf("Introduzca un valor válido\n");
        }
        else
            printf("Introduzca un valor válido\n");
        }
        else
            printf("Introduzca un valor válido");
        
        
        
        printf("\n¿Desea introducir los datos de otro alumno? [s/n]\n");
        scanf(" %c",&yesNo);
        if(yesNo=='s' || yesNo=='S')
        n=1;
        else if(yesNo=='n' || yesNo=='N')
        n=0;
        else{
            printf("Inserte un valor válido\n");
            return 0;
        }
        
        
    }while(n!=0);
    printf("\n\nEl número total de mujeres de cabello rubio y ojos azules que miden entre 165 y 175 cm y que pesen menos de 55 kg es de: %d",mujeres);
    printf("\n\nEl número total de hombres de ojos castaños de más de 170 cm de estatura y que pesen entre 60 y 70 kgs es de: %d\n",hombres);
    return 0;
}
