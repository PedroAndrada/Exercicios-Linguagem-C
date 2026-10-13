#include <stdio.h>
#define vendedores 3

//Crie uma função chamada calcularComissao que receba o valor total de vendas de um vendedor.
//Se a venda for até R$ 5.000, a comissão é de 5%. Se for acima disso, a comissão é de 10%. A
//função deve retornar apenas o valor da comissão. Na main, leia o faturamento de 3 vendedores
//diferentes e exiba quanto cada um receberá de bônus.

float calcularComissao(float totalVendas){
	float comissao;
	if(totalVendas <= 5000){
		comissao = totalVendas * 0.05;
	}
	else{
		comissao = totalVendas * 0.10;
	}
	
	return comissao;
}

int main(){
	int i; 
	float vet[vendedores];
	
	for(i=0;i<vendedores;i++){
		printf("Digite o faturamento do %do vendedor: ", i+1);
		scanf("%f", &vet[i]);
	}
	
	for(i=0;i<vendedores;i++){
		printf("O %do vendedor recebera %f de bonus", i+1, calcularComissao(vet[i]));
	}
	
}