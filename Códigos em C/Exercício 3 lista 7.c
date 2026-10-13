#include <stdio.h>

//Crie uma função chamada obterMenor que receba dois números inteiros e retorne o menor
//deles. Na função main, peça dois valores distintos ao usuário, chame a função passando esses
//valores e imprima a mensagem: 'O menor valor informado foi: [resultado]'

int obterMenor(int num1, int num2){
	if(num1<num2){
		return num1;
	}
	else{
		return num2;
	}
}

int main(){
	int i, n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
		
	printf("O menor numero informado foi: %d", obterMenor(n1,n2));
	

}
