#include <stdio.h>

int Potencia(int base, int expoente){
	int result = 1, i;
	for(i=1; i<=expoente;i++){
		result = result*base;
	}
	return result;
}

int main (){
	int b,e;
	
	printf("Digite a base:  ");
	scanf("%d", &b);
	printf("Digite o expoente:  ");
	scanf("%d", &e);
	
	printf("O resultado da potencia e:  %d", Potencia(b,e));
}