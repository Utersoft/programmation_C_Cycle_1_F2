#include <stdio.h>
#include <stdlib.h>


void int_somme(int n_nb1, int n_nb2, int *n_Res);
void init_tabEntier(int n_tabEntier[], int n_taille);
char * get_tabCar(char c_tabCar[]);

int main()
{
    //pointeur
    int n_entier = 0;
    int n_entier2 = 5;
    //pointeur sur @ n_entier //@ de n_entier
    int * pn_entier = &n_entier;


    *pn_entier = 10;
    pn_entier = &n_entier2;
    *pn_entier = 8;


    //passage par adresse
    int n_nb1 = 10, n_nb2 = 5, n_Res = 0;
    int_somme(n_nb1, n_nb2, &n_Res);

    //tableaux
    char c_tab[10];

    char *pc_char = c_tab;

    int n_i;

    for(n_i = 0; n_i < 10; n_i++){
        pc_char[n_i] = 'a';
    }

    pc_char++;

    int n_tab[10];
    int *pn_int = n_tab;

    for(n_i = 0; n_i < 10; n_i++){
        pn_int[n_i] = 5;
    }

    pn_int++;
    *(pn_int)++;
    (*pn_int)++;

    for(n_i = 0; n_i < 10; n_i++){
        //n_tab[n_i] = 8; //formalisme du tableau
        *(n_tab + n_i) = 8; //formalisme pointeur
    }
    int n_tab2D[10][10];

    int n_j;

    for(n_i = 0; n_i < 10; n_i++){
        for(n_j; n_j < 10; n_j++){
            //n_tab2D[n_i][n_j]
            *(*(n_tab2D + n_i)+ n_j) = 0; //formalisme pointeur matrice, pas très utilisé
        }
    }

    //attention
    //bug
    /*int *pn_entier3;
    *pn_entier3 = 6;
    */

    //fix
    int *pn_entier3 = NULL; //0x0 init

    pn_entier3 = &n_entier;

    init_tabEntier(n_tab, 10);

    int n_tabEntier2[100];
    init_tabEntier(n_tabEntier2, 100);

    char *pc_car = get_tabCar(c_tab);

    return 0;
}


void int_somme(int n_nb1, int n_nb2, int *n_Res){

    *n_Res = n_nb1 + n_nb2;
}

void init_tabEntier(int n_tabEntier[], int n_taille){
    int n_i;
    for(n_i = 0; n_i < n_taille; n_i++){
        n_tabEntier[n_i] = 0;
    }
}

//retourner un tableau on utilise un pointeur
char * get_tabCar(char c_tabCar[]){
    int = n_i;

    for(n_i = 0; n_i < 10; n_i++){
        c_tabCar[n_i] = 'z';
    }

    return c_tabCar;
}
