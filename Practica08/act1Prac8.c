#include<stdio.h>

int main()
{
    int i, j, k=0, m, n, centro;
    printf("\nIntroduzca el número m: ");
    scanf(" %d",&m);
    if(m>0){
     printf("\nIntroduzca el número n: ");
     scanf(" %d",&n);
     if(m==n){
         int arreglo[m][n];
         int vector[4]={0};
         for(i=0;i<m;i++){
             for(j=0;j<n;j++){
                 printf("Introduzca el valor [%d][%d]: ",i+1,j+1);
                 scanf(" %d",&arreglo[i][j]);
                 if(m==1)
                 break;
                 if((j==0&& i==0) || (j==0 && i==m-1) || (i==0 && j==n-1) || (i==m-1 && j==n-1)){
                     vector[k]=arreglo[i][j];
                     k++;
                 }
             }
         }
         for(i=0;i<m;i++){
             for(j=0;j<n;j++)
                 printf("[%d][%d]: %d\n",i+1,j+1,arreglo[i][j]);
         }
         printf("\nEsquinas: ");
         for(k=0;k<4;k++)
             printf("%d ",vector[k]);
         if(m%2==1){
                    centro=arreglo[m/2][n/2];
                    printf("\n\nValor central: %d",centro);
                 }
                 else{
                     printf("\n\nNo tiene valor central");
                 }
     }
     else{
         printf("\nIntroduzca un valor válido");
         return 0;
     }
    }
    else
        printf("\nIntroduzca un valor válido");
    return 0;
}
