#include <stdio.h>

int main() {
	float horas, minutos, segundos;
	
	printf("Digite a quantidade de horas: ");
	scanf("%f", &horas);
	
	minutos = horas * 60;
	segundos = horas * 3600;
	
	printf("Em minutos: %.2f\n", minutos);
	printf("Em segundos: %.2f\n", segundos);
	
	return 0;
}
