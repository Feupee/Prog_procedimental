#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char vet[200];
    int i, k;

    printf("Digite a string: ");
    gets(vet);

    k = strlen(vet);

    for(i = 0; i < k; i++){

        if(vet[i] == ' '){
            printf("%c", vet[i]);
            }

        if(vet[i] >= 'A' && vet[i] <= 'Z' || vet[i] == ' '){
            if(vet[i] == 'X'){
                vet[i] = 'A';
                printf("%c", vet[i]);
            }
            else if(vet[i] == 'Y'){
                vet[i] = 'B';
                printf("%c", vet[i]);
            }
            else if(vet[i] == 'Z'){
                vet[i] = 'C';
                printf("%c", vet[i]);
            }
            else{
                printf("%c", vet[i]+3);
            }
        } 
        
        }
        if(vet[i] >= 'a' && vet[i] <= 'z'){
            if(vet[i] == 'x'){
                vet[i] = 'a';
                printf("%c", vet[i]);
            }
            else if(vet[i] == 'y'){
                vet[i] = 'b';
                printf("%c", vet[i]);
            }
            else if(vet[i] == 'z'){
                vet[i] = 'c';
                printf("%c", vet[i]);
            }
            else{
                printf("%c", vet[i]+3);
            }
        } 
    printf("\n");
    for(i = 0; i < k; i++){
        printf("%c", vet[i]+3);
    }
    printf("\n");

    return 0;
}