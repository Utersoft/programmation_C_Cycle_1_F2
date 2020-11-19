#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10


//prototypes
int somme_int(int n_a, int n_b);
float somme_float(float flt_va, float flt_vb);
void somme_procedure(int n_va, int n_vb);
void init_tabEntier(int n_tabEntier[TAILLE]);
int fctInit_tabEntier(int n_tabEntier[TAILLE]);

//extern : globale, permet d'y avoir accès dans d'autres fichiers du projet
//automatique : mode défaut des variables, donc modifiable à chaque appel.
//
//statique - register -
//volatile

//extern int ext = 0;
//extern int fctInit_tabEntier(int n_tabEntier[TAILLE]);

//auto int vauto = 0;

int main()
{
    int n_a = 0, n_b = 0;
    int n_res = 0;
    int n_tabEntier[TAILLE];

    n_a = 10;
    n_b = 23;
    float flt_res = 0;

    n_res = somme_int(n_a, n_b);

    printf("%d\n", n_res);

    flt_res = somme_float(5.0, 2.3);

    printf("%.2f\n", flt_res);

    somme_procedure(12, 65);

    init_tabEntier(n_tabEntier);

    int n_result = fctInit_tabEntier(n_tabEntier);

    //printf("%d", n_tabEntier);

    return 0;
}


//fonction somme entier
int somme_int(int n_a, int n_b){
    int n_som = 0;

    n_som = n_a + n_b;

    return n_som;
}

float somme_float(float flt_va, float flt_vb){
    return flt_va + flt_vb;
}

int fctInit_tabEntier(int n_tabEntier[TAILLE]){
    int n_i = 0;
    int n_result = 0;
    for(n_i = 0; n_i < TAILLE; n_i++){
        n_tabEntier[n_i] = 0;
        if(n_tabEntier[n_i] == 0){
            n_result = 1;
        }else{
            n_result = 0;
        }
    }
    return n_result;
}

//procedure
void somme_procedure(int n_va, int n_vb){
    int n_som = 0;

    n_som = n_va + n_vb;

    printf("Res : %d\n", n_som);
}

void init_tabEntier(int n_tabEntier[TAILLE]){
    int n_i = 0;
    for(n_i = 0; n_i < TAILLE; n_i++){
        n_tabEntier[n_i] = n_i;
    }
}
