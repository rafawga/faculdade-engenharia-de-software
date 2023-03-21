#include <stdio.h>

int main() {

	int v1;
	int v2;
	int v3;
	
	printf("Valor lado 1: ");
	scanf("%d", &v1);
	printf("Valor lado 2: ");
	scanf("%d", &v2);
	printf("Valor lado 3: ");
	scanf("%d", &v3);
	
	
	if (v1 == v2 && v2 == v3 )
	{
		printf("Triangulo Equilatero");
	}
		
	else if (v1==v2 || v1==v3 || v2==v3)
	{
		printf("Triangulo Isoseles");
	}
	
	else{
		printf("Triangulo Escaleno");
	}
		
	
	
	return 0;
	
	}