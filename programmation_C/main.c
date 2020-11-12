#include <stdio.h>
#include <stdlib.h>

int main()
{
    short sn_entier;
    int n_entier;
    long l_entier;
    //déclaration d'entier short non signé, int et long non signé

    printf("Taille en octet du short : %d\n", sizeof(sn_entier));
    printf("Taille en octet du int : %d\n", sizeof(n_entier));
    printf("Taille en octet du long : %d\n", sizeof(l_entier));

    //reel
    float flt_reel;
    double dbl_reel;
    long double ldbl_reel;

    printf("Taille en octet du float : %d\n", sizeof(flt_reel));
    printf("Taille en octet du double : %d\n", sizeof(dbl_reel));
    printf("Taille en octet du long double : %d\n", sizeof(ldbl_reel));

    char c_car;
    printf("Taille en octet du charactere : %d\n", sizeof(c_car));

    //bool bln_booleen;

    int n_a = 255;
    int n_b = 0;

    int n_test = (n_a == n_b);

    printf("La reponse est : %d \n", n_test);
    printf("La reponse est : %d \n", (n_a == n_b));
    printf("La reponse est : %d \n", (n_a < n_b));

    //== égal à
    //<= supérieur ou égal à
    //>= inférieur ou égal à
    // != (pas =)

    //= affectation
    //, séparation d'argument (lis les arguments de gauche à droite
    //+ addition
    //- soustraction
    // '/' division division d'entier (affiche le résultat)
    //% modulo (affiche le reste d'une division
    //& (&&) (ET)
    // | (||) (OU)
    // ! (NON)
    //++ (aditionne 1)
    //-- (soustrait 1)
    //+= (additionne sa propre valeur)
    //-= (soustrait sa propre valeur)
    // '/'= (divise sa propre valeur)
    //*= (multiplie sa propre valeur)


    //ecrire
    printf("val n_a et n_b : %d  et %d \n", n_a, n_b);
    printf("val n_a et n_b : %x  et %x \n", n_a, n_b);


    //lire
    printf("Saisir un entier n_a \n");
    scanf("%d", &n_a);
    printf("Saisir un entier n_b \n");
    scanf("%d", &n_b);

    printf("val n_a et n_b : %d  et %d", n_a, n_b);

    return 0;
}
