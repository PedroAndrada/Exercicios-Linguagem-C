#include <stdio.h>
#define TAM 3

struct Carro{
	
	char Modelo[70];
	float Valor;
};

void lerDados(struct Carro *Vet, int tam){
	int i;
	
	printf("Precione ENTER para iniciar o programa...");
	for(i=0;i<tam;i++){
		getchar();
		printf("\nDigite o modelo do %do carro: ", i+1);
		gets(Vet[i].Modelo);
		
		printf("Digite o valor do %do carro: ", i+1);
		scanf("%f", &Vet[i].Valor);
	}
}

int maiorValor(struct Carro *Vet, int tam){
	int i;
	int maior = 0;
	for(i=1;i<tam;i++){
		if(Vet[i].Valor>Vet[maior].Valor){
			maior = i;
		}
	}
	return maior;
}

int main(){
	struct Carro carros[TAM];
	
	lerDados(carros,TAM);
	
	int pos = maiorValor(carros,TAM);
	
	printf("\nCarro mais caro: ");
	printf("\nModelo: %s\n", carros[pos].Modelo);
	printf("Valor: %.2f", carros[pos].Valor);
	
}