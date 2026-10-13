#include <stdio.h>
#define tam 10

//Uma frota de 10 caminhões registrou o consumo de diesel (km/l). Calcule a média de consumo
//da frota e informe quantos veículos estão com um consumo acima da média (sinalizando
//eficiência

int main(){
	int i, acima = 0;
	float consumo[tam], media, soma = 0;
	
	for(i=0;i<tam;i++){
		printf("Digite a media de consumo em km/l do %do caminhao: ", i+1);
		scanf("%f", &consumo[i]);
		soma+= consumo[i];
	}
	
	for(i=0;i<tam;i++){
		media = soma/tam;
	}
	
	for(i=0;i<tam;i++){
		if(consumo[i]>media){
			acima++;
		}
	}
	
	printf("Existem %d caminhoes com o consumo acima da media", acima);
}