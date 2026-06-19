#include <stdio.h>

int main(){

    int i;
    int vetor[8];

    for ( i = 0; i < 8; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    
for ( i = 8; i >=0; i--)
{
    printf("%d\n", vetor[i]);
}


    return 0;
}
