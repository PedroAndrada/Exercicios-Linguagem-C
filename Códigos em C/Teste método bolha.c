#include <stdio.h>
#define tam 10

int main(){
	
	int i, j, aux;
 	int vet[tam];
 	
 	for(i=0;i<tam;i++){
 		printf("Digite um numero: ");
 		scanf("%d", &vet[i]);
	 }
	 
	 for(i=0;i<tam;i++){
	 	for(j=i+1;j<tam;j++){
	 		if(vet[i] > vet[j]){
	 			
	 			aux = vet[i];
	 			vet[i] = vet[j];
	 			vet[j]= aux;
	 	
	 			
			 }
		 }
	 }
	 
	for(i=0; i<tam; i++){
        printf("%d ", vet[i]); 
    }

}