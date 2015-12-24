#include <stdio.h>
#include <stdlib.h>
#define max 42

int main()
{

	int colA[max];
	int ligneA[max];

	int colB[max];
	int ligneB[max];

	int i;
	int j;

	printf("\n Nombre de colonnes pour la matrice A : ");
	scanf("%d", &colA);
	printf("\n Nombre de lignes pour la matrice A : ");
	scanf("%d", &ligneA);

	printf("\n Nombre de colonnes pour la matrice B : ");
	scanf("%d", &colB);
	printf("\n Nombre de lignes pour la matrice B : ");
	scanf("%d", &ligneB);


	/*----------  Matrice A  ----------*/


	for (i = 0; i < colA; i++){
		printf("\n Rentrez une valeur pour la colonne %d de A : ", colA[i]);
		scanf("%d", &colA[i]);
	}
	printf("\n\n\n");
	for (i = 0; i < &ligneA; i++){
		printf("\n Rentrez une valeur pour la ligne %d de A : ", ligneA[i]);
		scanf("%d", &ligneA[i]);
	}

	
	/*----------  Matrice B  ----------*/


	for (i = 0; i < colB; i++){
		printf("\n Rentrez une valeur pour la colonne %d de B : ", colB[i]);
		scanf("%d", &colB[i]);
	}
	printf("\n\n\n");
	for (i = 0; i < ligneB; i++){
		printf("\n Rentrez une valeur pour la ligne %d de B : ", ligneB[i]);
		scanf("%d", &ligneB[i]);
	}


	return 0;
}
