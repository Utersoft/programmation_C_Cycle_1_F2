#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
    FILE *fSortie = NULL;
    FILE *fEntree = NULL;

    int n_val = 0;
    int n_Occurence = 0;
    int n_NombreVal = 0;
    int n_tabVal[100];
    char str_nomFichier[21];


    /*printf("Donnez le nom du fichier a creer.\n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);

    if((fSortie = fopen(str_nomFichier, "w"))== NULL){
        fprintf(stderr, "Erreur ouverture du fichier : %s.\n", strerror(errno));

    }else{
        do{
            printf("Donnez un entier diff de 0 :\n");
            scanf("%d", &n_val);

            if(n_val != 0){
                fprintf(fSortie, "%d\n", n_val);
                n_Occurence++;
            }

        }while(n_val != 0);


    }

    fclose(fSortie);


    printf("Donnez le nom du fichier a lire : \n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);

    if((fEntree = fopen(str_nomFichier, "r"))== NULL){
        fprintf(stderr, "Erreur ouverture du fichier : %s.\n", strerror(errno));

    }else{
        while(n_NombreVal < n_Occurence){
            fscanf(fEntree, "%d", &n_val);
            printf("%d\n", n_val);
            n_NombreVal++;
        }

    }

    fclose(fEntree);*/

    printf("Donnez le nom du fichier a creer.\n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);
    if((fSortie = fopen(str_nomFichier, "wb"))== NULL){
        fprintf(stderr, "Erreur ouverture du fichier : %s.\n", strerror(errno));

    }else{
        do{
            printf("Donnez un entier diff de 0 :\n");
            scanf("%d", &n_tabVal[n_Occurence]);

            if(n_tabVal[n_Occurence] != 0){
                n_Occurence++;
            }

        }while(n_tabVal[n_Occurence] != 0);
        fwrite(n_tabVal, sizeof(int), sizeof(int) * n_Occurence, fSortie);
    }

    fclose(fSortie);

    printf("Donnez le nom du fichier a lire : \n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);

    if((fEntree = fopen(str_nomFichier, "rb"))== NULL){
        fprintf(stderr, "Erreur ouverture du fichier : %s.\n", strerror(errno));

    }else{
        fread(n_tabVal, sizeof(int), n_Occurence * sizeof(int), fEntree);
        while(n_NombreVal < n_Occurence){
            printf("%d\n", n_tabVal[n_NombreVal]);
            n_NombreVal++;
        }

    }

    fclose(fEntree);


    return 0;
}
