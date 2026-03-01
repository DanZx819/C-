#include <stdlib.h>

int fatorial(int n);

int main(){
    int fat = fatorial(5);
    
}

int fatorial(int n){
    int fat = n * fatorial(n - 1);
    int fatM = n - 1;
    printf("Fatorial: %d * %d", n, fatM);
    return fat;
}