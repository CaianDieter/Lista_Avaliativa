#include <stdio.h>

void main() {

    int senha , confi;

    scanf("%d", &senha);

    printf("senha cadastrada: %d\n", senha);

   scanf("%d", &confi);

    while (confi != senha) {
        printf("senha invalida!\n");
        scanf("%d", &confi);
    }
    printf("senha valida!\n");
}