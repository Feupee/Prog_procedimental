#include <stdio.h>

int main(){

    int vet1[8];
    int i, x, y;
    for(i = 0; i < 8; i++){
        printf("Digite o valor %i: ", i);
        scanf("%i", &vet1[i]);
    }

    printf("Digite o valor de x(0-7): ");
    scanf("%i", &x);

    printf("Digite o valor de y(0-7): ");
    scanf("%i", &y);

    int soma = vet1[x] + vet1[y];

    printf("A soma eh: %i", soma);



    return 0;
}