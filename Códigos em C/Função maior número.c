#include <stdio.h>


int maiorNumero(int*numero_1, int *numero_2){
	if(numero_1 > numero_2){
		return numero_1;	 
	}
	else{
		return numero_2;
	}
}

int main(){
	int n1, n2, maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número:  ");
	scanf("%d", &n2);
	
	maior = maiorNumero(n1,n2);
	
	printf("O maior numero e: %d", maior);
	
	
	
	
}