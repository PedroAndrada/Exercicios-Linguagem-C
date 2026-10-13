#include <stdio.h>

void converterSegundos(int totalSegundos, int *h, int *m, int *s){
	*h = totalSegundos/3600;
	*m = (totalSegundos/60) %60;
	*s = totalSegundos %60;
}

int main(){
	int horas, minutos, segundos, totSegundos;
	
	printf("Digite uma quantidade de segundos: ");
	scanf("%d", &totSegundos);
	
	
	
	converterSegundos(totSegundos, &horas,&minutos,&segundos);
	
	printf("%d:%d:%d", horas, minutos, segundos);
}