
#include <stdio.h>

float mostrarSaldo(float saldo);

float adicionarSaldo(float saldo, float valor);

float removerSaldo(float saldo, float valor);


int main()
{
    int c = 1;
    float saldo = 0;
    while(c > 0){
        printf("Mostrar Saldo Atual [1]\n");
        printf("Adicionar Saldo [2]\n");
        printf("Remover Saldo [3]\n");
        printf("Sair do programa [0]\n");
        scanf("%d", &c);
        
        if(c == 1){
            printf("Você escolheu a ação [1]\n");
            mostrarSaldo(saldo);
        }else if(c == 2){
            printf("Você escolheu a ação [2]\n");
            float add = 0;
            printf("Digite o valor a ser adicionado:\n");
            scanf("%f", &add);
            
            saldo = adicionarSaldo(saldo, add);
            mostrarSaldo(saldo);
        }else if(c == 3){
            printf("Você escolheu a ação [3]\n");
            float sub = 0;
            printf("Digite o valor a ser removido:\n");
            scanf("%f", &sub);
            
            saldo = removerSaldo(saldo, sub);
            mostrarSaldo(saldo);
        }else if(c == 0){
            printf("Você escolheu a ação [0]\n");
            printf("Finalizando programa!\n");
            c = 0;
        }else{
            printf("Você escolheu a ação [%d]\n", c);
            printf("Operação inválida\n");
        }
        
        
    }
}

float mostrarSaldo(float a){
    return printf("Saldo atual da conta R$ %.2f \n", a);
}

float adicionarSaldo(float saldo, float valor){
    saldo += valor;
    return saldo;
}

float removerSaldo(float saldo, float valor){
    saldo -= valor;
    return saldo;
}