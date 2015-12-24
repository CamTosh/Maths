#include <stdio.h>
#include <stdlib.h>

int main()
{

	int colA;
	int ligneA;

	int colB;
	int ligneB;

	int i;
	int j;

	printf("Nombre de colonnes pour la matrice A\n");
	scanf("%d", &colA);
	printf("Nombre de lignes pour la matrice A\n");
	scanf("%d", &ligneA);

	printf("\n\n\n");

	printf("Nombre de colonnes pour la matrice B\n");
	scanf("%d", &colB);
	printf("Nombre de lignes pour la matrice B\n");
	scanf("%d", &ligneB);


	/*----------  Matrice A  ----------*/


	for (i = 0; i < colA; i++){
		printf("\n Rentrez une valeur pour la colonne %d de A : ", colA);
		scanf("%d", &colA[i]);
	}
	for (j = 0; j < &ligneA; j++){
		printf("\n Rentrez une valeur pour la ligne %d de A : ", ligneA);
		scanf("%d", &ligneA[i][j]);
	}


	/*----------  Matrice B  ----------*/


	for (i = 0; i < colB; i++){
		printf("\n Rentrez une valeur pour la colonne %d de B : ", colB);
		scanf("%d", &colB[i])
	}
	for (j = 0; j < ligneB; j++){
		printf("\n Rentrez une valeur pour la ligne %d de B : ", ligneB);
		scanf("%d", &ligneB[i][j]);
	}


	return 0;
}
