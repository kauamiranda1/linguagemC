#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// -------------------------------
float ret_media(int v[], int n);
int ret_menor(int v[], int n);
int ret_maior(int v[], int n);
int ret_soma(int v[], int n);
int ret_passou(int v[], int n);

// -------------------------------

float ret_media(int v[], int n){
    float media;
    int res = ret_soma(v, n);

    return res/n;

}

int ret_passou(int v[], int n){
    int qtd;
    for (int i = 0; i < n; i++)
    {
        if (v[i]>6)
        {
            qtd++;
        }
        
    }
    
    return qtd;
}

int ret_soma(int v[], int n){
    int soma =0;
    for (int i = 0; i < n; i++)
    {
        soma += v[i];
    }
    
    return soma;

}

int ret_maior(int v[], int n){
    int maior = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]>maior)
        {
            maior = v[i];
        }
        
    }
    return maior;

}
int ret_menor(int v[], int n){
    int menor = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i]<menor)
        {
            menor = v[i];
        }
        
    }
    return menor;

}

int main(){

    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("media: %.2f\n", ret_media(vetor,5));
    printf("maior nota: %d\n", ret_maior(vetor,5));
    printf("menor nota: %d\n", ret_menor(vetor,5));
    printf("notas: %d", ret_soma(vetor,5));
    printf("notas: %d", ret_passou(vetor,5));

}
