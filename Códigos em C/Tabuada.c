#include <stdio.h>

void tabuada(int num){
	int i;
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n",num,i, num*i);
	}
}

int main(){
	int n;
	printf("Digite um numero:  ");
	scanf("%d", &n);
	tabuada(n);
}