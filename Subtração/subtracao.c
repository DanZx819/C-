#include  <stdio.h>
#include <stdlib.h>

int sub(int, int);

int main() {
        int a, b;
        printf("Digite os dois números:\n");
        scanf("%d %d", &a, &b);

        int z = sub(a, b);
        printf("%d\n", z);
        return 0;
}

int sub(int x, int y) {
        return x - y;
}