#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>     
int main()  
{  
    // declare the local variables  
    int i, num;  
    int j = 0;
    int myNum;
    int c = 0;
    
    printf(" Program to get the random number from 1 to 100 \n");  
    num = rand() % 100 + 1; 
    printf (" Numero sorteado: %d \n", num);  
    
    while (j==0) {
 	 printf("Digite um numero: ");
     scanf("%d", &myNum);
     
     if (myNum == num)
	 {
     	j = 1;
	 }
	 
	 if (myNum < num){
	 printf("Maior \n \n");
	 }
	 
	 if (myNum > num){
	 printf("Menor! \n \n");
	 }
	 
	 c = c + 1;

}
	 printf("Acertou em %d tentativas" , c);
} 
	  	 
 
        