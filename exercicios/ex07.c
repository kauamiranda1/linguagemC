#include<stdio.h>

int main(){

int i;
float num[20];
float soma = 0;
float media;
float maior;
float menor;
int acima = 0;


for ( i = 0; i < 20; i++)
{
    printf("Digite a nota do aluno(a):");
    scanf("%f", &num[i]);
    soma = soma + num[i];
}
media = soma/20;
maior = num[0];
menor = num[0];

for ( i = 1; i < 20; i++)
{
if (num[i]>maior)
{
    maior = num[i];
}
if (num[i]<menor)
{
    menor = num[i];
}

    for ( i = 0; i < 20; i++)
    {
        if (num[i] > media)
        {
            acima++;
        }
        
    }

    printf("Essa é a media da turma: %.2f\n", media);
    printf("Essa foi a maior nota: %.2f\n", maior);
    printf("Essa foi a menor nota: %.2f\n", menor);
    printf("Quantos ficaram acima da media: %d", acima);
    

}



    return 0;
}
