#include <stdio.h>

int main() {

    float numero;
    printf("Valores em metros: ");
    scanf("%f", &numero);
	printf("Numero em decimetros: %.2f\n", numero * 10);
	printf("Numero em centimetros: %.2f\n", numero * 100);
	printf("Numero em milimetros: %.2f\n", numero * 1000);
	
	}