

#include <stdio.h>


int fat(int);
int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial: %d\n", fat(n));

}

int fat(n) {
    if (n == 0) {
        n = 1;
        return  n;
    }else {
        return n * fat(n - 1);
    }

}