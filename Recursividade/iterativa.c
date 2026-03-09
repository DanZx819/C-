#include  <stdio.h>

int fat(int);

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    int fatorial = fat(n);
    printf("Fatorial = %d\n", fatorial);
}

int fat(xv) {
    for (int i = x - 1; i > 0; i--) {
        xv *= i;
    }
    return xv;
}