#include <stdio.h>

int main(){

    int i;
    int num[8];

    for ( i = 0; i < 8; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[i]);
    }
    
for ( i = 8; i >=0; i--)
{
    printf("%d\n", num[i]);
}


    return 0;
}
