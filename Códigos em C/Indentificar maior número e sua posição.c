#include <stdio.h>
#define tam 5

int main(){
	
	int vetor[tam], i, maiornum, posicao;
	
	for(i = 0; i<tam; i++){
		printf("Digite o %do numero: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i<tam; i++){
		if(i == 0){
			maiornum = vetor[i];
			posicao = i;
		}
		else if(vetor[i]>maiornum){
			maiornum = vetor[i];
			posicao = i;
		}
	}
	
	printf("O maio numero e %d e se encontra na posicao %d do vetor", maiornum, posicao);
}