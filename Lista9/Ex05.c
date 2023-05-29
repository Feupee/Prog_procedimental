#include <stdio.h>
#include <string.h>

int main(){

    char string1[50], string2[50];
    char *ptr_string1 = string1, *ptr_string2 = string2;

    printf("Digite a string1: ");
    fgets(ptr_string1, 50, stdin);
    fflush(stdin);

    printf("Digite a string2: ");
    fgets(ptr_string2, 50, stdin);
    fflush(stdin);

    

    if(strcmp(string1, string2) == 0){
        printf("String2 eh igual a String1\n");
        printf("\nString1: %s", ptr_string1);
        printf("String2: %s", ptr_string2);
    }

    if(strlen(string1) < strlen(string2)){
        printf("String2 eh maior que string1, logo String2 nao pertence a String1");
        printf("\nString1: %s", ptr_string1);
        printf("String2: %s", ptr_string2);
    }   

    return 0;
}