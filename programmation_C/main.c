#include <stdio.h>
#include <stdlib.h>
#define TAILLE 255

int main()
{
    //char c_chaine[TAILLE] = "Hello";

    char c_chaine[TAILLE] = {'H', 'e', 'l', 'l', 'o', ' ', 'w'};

    /*printf("Entrez votre chaine : \n");
    scanf("%s", c_chaine);

    printf("Votre chaine : %s\n", c_chaine);

    strcpy(c_chaine, "stephane");

    int n_lngChaine = strlen(c_chaine);

    printf("long chaine : %d\n", n_lngChaine);

    int n_i = 0;
    while(c_chaine[n_i] != '\0'){
        n_i++;
    }
    printf("%d\n", n_i);*/

    /*printf("Entrez votre chaine : \n");
    gets(c_chaine); //flux => stdin

    printf("Votre chaine : %s\n", c_chaine);*/


    printf("Entrez votre chaine : \n");
    fgets(c_chaine, TAILLE, stdin);

    //printf("Votre chaine : %s\n", c_chaine);
    //puts(c_chaine);

    fputs(c_chaine,stdout);

    int n_i = 0;
    for(n_i = 0; n_i < 10; n_i++){
        fflush(stdin);
        printf("\nCar : \n");
        scanf("%c", &c_chaine[n_i]);
        printf("%c\n", c_chaine[n_i]);
    }
    puts(c_chaine);







    return 0;
}
