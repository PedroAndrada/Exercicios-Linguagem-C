#include <stdio.h>
#define tam 5

struct carro{
	
	int ano;
	char modelo[25];
	char marca[25];
	float valor;
};

int main(){
	
	int i, j;
	struct carro frota[tam], aux;
	
	for(i=0;i<tam;i++){
		printf("Digite o ano de fabricacao:  ");
		scanf("%d", &frota[i].ano);
		getchar();
		printf("\nDigite o modelo do carro:  ");
		gets(frota[i].modelo);
		printf("\nDigite a marca do carro:  ");
		gets(frota[i].marca);
		printf("\nDigite o valor do carro:  ");
		scanf("%d", &frota[i].valor);
	}
	
	for(i=0;i<tam;i++){
		for(j=i+1;j<tam;j++){
			if(frota[i].valor > frota[j].valor){
				aux = frota[i];
				frota[i] = frota[j];
				frota[j] = aux;
			}
		}
	}
	
	for(i=0;i<tam;i++){
		printf("\n\nano de fabricacao: %d", frota[i].ano);
		printf("\nmodelo: %s", frota[i].modelo);
		printf("\nmarca: %s", frota[i].marca);
		printf("\nvalor: %.2f", frota[i].valor);
	}
}