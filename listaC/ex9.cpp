#include <stdio.h>

int main() {
	
	char idade[30];
	char nome[30];
	char endereco[50];
	char telefone[30];
	
	 printf("Digite seu nome: ");
   	 scanf("%s", nome);
   	 
   	 printf("Digite sua idade: ");
   	 scanf("%s", idade);
   	 
   	 printf("Digite telefone: ");
   	 scanf("%s", telefone);
	
	printf("Digite seu nome: ");
	scanf("%s", endereco);
	
	 printf("Seu nome e %s, voce tem %s, seu telefone e %s, e mora em %s", nome, idade, telefone, endereco);

  return 0;
  
}



