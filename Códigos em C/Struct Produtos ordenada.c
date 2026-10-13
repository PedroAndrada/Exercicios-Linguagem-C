#include <stdio.h>
#define Tam 4

struct Produto{
	
	char nome[70];
	float preco;
};

void OrdenaProdutos(struct Produto *Vet, int tam){
	struct Produto aux;
	int i, j;
	for(i=0;i<tam-1;i++){
		for(j=i+1;j<tam;j++){
			if(Vet[i].preco < Vet[j].preco){
				aux = Vet[i];
				Vet[i] = Vet[j];
				Vet[j] = aux;
			}
		}
	}
}

int main(){
	struct Produto produtos[Tam];
	int i;
	
	printf("Precione Enter para iniciar o programa...");
	for(i=0;i<Tam;i++){
		getchar();
		printf("\nDigito o nome do %do produto: ", i+1);
		gets(produtos[i].nome);
		
		printf("Digite o preco do %do produto:", i+1);
		scanf("%f", &produtos[i].preco);
		
	}
	
	OrdenaProdutos(produtos,Tam);
	
	for(i=0;i<Tam;i++){
		printf("\nNome: %s\n", produtos[i].nome);
		printf("Preco: %.2f\n", produtos[i].preco);
}

}

