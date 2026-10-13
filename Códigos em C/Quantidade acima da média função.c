#include <stdio.h>
#define TAM 3

struct Funcionario{
	char Nome[70];
	float Salario;
};

float mediaSalario(struct Funcionario *Vet, int tam){
	int i;
	float soma = 0;
	float media = 0;
	for(i=0;i<tam;i++){
		soma = soma+Vet[i].Salario;
	}
	media = soma/tam;
	return media;
}

int acimaMedia(struct Funcionario *Vet, int tam, float media){
	int Quant = 0;
	int i;
	for(i=0;i<tam;i++){
		if(Vet[i].Salario > media){
			Quant ++;
		}
	}
	return Quant;
}

int main(){
	int i;
	struct Funcionario funcionarios[TAM];
	
	printf("Precione ENTER para iniciar...");
	for(i=0;i<TAM;i++){
		getchar();
		printf("\nDigite o nome do %do funcionario: ", i+1);
		gets(funcionarios[i].Nome);
		printf("Digite o salario do %do funcionario: ", i+1);
		scanf("%f", &funcionarios[i].Salario);
	}
	
	float Media = mediaSalario(funcionarios,TAM);
	int qnt = acimaMedia(funcionarios,TAM,Media);
	
	printf("\nA media e: %.2f", Media);
	printf("\nAcima da media: %d", qnt);
}