#include <stdio.h>


void calcularFibonati( int numero) {

	 int v1=0;
	 int v2=1;
	 int v3;
	     
 
	 printf("\n%d %d",v1,v2);
	 
	 for(int i=2;i<numero;++i)
	 
	 {    
	  v3=v1+v2;    
	  printf(" %d",v3);    
	  v1=v2;    
	  v2=v3;    
	 }  
}
	   


int main() {
	int numero;
	printf("Insira um Numero de elementos Fibonacci: ");
	scanf("%d", &numero);
  	calcularFibonati(numero);

  return 0;
}

