#include <stdio.h>
#include <stdlib.h>

int main()
{

	int colA;
	int lineA;
	int arrayA[colA][lineA] = {0, 0}{0, 0};

	int colB;
	int lineB;
	int arrayB[colB][lineB] = {0, 0}{0, 0};

	int i;
	int j;

	printf("\n Nombre de colonnes pour la matrice A : ");
	scanf("%d", &colA);
	printf("\n Nombre de lignes pour la matrice A : ");
	scanf("%d", &lineA);

	printf("\n Nombre de colonnes pour la matrice B : ");
	scanf("%d", &colB);
	printf("\n Nombre de lignes pour la matrice B : ");
	scanf("%d", &lineB);


	/*----------  Matrice A  ----------*/


	for (i = 0; i < &colA; i++){
		printf("\n Rentrez une valeur pour la colonne %d de A : ", arrayA[i]);
		scanf("%d", &arrayA[i]);
		printf("\n\n");
		printf("\n Rentrez une valeur pour la ligne %d de A : ", arrayA[][i]);
		scanf("%d", &arrayA[][i]);
	}
	
	/*----------  Matrice B  ----------*/


	for (i = 0; i < colB; i++){
		printf("\n Rentrez une valeur pour la colonne %d de B : ", arrayA[i]);
		scanf("%d", &arrayA[i]);
		printf("\n\n");
		printf("\n Rentrez une valeur pour la ligne %d de B : ", arrayA[][i]);
		scanf("%d", &arrayA[][i]);
	}

	return 0;
}
