#include <stdio.h>


void calcularFatorial( int numero) {
		int soma = 1;
		for (int i = 1; i <= numero; ++i) {
		soma = soma * i;
				}
		printf("Fatorial: %d", soma);
		}



int main() {
	int numero;
	printf("Insira um Numero: ");
	scanf("%d", &numero);
  	calcularFatorial(numero);

  return 0;
}


