//
// Created by danzx17 on 03/09/2025.
//
#include  <stdio.h>
#include <stdlib.h>

int soma(int, int);

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int z = soma(a, b);
    printf("%d\n", z);
    return 0;
}
int soma(int x, int y) {
    return x + y;
}