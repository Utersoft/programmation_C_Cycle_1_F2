#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exemple un point dans un plan

typedef struct tPoint{

    int x;
    int y;
    char str_coul[10];

}tPoint;

//typedef enum couleur{red = 1, black, green}; il faut mettre énum devant la var
typedef enum couleur{red = 1, black, green}couleur;

typedef enum booleen{faux, vrai}booleen;


//proto
void setPoint(tPoint *pPoint, int n_x, int n_y, char str_coul[10]);



/*struct tPoint{

    int x;
    int y;

}tPoint;*/
//Fonctionne aussi mais il faut mettre un struct devant le type lorsque l'on crée une variable
//Struct tPoint monPoint;

int main()
{
    tPoint monPoint = {0, 0,{"rouge"}};
    //exemple :
    //struct tPoint monPoint;

    tPoint *pMonPoint = NULL;

    tPoint tab_point[100];

    pMonPoint = &monPoint;

    monPoint.x = 10;
    monPoint.y = 5;

    //pointeur (utilisation de la flèche à la place du point pour appeler un élément du type
    pMonPoint -> x = 12;
    pMonPoint -> y = 20;

    //formalisme pointeur
    (*pMonPoint).x = 20;
    (*pMonPoint).y = 12;

    /*int i = 0;
    for(i = 0; i < 100; i++){
        tab_point[i].x = 0;
        tab_point[i].y = 0;
    }*/

    monPoint.x = 0;
    monPoint.y = 0;
    //monPoint.str_coul = "black"; ne marche pas
    strcpy(monPoint.str_coul, "black");

    setPoint(&monPoint, 8, 8, "green");


    //les enum
    enum couleur cl1;
    cl1 = 1;

    booleen bln_val = faux;

    return 0;
}


void setPoint(tPoint *pPoint, int n_x, int n_y, char str_coul[10]){
    pPoint->x = n_x;
    pPoint->y = n_y;
    strcpy(pPoint->str_coul, str_coul);

}
