#include <stdio.h>
#include <stdlib.h>

int main (){

    int num[15];
    int maior;
    int i;

    
    for ( i = 0; i < 15; i++)
    {
        printf("digite um numero de 1 a 15: ");
        scanf("%d", &num[i]);
    }
    
    maior = num[0];
    
    for ( i = 1; i < 15; i++)
    {
        if (num[i]>maior)
        {
            maior=num[i];
             }


        
    }

    printf("seu maior numero: %d", maior);

    return 0;
}
