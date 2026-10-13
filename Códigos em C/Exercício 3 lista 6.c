#include <stdio.h>
#define tam 10

//Um gerente de estoque precisa consolidar o inventário de duas unidades de distribuição (Centro
//A e Centro B) que possuem os mesmos 10 itens. Leia a quantidade de cada item em cada centro
//e imprima a quantidade total disponível na rede para cada produto.
//Um gerente de estoque precisa consolidar o inventário de duas unidades de distribuição (Centro
//A e Centro B) que possuem os mesmos 10 itens. Leia a quantidade de cada item em cada centro
//e imprima a quantidade total disponível na rede para cada produto.

int main(){
	
	int vetor_a[tam];
	int vetor_b[tam];
	int total;
	int i;
	
	for(i = 0; i < tam; i++){
		
		printf("Digite a quantidade do %do item do centro a: ", i + 1);
		scanf("%d", &vetor_a[i]);
	}
	for(i = 0; i < tam; i++){
	
		printf("Digite a quantidade do %do item do centro b: ", i + 1);
		scanf("%d", &vetor_b[i]);
	}
	for (i = 0; i < tam; i++){
		total = vetor_a[i] + vetor_b[i];
		
		printf(" \nA quantidade total do %do item e: %d ", i + 1, total);
		
	}
	
}



