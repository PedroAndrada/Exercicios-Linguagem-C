#include <stdio.h>
#define TAM 3

struct Livro{
	char titulo[70];
	float preco;
};

void ordenarLivros(struct Livro *Vet, int tam){
	int i, j;
	struct Livro aux;
	
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
	struct Livro livros[TAM];
	int i;
	
	printf("Aperte ENTER para iniciar...");
	for(i=0;i<TAM;i++){
		getchar();
		printf("\nDigite o titulo do %do livro: ", i+1);
		gets(livros[i].titulo);
		printf("Digite o preco do %do livro: ", i+1);
		scanf("%f", &livros[i].preco);
	}
	
	ordenarLivros(livros,TAM);
	
	for(i=0;i<TAM;i++){
		printf("\nTitulo: %s", livros[i].titulo);
		printf("\nPreco: %.2f", livros[i].preco);
	}
	
}