#include <stdio.h>


/* Interface de Numero */
typedef struct {
    long int (*potencia)(long int base, long int expoente);
} InterfaceCalculadora;

/* Função recursiva de potência */
long int calcularPotencia(long int base, long int expoente) {

    /* Se for 0 */
    if (expoente == 0) {
        return 1;
    }

    /* Chamando a Função de novo */
    return base * calcularPotencia(base, expoente - 1);
}

int main() {

    long int base;
    long int expoente;

    InterfaceCalculadora calc;

    /* ligando a função na interface */
    calc.potencia = calcularPotencia;

    printf("Digite a base: ");
    scanf("%ld", &base);

    printf("Digite o expoente: ");
    scanf("%ld", &expoente);

    long int resultado = calc.potencia(base, expoente);

    printf("Resultado: %ld\n", resultado);

    return 0;
}