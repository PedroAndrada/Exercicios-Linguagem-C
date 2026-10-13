#include <stdio.h>
#define tam 3

float situacao(float media){
	if(media > 7){
		return 1;
	}
	else if(media >= 5 && media <7){
		return 2;
	}
	else{
		return 0;
	}
}

int main(){
	int i;
	float vetAluno[tam], mediaAluno;
	
	for(i=0;i<tam;i++){
		printf("Digite a %da nota do aluno: ", i+1);
		scanf("%f", &vetAluno[i]);
	}
	
	
}