#include <stdio.h>
#include <string.h>

int main(){
	char palavra1[20], palavra2[20];
	
	printf("Digite a primeira palavra: ");
	gets(palavra1);
	
	printf("\nDigite a segunda palavra: ");
	gets(palavra2);
	
	if(strcmp(palavra1,palavra2)==0){
		printf("\nAs palavras sao iguais!");
	}
	else{
		printf("\nAs palavras sao diferentes!");
	}
}