#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

int main()
{
    int n_tabEntiers[TAILLE];
    int n_i = 0;

    for(n_i = 0; n_i < TAILLE; n_i++){
        n_tabEntiers[n_i] = n_i;
    }

    for(n_i = 0; n_i < TAILLE; n_i++){
        printf("%d\n", n_tabEntiers[n_i]);
    }
    printf("\n");

    int n_tabEntiers2[TAILLE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(n_i = 0; n_i < TAILLE; n_i++){
        printf("%d\n", n_tabEntiers2[n_i]);
    }
    printf("\n");

    int n_tabEntiers3[TAILLE] = {0,10,5};

    for(n_i = 0; n_i < TAILLE; n_i++){
        printf("%d\n", n_tabEntiers3[n_i]);
    }
    printf("\n");

    int n_tabEntiers4[TAILLE] = {0};

    for(n_i = 0; n_i < TAILLE; n_i++){
        printf("%d\n", n_tabEntiers4[n_i]);
    }
    printf("\n");

    int n_tabEntiers5[] = {1, 2, 3, 4, 5, 6, 7, 8};

    for(n_i = 0; n_i < TAILLE; n_i++){
        printf("%d\n", n_tabEntiers5[n_i]);
    }
    printf("\n");


    int n_matriceEntiers[TAILLE][TAILLE];
    int n_j = 0;
    for(n_i = 0; n_i < TAILLE; n_i++){  //ligne
        for(n_j = 0; n_j < TAILLE; n_j++){  //colonne
            n_matriceEntiers[n_i][n_j] = 0;
        }
    }


    int n_matriceEntiers2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for(n_i = 0; n_i < 3; n_i++){  //ligne
        for(n_j = 0; n_j < 4; n_j++){  //colonne
            printf("%d ", n_matriceEntiers2[n_i][n_j]);
        }
        printf("\n");
    }




    return 0;
}
