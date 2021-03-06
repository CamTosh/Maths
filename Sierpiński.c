#include <stdio.h>
#include <string.h>
#include <windows.h>

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

int main() {

    int taille;
    int i;
    int j;
    int k;

    printf("Entrez la taille du triangle : ");
    scanf("%d", &taille);

    for (i = 0 ; i < taille; i++) {
        if(i < 10){
            Color(7, 0); //blanc
            printf("%d  ", i);
        }
        else {
            Color(7, 0); //blanc
            printf("%d ",i);
        }
        for (j = taille - i; j > 0; j--) {
            printf(" ");
        }   
        for (k = 0 ; k < 1 + 2 * i; k++) {
            if ((k % 2) == 0) {
                Color(3, 0); // cyan
                printf("*");
            }
            else if((k % 2) != 2) {
                Color(4, 0); // rouge
                printf("*");
            }
        }
        Color(7, 0); //blanc
        printf("\n");
    }
return 0;
}
