#include <stdio.h>

int maiorValor(int num1, int num2, int num3){
	if(num1>=num2 && num1>=num3 ){
		return num1;
	}
	else if(num2>=num1 && num2>=num3){
		return num2;
	}
	else{
		return num3;
	}
}

int main(){
	int n1, n2, n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	
	
	printf("O maior valor e: %d", maiorValor(n1,n2,n3));
}