#include <stdio.h>

void dobroTriplo(int num, int *dobro, int *triplo){
	*dobro = num * 2;
	*triplo = num * 3;
}

int main(){
	int N, dobroNum, triploNum;
	
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	dobroTriplo(N, &dobroNum, &triploNum);
	
	printf("O dobro desse numero e: %d", dobroNum);
	printf("\nO triplo desse numero e: %d", triploNum);
}