#include <stdio.h>

//Crie uma função chamada ehVogal que receba um caractere. A função deve retornar 1 se o
//caractere for uma vogal (maiúscula ou minúscula) e 0 caso contrário. Na main, peça uma letra
//ao usuário e, utilizando a função, informe se o que foi digitado é uma vogal ou uma
//consoante/símbolo.
 
 int ehVogal(char c){
 	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
       	return 1;
 }
 else{
 	return 0;
 }
 }
 
 int main(){
 	char letra;
 	
 	printf("Digite uma letra: ");
 	scanf(" %c", &letra);
 	
 	
 	if(ehVogal(letra)){
 		printf("Eh uma vogal");
	 }
	 else{
	 	printf("Eh uma consoante ou simbolo");
	 }
 }