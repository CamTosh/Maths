#include <stdio.h>
#include <string.h>

int main() {

    int taille;
    int i;
    int j;
    int k;

    printf("Entrez la taille du triangle : ");
    scanf("%d", &taille);

    for (i = 0 ; i < taille; i++) {
        if(i < 10){
            printf("%d  ", i);
        }
        else {
            printf("%d ",i);
        }
        for (j = taille - i; j > 0; j--) {
            printf(" ");
        }   
        for (k = 0 ; k < 1 + 2 * i; k++) {
            if ((k % 2) == 0) {
                printf("*");
            }
            else if((k % 2) != 2) {
                printf("*");
            }
        }
        printf("\n");
    }
return 0;
}
