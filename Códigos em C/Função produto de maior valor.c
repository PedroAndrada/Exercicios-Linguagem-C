#include <stdio.h>
#define TAM 4

struct Produto{
	
	char Nome[70];
	float Preco;
	int Quantidade;
};

int maiorValorTotal(struct Produto *Vet, int tam){
	int i;
	int maior = 0;
	float total, maiorTotal;
	
	maiorTotal = Vet[0].Preco * Vet[0].Quantidade;
	
	for(i=0;i<tam;i++){
		total = Vet[i].Preco * Vet[i].Quantidade;
	if(total > maiorTotal){
		maiorTotal = total;
		total = i;
	}
	}
	
	return maior;
	
	
}

int main(){
	struct Produto produtos[TAM];
	int i;
	
	printf("Aperte ENTER para iniciar o programa...");
	for(i=0;i<TAM;i++){
		getchar();
		printf("\nDigite o nome do %do produto: ", i+1);
		gets(produtos[i].Nome);
		
		printf("Digite o preco do %do produto: ", i+1);
		scanf("%f", &produtos[i].Preco);
		
		printf("Digite a quantidade do %do produto: ", i+1);
		scanf("%d", &produtos[i].Quantidade);
	}

	int pos = maiorValorTotal(produtos,TAM);
	float Total = produtos[pos].Preco * produtos[pos].Quantidade;
	
	printf("Produto de maior valor\n");
	printf("Nome: %s\n", produtos[pos].Nome);
	printf("Valor: %.2f", Total);
}

