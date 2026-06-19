#include <stdio.h>

int main(){

int i;
int num[12];
int par = 0;

for ( i = 0; i < 12; i++)
{
    printf("digite um numero: ", i);
    scanf("%d", &num[i]);

}

for ( i = 0; i < 12; i++)
{
    if (num[i] %2 == 0)
    {
        par++;
    }
    
}

printf("sua quantidae de pares: %d", par);




    return 0;
}
