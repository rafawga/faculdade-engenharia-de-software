#include <stdio.h>

int main() {
	
  int i;
  int j;
  int soma = 0;
  int myNum;
  int k = 10;
  int myNumbers[k];
  float media;

  
  for (i = 0; i < k; i++) {
    printf("Type a number: ");
    scanf("%d", &myNum);
    myNumbers[i] = myNum;
    soma = soma + myNum;
    media = soma / k;
  }
  
    int max = myNumbers[0];
  	int min = myNumbers[0];
  
  for (i = 0; i < k; i++) {

	if (myNumbers[i] > max )
	{
		max = myNumbers[i];
	}
	
	if (myNumbers[i] < min )
	{
		min = myNumbers[i];
	}
  }


  
printf("A media e %.2f\n", media);
printf("O maior numero e %d\n", max);
printf("O menor numero e %d\n", min);
  
  return 0;
}