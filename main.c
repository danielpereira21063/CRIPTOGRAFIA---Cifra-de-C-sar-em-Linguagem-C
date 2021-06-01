#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode(char *string, int key);
void decode(char *string, int key);

int main() {
    char string[255];
    int op;
    int key = 1;
    system("cls");
    printf("DIGITE A STRING: ");
    fgets(string, sizeof(string), stdin);
    system("cls");
    printf("ESCOLHA A OPCAO DESEJADA: \n");
    printf("[0] - Sair\n");
    printf("[1] - Criptografar\n");
    printf("[2] - Descriptografar\n");
    printf("Digite: ");
    scanf("%i", &op);

    switch(op) {
        case 0:

        break;

        case 1:
            encode(string, key);
        break;
            decode(string, key);
        case 2:

        break;

        default:
            printf("Opção inválida!");
    }
    return 0;
}

void encode(char* string, int key) {
    int i=0;
    int size;
    char cesar;
    while(string[i] != '\0' && strlen(string)-1 > i) {
        size = ((int)string[i]-97 + key) % 26 + 97;
        cesar = (char)(size);
        printf("%c", cesar);
        i++;
    }
}

void decode(char* string, int key) {
    int i=0;
    int size;
    char cesar;
    while(string[i] != '\0' && strlen(string)-1 > i) {
        size = ((int)string[i]-97 - key) % 26 + 97;
        cesar = (char)(size);
        printf("%c", cesar);
        i++;
    }
}