#include <stdio.h>
#define funcionarios 3


int main(){
	float salario_base[funcionarios], comissoes[funcionarios], total[funcionarios];
	int i;
	
	for(i=0;i<funcionarios;i++){
		printf("Digite o salario do %do funcionario: ", i + 1);
		scanf("%f", &salario_base[i]);
	}
	
	for(i=0;i<funcionarios;i++){
		printf("Digite o valor das comissoes do %do funcionario: ", i+1);
		scanf("%f", &comissoes[i]);
	}
	
	for(i = 0; i < funcionarios; i++){
        total[i] = salario_base[i] + comissoes[i];
    }
	
	for(i=0;i<funcionarios;i++){
		printf("\nO valor total a ser depositado do %do funcionario e: %.2f", i+1, total[i]);
	}
	
}