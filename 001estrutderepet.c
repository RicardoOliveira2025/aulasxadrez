#include <stdio.h>

int main(){

    int numero;

    do {

        printf("Digite um numero par para sair do programa...");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d eh par", numero);
        } else {
            printf("%d eh impar", numero);
        }

    } while (numero % 2 != 0);

    return 0;
}
