#include <stdio.h>


void ProximoSegundo(int *hora, int *minuto, int *segundo){
	(*segundo)++;
	
	if(*segundo == 60){
		*segundo = 0;
		(*minuto)++;
		if(*minuto == 60){
			*minuto = 0;
			(*hora)++;
			if(*hora == 24){
				*hora = 0;
			}
		}
	}
}

int main(){
	int H,M,S;
	
	printf("Digite um horario - HH:MM:SS:  ");
	scanf("%d:%d:%d", &H, &M, &S);
	ProximoSegundo(&H, &M, &S);
	
	printf("%02d:%02d:%02d", H,M,S);
	
	 
}