#include <stdio.h>
#define TAM 3

struct Aluno{
	char Nome[70];
	float Nota;
};

int alunoAprovado(struct Aluno *Vet, int tam){
	int quantAlunosAprovados = 0;
	int i;
	for(i=0;i<tam;i++){
		if(Vet[i].Nota >=6){
			quantAlunosAprovados ++;
		}
	}
	return quantAlunosAprovados;
}

int main(){
	struct Aluno alunos[TAM];
	int i;
	
	printf("Aperte ENTER para iniciar o programa...");
	for(i=0;i<TAM;i++){
		getchar();
		printf("\nDigite o nome do %do aluno: ", i+1);
		gets(alunos[i].Nome);
		
		printf("Digite a nota do %do aluno: ", i+1);
		scanf("%f", &alunos[i].Nota);
	}
	
	
	
	printf("foram aprovados %d alunos", alunoAprovado(alunos,TAM));
} 


