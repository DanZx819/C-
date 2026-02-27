
#include <stdio.h>
#include <math.h>

void setarArray(float v[], int tamanho);
float mediaArray(float v[], int tamanho);
float varianciaArray(float v[], int tamanho);

int main()
{
    //Controlador de loop
	int c = -1;
	//Setando tamnho base
	int tamanho = 0;
	//Valor max para tamanho do array
	float vetor[100];
	
	while(c != 0){
	    //Menu 
	    printf("-----------------------------------\n");
	    printf("Setar Vetor [1]\n");
	    printf("Calcular Média e Variância [2]\n");
	    printf("Sair [0]\n");
	    printf("-----------------------------------\n");
	    scanf("%d", &c);
	    
	    //Se c for 1 retornar opção 1
	    if(c == 1){
	        
	        
	        printf("Digite o tamanho do Vetor (MAX 100 MIN 8)\n");
	        scanf("%d", &tamanho);
	        if(tamanho < 8 || tamanho > 100){
	            printf("Digite um tamanho válido\n");
	            c = -1;
	        }else{
	            setarArray(vetor, tamanho);
	        }
	        
	    }else if(c == 2){ //Se c for 2 retornar opção 2
	        float media = mediaArray(vetor, tamanho);
	        float variancia = varianciaArray(vetor, tamanho);
	        
	        printf("Média: %.2f\n", media);
	        printf("Variância: %.2f\n", variancia);
	    }else if(c == 0){//Se c for 0 Sair do programa
	        c = 0;
	    }else{//Se não for nenhum deles Mostrar comando inválido
	        printf("Comando invalido \n");
	    }
	    
	}
    
}

//Função para Setar os números do Array
void setarArray(float v[],int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    
}

//Função para Calcular a Média
float mediaArray(float v[], int tamanho){
    int total = 0;
    for(int i = 0; i < tamanho; i++){
        total += v[i];
    }
    float media = (float) total / tamanho;
    return media;
}
//Função para Calcular a Variância
float varianciaArray(float v[], int tamanho){
    float somaDosQuadrados = 0;
    float media = mediaArray(v, tamanho);
    for(int i = 0; i < tamanho; i++){
        somaDosQuadrados += pow((v[i] - media), 2);
    }
    float variancia = somaDosQuadrados / tamanho;
    return variancia;
}