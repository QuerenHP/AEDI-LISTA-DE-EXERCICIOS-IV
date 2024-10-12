#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    switch (idade) {
        case 0 ... 17:
            printf("Menor de idade\n");
            break;
        case 18 ... 65:
            printf("Maior de idade\n");
            break;
        default:
            if (idade > 65) {
                printf("Idoso\n");
            }
            break;
    }

    return 0;
}
