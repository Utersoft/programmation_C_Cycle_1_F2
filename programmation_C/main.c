#include <stdio.h>
#include <stdlib.h>
#define NBI 10

int main()
{
    int n_a = 1, n_b = 0;

    //condition if

    if(n_a == n_b){
        //instruction
        printf("n_a et n_b sont identiques\n");
    }else if(n_a > n_b){
        printf("n_a et n_b sont pas identiques\n");
    }else{
        printf("diff...\n");
    }

    int n_val = 12;

    if(n_val >= 10 && n_val <= 20){
        //instruction
        printf("%d\n", n_val);
    }

    //condition switch

    int n_choix = 0;

    printf("Menu\n");
    printf("1 : Menu 1\n");
    printf("2 : Menu 2\n");
    printf("Choix?\n");
    scanf("%d", &n_choix);

    switch(n_choix){
        case '1' : printf("Menu 1\n"); break;
        case '2' : printf("Menu 2\n"); break;
        default : printf("defaut\n"); break;
    }

    //boucle pour

    int i = 0;

    for(i = 0; i < NBI; i++){
        printf("%d\n", i);
    }

    //Faire TO

    i = 0;
    do{
        printf("%d\n", i);
        i++;
    }while(i < NBI);

    //TO faire
    i = 0;
    while(i < NBI){
        printf("%d\n", i);
        i++;
    }




    return 0;
}
