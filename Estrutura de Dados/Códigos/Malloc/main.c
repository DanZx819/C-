#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *array = NULL;
    int t = 0;
    int num;

    printf("Digite numeros (-1 para parar):\n");

    while(1){
        scanf("%d", &num);

        if(num == -1){
            break;
        }

        t++;

        array = realloc(array, tamanho * sizeof(int));

        if(array == NULL){
            printf("Erro de memoria!\n");
            return 1;
        }

        array[tamanho - 1] = num;
    }

    printf("\nNumeros digitados:\n");

    for(int i = 0; i < tamanho; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    free(array);

    return 0;
}