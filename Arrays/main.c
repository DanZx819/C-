#include <stdio.h>

int min (int*, int);
int max(int*, int);
int sumVet(int*, int);
int en(int*, int);
float media(int*, int);
int main() {
    int v[100] = {10, 20, 30, 40, 50,100,0};
    printf("Menor: %d", min(v, 100));
    printf("Maior: %d", max(v, 100));
    printf("Soma: %d", sumVet(v, 100));
    printf("Energia: %d", en(v, 100));
    printf("Média %.2f", media(v, 100));
}

int min(int* v, int s) {
    int x = v[0];
    for (int i = 1; i < s; i++ ) {
        if (v[i] < x) {
            x = v[i];
        }
    }
    return x;
}

int max(int* v, int s) {
    int x = v[0];
    for (int i = 1; i < s; i++ ) {
        if (v[i] > x) {
            x = v[i];
        }
    }
    return x;
}

int sumVet(int* v, int s) {
    int sum = 0;

    for (int i = 0; i < s; i++ ) {
        sum += v[i];
    }

    return sum;
}

int en(int* v, int s) {
    int sum = v[0] * v[0];

    for (int i = 0; i < s; i++ ) {
        sum += v[i] * v[i];
    }
    return sum;
}

float media(int* v, int s) {
    float sum = 0;

    for (int i = 0; i < s; i++ ) {
        sum += v[i];
    }

    return sum/s;
}