#include <stdio.h>

void setarArray(int v[], int t){
    for(int i = 0; i < t; i++){
       int num = 0;
       printf("Número %d:", i + 1);
       scanf("%d", &num);
       v[i] = num;
    }
}

void printarArray(int v[], int t){
    printf("[");
    for(int i = 0; i < t; i++){
        printf("%d,", v[i]);
    }
     printf("]\n");
}

void inverterArray(int v[], int t){
    for(int i = 0; i < t / 2; i++){
        int temp = v[i];
        v[i] = v[t - 1 - i];
        v[t- 1 - i] = temp;
    }
    printarArray(v,t);
}

int main (){
    int t = 5;
    int v[t];

    setarArray(v,t);
    printarArray(v,t);
    inverterArray(v,t);

}
