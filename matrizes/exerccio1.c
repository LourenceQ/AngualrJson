/******************************************************************************
1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int mat[4][4];
    int i,j,a,cont;
    
    for(i=0;i<4;i++){
        for(j=1;j<=4;j++){
            
            printf("i[%d] j[%d] = ",i,j);
            scanf("%d",&mat[i][j]);            
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=1;j<=4;j++){
         if(mat[i][j] > 10 ){
             cont++;
         }
        }
    }
        
    
    printf("\n");
    printf("%d",cont);
    return 0;
}
