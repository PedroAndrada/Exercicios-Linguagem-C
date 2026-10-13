#include <stdio.h>
#include <math.h>


//Em computação gráfica, às vezes temos um ângulo e uma distância (raio) e precisamos
//converter para coordenadas cartesianas (x, y). Escreva uma função que receba o raio e o ângulo
//(em radianos) e retorne as coordenadas (fórmulas: x = raio * cos(angulo) e y = raio *
//sin(angulo)). Na main, solicite o raio e o ângulo, chame a função e mostre as coordenadas
//cartesianas resultantes.

void coordenadas(float *x, float *y,float raio,float angulo){
	*x = raio * cos(angulo);
	*y = raio * sin(angulo);
}

int main(){
	float X, Y, Raio, Angulo;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &Raio);
	
	printf("Digite o valor do angulo: ");
	scanf("%f", &Angulo);
	
	coordenadas(&X,&Y,Raio,Angulo);
	
	printf("As coordenadas são (%.2f,%.2f)", X, Y);
}
