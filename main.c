#include <stdio.h>
#include <stdlib.h>

#define L_PLATEAU 9 //Nombre de lignes du plateau en mémoire
#define C_PLATEAU 9*2-1 //Nombre de colonnes du plateau en mémoire

int plateau[L_PLATEAU][C_PLATEAU] = {{-1, -1, -1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, -1, -1, -1},
																		 {-1, -1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, -1, -1},
																		 {-1, -1, 0, -1, 0, -1, 1, -1, 1, -1, 1, -1, 0, -1, 0, -1, -1},
																		 {-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1},
																		 {0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0},
																		 {-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1},
																		 {-1, -1, 0, -1, 0, -1, 2, -1, 2, -1, 2, -1, 0, -1, 0, -1, -1},
																		 {-1, -1, -1, 2, -1, 2, -1, 2, -1, 2, -1, 2, -1, 2, -1, -1, -1},
																		 {-1, -1, -1, -1, 2, -1, 2, -1, 2, -1, 2, -1, 2, -1, -1, -1, -1}};

int main()
{
	unsigned int i, j; //Compteurs

	for(i = 0; i < L_PLATEAU; i++) //Affichage du plateau de jeu
	{
		for(j = 0; j < C_PLATEAU; j++)
		{
			if (plateau[i][j] == -1) //Pas une case
				printf(" ");
			else if(plateau[i][j] == 0) //Case vide
				printf(".");
			else //Case occupée
				printf("%d", plateau[i][j]);
		}
		printf("\n");
	}
	
}
