#include <stdio.h>

//Crie uma função chamada ehPositivo que receba um número inteiro como parâmetro. A função
//deve retornar 1 se o número for maior que zero e 0 caso contrário. Na função main, peça um
//número ao usuário, chame a função e imprima 'Valor Aceito' ou 'Valor Negado' com base no
//retorno.

int ehPositivo(int num1){
	if(num1 > 0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int numero, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	resultado = ehPositivo(numero);
	
	printf("\n%d", resultado);
}