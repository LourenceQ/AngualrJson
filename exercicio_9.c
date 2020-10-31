/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[6], i, cont=1, n;
    
    printf("Você precisa digitar 6 valores pares \n");
    while(cont < 6)
    {
        scanf("%d",&n);
        if(n%2 == 0)
        {
            n = vet[i];
            cont = cont + 1;
        }
        else
        {
        printf("Informe outro numero\n");
        }
    }
    /////////////
    
    for(i=0;i<6;i++)
    {
        scanf("%d",&vet[n]);
    } 
    
    
    
    
    
    return 0;
}
