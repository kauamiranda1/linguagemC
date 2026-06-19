#include<stdio.h>


int main(){
int i;
int vetor[10];
int n1;
int achado = 0;

for ( i = 0; i < 10; i++)
{
    printf("digite seus 10 numeros: ", i);
    scanf("%d", &vetor[i]);
}

    printf("digite o numero para procurar: ");
    scanf("%d", &n1);

for ( i = 0; i < 10; i++)
{
    if (vetor[i]==n1)
    {
        achado=1;
    }
    
}
if (achado==1)
{
    printf("o numero %d esta presente na ordem!!", n1);
} else{
    printf("o numero %d nao esta na ordem", n1);
}





    return 0;
}
