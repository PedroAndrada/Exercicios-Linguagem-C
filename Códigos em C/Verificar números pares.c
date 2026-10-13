#include <stdio.h>
#define quantidade 5

int main(){
	int i, num, num_par = 0;
	
	for(i = 0; i<quantidade; i++){
		
		printf("Digite o %do numero: ", i + 1);
		scanf("%d", &num);
		
		if(num %2 == 0){
			num_par++;
		}
			
	}
	
	printf("A quantidade de numeros pares e: %d", num_par);
}