#include <stdio.h>
typedef struct Pessoa{
    char nome[50];
    int idade;
    float peso;
} Pessoa;

void printarStructs(Pessoa v[], int n){
    for(int i = 0; i < n; i++){
        int i1 = i + 1;
        printf("Nome da Pessoa [%d]: %s\n", i1, v[i].nome);
        printf("Idade da Pessoa [%d]: %d\n", i1, v[i].idade);
        printf("Nome  da Pessoa [%d]: %.2f\n", i1, v[i].peso);

    }
}


int main(){
    int n = 1;
    Pessoa v[n];

    for(int i = 0; i < n; i ++){
        printf("Digite o nome do aluno [%d]:", i + 1);
        scanf("%s", v[i].nome);

        printf("Digite a idade do aluno [%d]:", i + 1);

        scanf("%d", &v[i].idade );
        printf("Digite o peso do aluno [%d]:", i + 1);

        scanf("%f", &v[i].peso);

    }

    printarStructs(v, n);


}
//Tipo estrutura
// Typedef
// Enum
// Alocação de memória
// Módulo
// Principal Estudar Alocação Dinâmica
