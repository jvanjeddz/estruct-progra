#include<stdio.h>

int main(){
	int num, res, i=0;
	printf("Introduzca el entero: ");
	scanf("%d",&num);

	while(num>0 && i<2){
		res= num%10;
		i++;
		printf("%d\n",res);

		num=num/10;
	}
	return 0;
}

