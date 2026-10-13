#include <stdio.h>

//Um sistema de RH precisa ocultar o primeiro dígito de uma senha de acesso por segurança. Crie
//um programa que leia uma senha de 6 caracteres e substitua o primeiro caractere por um
//asterisco (‘*’) antes de exibir na tela

int main(){
	char senha[7];
	
	printf("Digite uma senha: ");
	scanf("%s", senha);
	
	senha[0] = '*';
	
	printf("Senha: %s", senha);
}


