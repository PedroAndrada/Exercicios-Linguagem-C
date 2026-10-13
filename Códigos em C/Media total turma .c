#include <stdio.h>
#define TAM 3

struct Aluno{
	
	char Nome[70];
	float Nota;
};

float mediaTurma(struct Aluno *Vet, int tam){
	int i;
	float soma = 0, media = 0;
	
	for(i=0;i<tam;i++){
		soma = soma + Vet[i].Nota;
	}
	media = soma/tam;
	
	return media;
}

int main(){
	int i;
	struct Aluno turma[TAM];
	
	printf("Pressione ENTER para iniciar o programa...");
	for(i=0;i<TAM;i++){
		getchar();
		printf("\nDigite o nome do %do aluno: ", i+1);
		gets(turma[i].Nome);
		
		printf("Digite a nota do %do aluno: ", i+1);
		scanf("%f", &turma[i].Nota);
		
	}
	
	printf("\nA media da turma e: %.2f", mediaTurma(turma,TAM));
}