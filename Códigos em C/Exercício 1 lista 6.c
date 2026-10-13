#include <stdio.h>
#define tam 10



//Faça um programa que leia e imprima o resultado da soma entre dois vetores inteiros de 10
//posições.

int main(){
	int vet_1[tam], vet_2[tam], resultado[tam], i;
	
	for(i=0;i<tam;i++){
		printf("\nDigite os numeros do primeiro vetor:  ");
		scanf("%d", &vet_1[i]);
		
	}
	
	for(i=0;i<tam;i++){
		printf("\nDigite os numeros do segundo vetor: ");
		scanf("%d", &vet_2[i]);
	}
	
	for(i=0;i<tam;i++){
		resultado[i] = vet_1[i] + vet_2[i];
	}
	
	for(i = 0; i < tam; i++){
        printf("\nO resultado e: %d ", resultado[i]);
        
		}
}