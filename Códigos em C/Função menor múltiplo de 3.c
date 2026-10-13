#include <stdio.h>

int menorMultiploDe3(int n){
	int multiplo = 3;
	
	while(multiplo < n){
		multiplo = multiplo+3;
	}
	
	return multiplo;
}

int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("O menor multiplo de 3 desse numero e: %d", menorMultiploDe3(num));

}