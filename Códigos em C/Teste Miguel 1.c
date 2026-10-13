#include <stdio.h>

int main(){
	int Classe;
	
	printf("\nSelecione uma classe \n\n 1.Paladino\n\n 2.Ladrao\n\n 3.Mago\n\n 4.Alquimista\n\n 5.Guerreiro\n\n Digite o numero da clase que desejar: ");
	scanf("%d", &Classe);
	
	switch(Classe){
		
		case 1:
			printf("\nVida: 450 Mana: 250\n Forca: 16\n Defesa: 20\n Velocidade: 8\n Sorte: 6\n");
			break;
		case 2:
			printf("\nVida: 150 Mana: 300\n Forca: 12\n Defesa: 7\n Velocidade: 20\n Sorte: 18\n");
			break;
		case 3:
			printf("\nVida: 200 Mana: 500\n Forca: 23\n Defesa: 8\n Velocidade: 10\n Sorte: 8\n");
			break;
		case 4:
			printf("\nVida: 250 Mana: 400\n Forca: 14\n Defesa: 12\n Velocidade: 14\n Sorte: 11\n");
			break;
		case 5:
			printf("\nVida: 350 Mana: 250\n Forca: 21\n Defesa: 15\n Velocidade: 16\n Sorte: 14\n");
			break;
	}
	
	while(Classe <1 || Classe >5){
		printf("\nNumero invalido! Digite outro");
		return 0;
	}
}