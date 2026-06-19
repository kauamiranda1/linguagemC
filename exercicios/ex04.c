#include <stdio.h>

int main(){

int i;
int vetor[12];
int par = 0;

for ( i = 0; i < 12; i++)
{
    printf("digite um numero: ", i);
    scanf("%d", &vetor[i]);

}

for ( i = 0; i < 12; i++)
{
    if (vetor[i] %2 == 0)
    {
        par++;
    }
    
}

printf("sua quantidae de pares: %d", par);




    return 0;
}
