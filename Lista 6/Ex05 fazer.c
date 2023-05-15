#include <stdio.h>

    struct vetor {
        float a;
        float b;
        float c;
    };

int main(){

    int i;
    struct vetor c[2];

    for(i = 0; i < 2; i++){
        printf("Digite float a: ");
        scanf("%f", &c[i].a);
        printf("Digite float b: ");
        scanf("%f", &c[i].b);
        printf("Digite float c: ");
        scanf("%f", &c[i].c);
    }
    for(i = 0; i < 2; i++){
        
    }

    return 0;
}
