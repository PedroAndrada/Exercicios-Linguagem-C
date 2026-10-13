#include <stdio.h>

int main(){
	int num;
	int i;
	
	printf("Escolha um numero para ver sua tabuada: ");
	scanf("%d", &num);
	
	printf("\n Tabuada de %d \n", num);
	
	for(i=1; i <=10; i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}
}