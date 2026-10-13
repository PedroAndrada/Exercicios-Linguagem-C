#include <stdio.h>
#define TAM 4


struct Aluno{
	char nome[70];
	float nota;
};


int menorNota(struct Aluno *Vet, int tam){
	int i;
	int menor = 0;
	
	for(i=1;i<tam;i++){
		if(Vet[i].nota < Vet[menor].nota){
			menor = i;
		}
	}
	return menor;
}

int main(){
	struct Aluno alunos[TAM];
	int i;
	
	
	for(i=0;i<TAM;i++){
		getchar();
		printf("Digite o nome do %do Aluno: ", i+1);
		gets(alunos[i].nome);
		
		printf("Digite a nota do %do Aluno: ", i+1);
		scanf("%f", &alunos[i].nota);
	}
	
	int pos = menorNota(alunos, TAM);
	
	printf("Aluno com menor nota\\n");
	printf("Nome: %s\n", alunos[pos].nome);
	printf("Nota: %.2f", alunos[pos].nota);
	
}