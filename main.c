
#include <stdio.h>

int main()
{
    printf("Verifica Par e Impar\n");
    int n, quadrado, cubo;
    printf("Digite n: \n");
    scanf("%d", &n);
    quadrado = n*n;
    cubo = n*n*n;
    
    if(n % 2 == 0){
        
        printf("O numero eh par, seu quadrado eh: %d", quadrado);
    }
    else{
        
        printf("O numero eh impar, seu cubo eh: %d", cubo);
    }
    return 0;
}