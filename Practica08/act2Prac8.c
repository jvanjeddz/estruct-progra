#include<stdio.h>

int main()
{
    int m, n, i, j, k, l, elementoMaxA, elementoMaxB;
    printf("\nIntroduzca el número m: ");
    scanf(" %d",&m);
    if(m>0){
        printf("\nIntroduzca el número n: ");
        scanf(" %d",&n);
        if(m==n){
            int arreglo[m][n];
            int vectorA[m*2];
            int vectorB[m*2];
            k=0;
            l=m*2;
            elementoMaxA=0, elementoMaxB=0;
            for(i=0;i<m;i++){
             for(j=0;j<n;j++){
                 printf("Introduzca el valor [%d][%d]: ",i+1,j+1);
                 scanf(" %d",&arreglo[i][j]);
                 if(arreglo[i][j]%2==0){
                     vectorA[k]=arreglo[i][j];
                     if(vectorA[k]>elementoMaxA)
                     elementoMaxA=vectorA[k];
                     k++;
                 }
                 else if(arreglo[i][j]%2==1){
                     vectorB[l]=arreglo[i][j];
                     if(vectorB[l]>elementoMaxB)
                     elementoMaxB=vectorB[l];
                     l--;
                 }
             }
            }
            for(i=0;i<m;i++){
             for(j=0;j<m;j++){
                 printf("\nelemento [%d][%d]: %d",i+1,j+1, arreglo[i][j]);
             }
            }
            printf("\n\nVector A: ");
            for(i=0;i<k;i++)
                printf("%d ",vectorA[i]);
                printf("\n\nVector B: ");
            for(i=l+1;i<=m*2;i++)
                printf("%d ", vectorB[i]);
            printf("\n\nElemento mayor Vector A: %d\nElemento mayor Vector B: %d",elementoMaxA,elementoMaxB);
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
