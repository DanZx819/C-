#include <stdio.h>
#include <stdlib.h> // Necessário para rand() e srand()
#include <time.h>   // Necessário para time()

int numAl(){
    // Gera um número entre 1 e 25
    int numero = (rand() % 25) + 1;
    return numero;
}


//Setar arrayy com números diferentes
void setarArray(int v[], int n){
    
    
    int count = 0;
    while(count < n){
        int num = numAl();
        int rep = 0;
        for(int i = 0; i < n; i++ ){
            if(v[i] == num){
                rep = 1;
                break;
            }
        
        }
        
        if(!rep){
            v[count] = num;
            count++;
        }
    }
    
}
//Percorre e printa
void printarArray(int v[], int n){
    printf("[");
    for(int i = 0; i < n; i++){
        if(i == 14){
            printf("%d", v[i]);
        }else{
            printf("%d,", v[i]);
        }
    }
    printf("]");
}

int main()
{
    srand(time(NULL));//Pega o horario para ser "aleatório"
    int n = 15;//Tamanho
    int v[n];//Array
    setarArray(v,n);
    printarArray(v,n);

    return 0;
}