#include <stdio.h>

void converterParaSegundos(int *totalSegundos, int h, int m, int s){
	*totalSegundos = (h * 3600) + (m * 60) + s;
}

int main(){
	int horas, minutos, segundos, totSegundos;
	
	printf("Digite um horario em HH:MM:SS: ");
	scanf("%d:%d:%d", &horas, &minutos, &segundos);
	
	converterParaSegundos(&totSegundos,horas,minutos,segundos);
	
	printf("\nEsse horario equivale a %d segundos", totSegundos);
}