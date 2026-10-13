#include <stdio.h>
#define vendedores 10


int main(){
	int i, vendedores_destaque = 0;
	int vendas[vendedores];
	float media, soma = 0;
	
	for(i=0;i<vendedores;i++){
		printf("Digite o valor total de vendas do %do vendedor: ", i+1);
		scanf("%d", &vendas[i]);
		soma += vendas[i];
	}
	
	media = soma / vendedores;
	
	for(i=0;i<vendedores;i++){
		
	if(vendas[i]>media){
		vendedores_destaque++;
	}
	
	}
	
	
	
	printf("Tivemos %d vendedores destaque", vendedores_destaque);
}