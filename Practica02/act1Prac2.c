#include <stdio.h>

int main(){
	int tiempoTrans;
	float perc;

	printf("\nInserte el tiempo transcurrido: ");
	scanf(" %d",&tiempoTrans);
	if(tiempoTrans>=0 && tiempoTrans<=120){
		perc=tiempoTrans/1.2;
		printf("\nEl porcentaje de avance es de %%%0.2f\n",perc);
	}
	else{
		printf("\nInserte un valor válido\n");
	}
	return 0;
}
