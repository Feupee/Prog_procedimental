#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    char endereco[100];
    char telefone[15];
}dados;

int main(){

    dados c[3];
    dados temp;
    int i, j;

    for(i = 0; i < 5; i++){
        printf("Digite o nome pessoa %i: ", i);
        setbuf(stdin, NULL);
        fgets(c[i].nome, 50, stdin);
        printf("Digite o endereco pessoa %i: ", i);
        setbuf(stdin, NULL);
        fgets(c[i].endereco, 100, stdin);
        printf("Digite o telefone pessoa %i: ", i);
        setbuf(stdin, NULL);
        fgets(c[i].telefone, 15, stdin);
    }

    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if (strcmp(c[i].nome, c[j].nome) < 0) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("Pessoas em ordem alfabetica:\n");
    for (i = 0; i < 5; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: %s", c[i].nome);
        printf("Endereco: %s", c[i].endereco);
        printf("Telefone: %s", c[i].telefone);
        printf("\n");
    }

    return 0;
}