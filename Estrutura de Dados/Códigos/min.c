#include <stdio.h>

long fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * fat(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%ld\n", fat(n));
}
