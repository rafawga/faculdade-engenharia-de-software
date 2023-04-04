#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>    
#include <time.h>

int main()
{
 	int i, num, escolha;
 	int wpc = 0;
 	int weu = 0;
 	 	
 	while(wpc < 2 && weu < 2)	{
 	
 	srand(time(NULL));  
	for (i = 0; i < 10; i++)
	{
		num = rand() % 100 + 1;  
	}
	
	if (num<=33){
		num = 1;
	}
	
	else if (num<=66){
		num = 2;
	}
	
	else{
		num = 3;
	}
	
	printf("Escolha 1[pedra], 2[papel], 3[tesoura]: ");
	scanf("%d", &escolha);
	
	char jogo[][20] = { "pedra", "papel", "tesoura" };
	
	if (num==escolha){
		printf("O computador escolheu %s \n", jogo[num-1]);
		printf("Empate \n");
	}
	
	
	if (escolha == 1){
		
		if (num == 2){
			printf("O computador escolheu %s \n", jogo[num-1]);
			printf("Voce perdeu \n");
			wpc = wpc + 1;
		}
		
		if (num == 3){
			printf("O computador escolheu %s \n", jogo[num-1]);
			printf("Voce ganhou \n");
			weu = weu + 1;
		}	
	}
	
	if (escolha == 2){
		
		if (num == 3){
			printf("O computador escolheu %s \n", jogo[num-1]);
			printf("Voce perdeu \n");
			wpc = wpc + 1;
		}
		
		if (num == 1){
			printf("O computador escolheu %s \n", jogo[num-1]);
			printf("Voce ganhou \n");
			weu = weu + 1;
		}	
	}	
	
	if (escolha == 3){
		
		if (num == 1){
			printf("O computador escolheu %s \n", jogo[num-1]);
			printf("Voce perdeu \n");
			wpc = wpc + 1;
		}
		
		if (num == 2){
			printf("O computador escolheu %s \n", jogo[num-1]);
			printf("Voce ganhou \n");
			weu = weu + 1;
		}	
	}

	printf("Placar:  \n");
	printf("Vitoria PC: %d \n", wpc );
	printf("Vitoria Jogador: %d \n\n\n", weu);
 			
	 }	

    return 0;
}





