#include <stdbool.h>
#include <stdio.h>

int main(void) {

    int c = 1;
    while (c > 0) {
        if (c == 1) {
            printf("Quantas notas você quer ver [0 para sair]:");
            scanf("%d", &c);
        }

        for (c; c > 0; c--) {
            float nota;

            printf("Digite a sua nota:");
            scanf("%f", &nota);

            if (nota > 6) {
                printf("Aprovado com sua nota: %.2f\n", nota);
            }else {
                printf("Reprovado com sua nota: %.2f\n", nota);
            }
        }

    }


    return 0;
}

