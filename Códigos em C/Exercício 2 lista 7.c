#include <stdio.h>


//Crie uma função chamada ehPar que receba um número inteiro e retorne 1 se ele for par e 0 se
//for ímpar. Na função main, utilize um laço para pedir 5 números ao usuário e, para cada um,
//utilize a função para dizer se o número digitado é par ou não.

int ehPar(int num){
	if(num%2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n, i;
	
	for(i=0;i<5;i++){
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &n);
		
		if(ehPar(n)){
            printf("Eh par\n");
        } else {
            printf("Eh impar\n");
        }
	}
	
	
}