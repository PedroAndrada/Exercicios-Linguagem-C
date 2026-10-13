#include <stdio.h>

int main(){
	int i, num, maior;
	
	for(i = 0;i<5;i++){
		printf("Digite o %do numero: ", i + 1);
		scanf("%d", &num);
		
		if(i == 0){
		maior = num;
	}
	else if(num > maior){
		maior = num;
	}
	}
	
	
	printf("O maior numero e: %d", maior);
	
	
}