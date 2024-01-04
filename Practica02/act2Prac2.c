#include<stdio.h>

int main(){
	int totalVotos;
	float pan, pri, pt, indie, otros;

	printf("\nIntroduzca el total de votos recolectados: ");
	scanf("%d",&totalVotos);
	pan=totalVotos*0.4;
	pri=totalVotos*0.3;
	pt=totalVotos*0.15;
	indie=totalVotos*0.1;
	otros=totalVotos*0.05;
	printf("\nLos partidos tuvieron el siguiente número de botos respectivamente.\nPAN: %0.2f\nPRI: %0.2f\nPT:%0.2f\nINDEPENDIENTE: %0.2f\nOTROS: %0.2f\n",pan,pri,pt,indie,otros);
	return 0;
}
