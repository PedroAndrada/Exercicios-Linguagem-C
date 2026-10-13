#include <stdio.h>

//Uma central de monitoramento de frotas recebe a quantidade de combustível e o consumo
//médio de um caminhão. Ela precisa calcular quantos km o veículo ainda percorre e quanto
//restará de combustível após uma viagem planejada.
//Escreva uma função que receba o consumo médio do caminhão (em km/l), a distância da
//viagem (em km) e quantidade de litros de combustível existente no tanque do caminhão. A
//função deverá calcular quantos litros serão gastos (litros = distancia / consumo), atualizar a
//quantidade de combustível no tanque e retornar 1 se o combustível for suficiente para a viagem
//ou 0 se o caminhão ficará parado na estrada.
//Na main, solicite os dados ao usuário, chame a função e, caso o retorno seja 0, o avise sobre o
//risco de pane seca.

float consumoCaminhao(float consumo, float distancia, float *combustivel){
	float litrosGastos;
	litrosGastos = (distancia / consumo);
	
	
	if(litrosGastos <= *combustivel){
        *combustivel = *combustivel - litrosGastos;
        return 1;
    } 
	else {
        return 0;
    }
	}
	
	
int main(){
	float cons, distan, combus;
	
	printf("Digite o consumo do caminhao em km/l: ");
	scanf("%f", &cons);
	
	printf("Digite a distancia da viagem em km: ");
	scanf("%f", &distan);
	
	printf("Digite a quantidade de combustivel em listros: ");
	scanf("%f", &combus);
	 
	if(consumoCaminhao(cons,distan,&combus)){
		printf("Viagem possivel! %.2f de combustivel restante", combus);
	}
	else{
		printf("Risco de pane seca!");
	}
}