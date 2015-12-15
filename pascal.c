#include <stdio.h>
#include <string.h>
#define max 42 // Je define une valeur max

int main() {

  int tableau[max][max];
  int taille;
  int i;
  int j;


  printf("Entrez la taille du triangle : ");
  scanf("%d", &taille);

  while (i <= taille && taille != 0 ){
    tableau[i][i] = 1;
    tableau[i][0] = 1;

    for (j = 1; j < i; j++){
      tableau[i][j] = tableau[i-1][j] + tableau[i-1][j-1];
    }
    i++;
  }

  for (i = 0; i <= taille; i++){ 
    printf("%d\t", i); // Pour afficher la ligne du "triangle"
    for (j = 0; j <= i; j++){

      if (tableau[i][j]){
        printf("%d ", tableau[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}
