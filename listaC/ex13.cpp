#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD   50
#define NUM_WORDS  1

int main(void)
{
    FILE *fp = fopen("file.txt", "r");

    if (fp == NULL) {
        perror("Unable to locate word list");
        exit(EXIT_FAILURE);
    }
   
    char word[MAX_WORD];
    long wc = 0;
    while (fgets(word, sizeof word, fp) != NULL) {
        ++wc;
    }

    char randwords[NUM_WORDS][MAX_WORD];
    srand((unsigned) time(NULL));
    for (size_t i = 0; i < NUM_WORDS; i++) {
        rewind(fp);
        int sel = rand() % wc + 1;
        for (int j = 0; j < sel; j++) {
            if (fgets(word, sizeof word, fp) == NULL) {
                perror("Error in fgets()");
            }
        }
        strcpy(randwords[i], word);
    }

    if (fclose(fp) != 0) {
        perror("Unable to close file");
    }

    for (size_t i = 0; i < NUM_WORDS; i++) {
        char palavra[100]; 
	strcpy(palavra, randwords[i]); 

    int tamanho = strlen(palavra) - 1;
    int tentativas = 6;
    char letras_usadas[26] = {0};
    int acertos = 0;
    
    printf("Bem-vindo ao jogo da forca!\n");

    while (tentativas > 0) {
        printf("\nPalavra:");
        for (int i = 0; i < tamanho; i++) {
            if (letras_usadas[palavra[i] - 'a']) {
                printf(" %c", palavra[i]);
            } else {
                printf(" _");
            }
        }
        
        printf("\nTentativas restantes: %d", tentativas);
        
        printf("\nDigite uma letra: ");
        char letra;
        scanf(" %c", &letra);
        
        if (letras_usadas[letra - 'a']) {
            printf("Você já usou essa letra! Tente outra.\n");
            continue;
        }
        
        letras_usadas[letra - 'a'] = 1;
        
        if (strchr(palavra, letra)) {
            printf("Acertou!\n");
            acertos++;
        } else {
            printf("Errou!\n");
            tentativas--;
        }
        
        if (acertos == tamanho) {
        	printf("\nPalavra:");
	        for (int i = 0; i < tamanho; i++) {
	            if (letras_usadas[palavra[i] - 'a']) {
	                printf(" %c", palavra[i]);
	            } else {
	                printf(" _");
	            }
	        }
        	printf("\nParabens, voce ganhou! A palavra era %s.\n", palavra);
       	 	break;
    	} else if  (tentativas == 0) {
        	printf("\nQue pena, voce perdeu! A palavra era %s.\n", palavra);
        	break;
    	}
    }}
}