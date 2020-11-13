#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

int main()
{
    //char c_chaine[TAILLE] = "Hello";

    char c_chaine[TAILLE] = {'H', 'e', 'l', 'l', 'o', ' ', 'w'};

    printf("Entrez votre chaine : \n");
    scanf("%s", c_chaine);

    printf("Votre chaine : %s\n", c_chaine);

    strcpy(c_chaine, "stephane");

    int n_lngChaine = strlen(c_chaine);

    printf("long chaine : %d\n", n_lngChaine);

    int n_i = 0;
    while(c_chaine[n_i] != '\0'){
        n_i++;
    }
    printf("%d\n", n_i);









    return 0;
}
