#include <stdio.h>
#define tamanho 5


int main(){
	int vetor[tamanho], i, menornum, posicao;
	
	for(i = 0; i <tamanho; i++){
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &vetor[i]);
		 if (vetor[i] < menornum){
		menornum = vetor[i];
		posicao = i;
	}
	}
	
	
	
	
	printf("O menor numero e %d e esta na posicao %d", menornum,posicao);
	
}