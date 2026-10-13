#include <stdio.h>
#define TAM 3

struct Produto{
	
	char nome[70];
	float preco;
	
};

float somaPrecos(struct Produto *Vet, int tam){
	int i;
	float precoTotal = 0;
	
	for(i=0;i<tam;i++){
		precoTotal = precoTotal + Vet[i].preco;
	}
	
	return precoTotal;
	
}

int main(){
	int i;
	struct Produto produtos[TAM];
	
	printf("Aperte ENTER para iniciar...");	
	for(i=0;i<TAM;i++){
		getchar();
		printf("Digite o nome do %do produto: ", i+1);
		gets(produtos[i].nome);
		
		printf("Digite o preco do %do produto: ", i+1);
		scanf("%f", &produtos[i].preco);
	}
	
	printf("A soma de todos valores e: %.2f", somaPrecos(produtos,TAM));
	
}