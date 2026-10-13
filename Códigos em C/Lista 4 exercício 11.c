#include <stdio.h>
#define vendedores 20


int main(){
	int vetor[vendedores],i,vendas, vendedores_mais_cinco = 0;
	
	for(i =0; i<vendedores;i++){
		printf("Vendas do %do vendedor: ", i + 1);
		scanf("%d", &vendas);
		
		if(vendas > 5){
			vendedores_mais_cinco++;
		}
	}
	
	printf("%d vendedores fizeram mais de 5 vendas", vendedores_mais_cinco);
}