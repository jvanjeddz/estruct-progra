#include<stdio.h>
#include<math.h>

int main()
{
    int num1, num2, op;
    float impar1, impar2;
    printf("\nIntroduzca su primer número entero: ");
    scanf(" %d",&num1);
    printf("Introduzca su segundo número entero: ");
    scanf(" %d",&num2);
    if(num1==num2){
        printf("\nError: números idénticos\n");
        return 0;
    }
    else if(num1%2==0 && num2%2==0){
        op=num1*num2;
        printf("\n%d\n",op);
    }
    else if(num1%2!=0 && num2%2!=0){
        impar1=sqrt(num1);
        impar2=sqrt(num2);
        printf("\nRaíz del primer entero: %f\nRaíz del segundo entero: %f\n",impar1,impar2);
    }
    else if((num1%2==0 && num2%2!=0)||(num1%2!=0 && num2%2==0)){
        if(num1>num2){
            op=num1-num2;
        }
        else if(num2>num1){
            op=num2-num1;
        }
        printf("\n%d\n",op);
    }
    else{
        printf("Inserte valores válidos\n");
    }
}

