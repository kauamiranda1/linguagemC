#include <stdio.h>
#include <stdlib.h>

int main(){
  
    char conc[10];
    scanf("%c", conc);
    switch (conc[0])
    {
    case 'A':
        printf("Excelente");
        break;
    case 'B':
        printf("Bom");
        break;
    case 'C':
        printf("Regular");
        break;
    case 'D':
        printf("Insuficiente");
        break;
    
    default:
        printf("Nao passou");
        break;
    }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;}
