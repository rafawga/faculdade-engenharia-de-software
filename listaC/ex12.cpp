#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>    

const int M = 3;


 void printBoard(char j[M][M]) {	

printf(" %c   |   %c   |   %c \n", j[0][0], j[0][1], j[0][2]);
printf("-----------------------\n");
printf(" %c   |   %c   |   %c \n", j[1][0], j[1][1], j[1][2]);
printf("-----------------------\n");
printf(" %c   |   %c   |   %c \n", j[2][0], j[2][1], j[2][2]);

}
int main()

{
	
char jogo[M][M] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

int turn = 1;
int posx;
int posy;
int a = 1;
int mid = 0;

while(a == 1){
	printBoard(jogo);
	printf("Escolha a posicao X: ");
	scanf("%d", &posx);
	posx = posx - 1;
	printf("Escolha a posicao Y: ");
	scanf("%d", &posy);
	printf(" \n ");
	posy = posy - 1;
	
	if (jogo[posx][posy] == 'X' || jogo[posx][posy] == 'O') {
		printf("Escolha uma casa vazia!\n\n ");
	}
	
	else if (posx > 2 || posx < 0 || posy>2 || posy<0){
		printf("Escolha uma casa valida!\n\n ");
	}
	
	else{
	
	mid = mid + 1;
	
	if (turn == 1){
		jogo[posx][posy] = 'X';
	}
	
	if (turn == 0){
		jogo[posx][posy] = 'O';
	}	
	
	turn = (turn + 1) % 2;
		
	}

	char op[2] = {'X', 'O'};	

	 for (int i = 0; i <= 2; i++)
	  {

	   	// horizontal
		 for (int k = 0; k <= 2; k++) {
		 	
			 if (jogo[k][0] == op[i] && jogo[k][1] == op[i] && jogo[k][2] == op[i])
			 {
			 	printBoard(jogo);
			 	printf(" \n ");
	  			a = 0;
	  			printf("\n%c ganhou! \n\n", op[i]);
		  	 }
   	
		 }
		 
		 //vertical
		  for (int k = 0; k <= 2; k++) {
		 	
			 if (jogo[0][k] == op[i] && jogo[1][k] == op[i] && jogo[2][k] == op[i])
			 {
			 	printBoard(jogo);
			 	printf(" \n ");
	  			a = 0;
	  			printf("\n%c ganhou! \n\n", op[i]);
		  	 }
   	
		 }
		 
		 // diagonal
		 if (jogo[0][0] == op[i] && jogo[1][1] == op[i] && jogo[2][2] == op[i] || jogo[2][0] == op[i] && jogo[1][1] == op[i] && jogo[0][2] == op[i])
			 {
			 	printBoard(jogo);
			 	printf(" \n ");
	  			a = 0;
	  			printf("\n%c ganhou! \n\n", op[i]);
		  	 }
  		 	
	}
 		// empate
	if (mid >= 9) {
		printBoard(jogo);
		printf(" \n ");
	  	a = 0;
	  	printf("\nEmpate \n\n");
	}
}

    return 0;
}