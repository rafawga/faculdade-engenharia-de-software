#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>    


// falta verificador de win para encerrar o loop

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





while(a = 1){
	printf("\nturn: %d\n", turn);
	printBoard(jogo);
	printf("Escolha a posicao X: ");
	scanf("%d", &posx);
	posx = posx - 1;
	printf("Escolha a posicao Y: ");
	scanf("%d", &posy);
	posy = posy - 1;
	
		
	if (turn == 1){
		jogo[posx][posy] = 'X';
	}
	
	if (turn == 0){
		jogo[posx][posy] = 'O';
	}	
	
	turn = (turn + 1) % 2;

}




printBoard(jogo);

    return 0;
}





