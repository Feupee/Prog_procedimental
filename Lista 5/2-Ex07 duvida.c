#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, j, k, l;
    int matriz[5][5];

    srand(time(NULL));
                                // como que ajusta essa bomba aí?
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand() % 99;
                for(k = 0; k < 5; k++){
                    for(l = 0; l < 5; l++){
                        if(i != k && j != l){
                            if(matriz[i][j] == matriz[k][l]){
                                printf("numero igual: %i\n", matriz[i][j]);
                                i--;
                                break;
                            }
                        }
                    } 
                }
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            printf("[%-2i]", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}