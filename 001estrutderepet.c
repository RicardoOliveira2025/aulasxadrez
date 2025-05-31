#include <stdio.h>

int main(){

    int numero;

    do {

        printf("Digite um numero par para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d eh par \n", numero);
        } else {
            printf("%d eh impar \n", numero);
        }

    } while (numero % 2 != 0);

    printf("Voce digitou um numero par, saindo do programa...\n");

    return 0;
}
