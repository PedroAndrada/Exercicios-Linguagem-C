#include <stdio.h>
#define tam 3

struct Aluno{
	
	char Nome[70];
	float Nota;
};

int main(){
	int i,j;
	struct Aluno alunos[tam], aux;
	
	for(i=0;i<tam;i++){
		printf("Digite o nome do %do aluno: ", i+1);
		scanf(" %s", alunos[i].Nome);
		
		printf("Digite a nota do %do aluno: ", i+1);
		scanf("%f", &alunos[i].Nota);
	}
	
	for(i=0;i<tam-1;i++){
		for(j=i+1;j<tam;j++){
			if(alunos[i].Nota<alunos[j].Nota){
				aux = alunos[i];
				alunos[i] = alunos[j];
				alunos[j] = aux;
			}
		}
	}
	
	for(i=0;i<tam;i++){
	printf("Nome: %s", alunos[i].Nome);
	
	printf("Nota: %.nf\n", alunos[i].Nota);
}

}



