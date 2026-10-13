#include <stdio.h>
#define  tamanho 5

int main(){
	int vetor[tamanho], numpar = 0;
	
	for(int i = 0; i<tamanho; i++){
		printf("Digite o %do numero: ", i + 1);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] %2 == 0){
			numpar ++;
		}
	}
	
	printf("A quantidade de numeros pares e: %d", numpar);
}