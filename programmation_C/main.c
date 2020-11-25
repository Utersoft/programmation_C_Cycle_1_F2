#include <stdio.h>
#include <stdlib.h>

//Exemple un point dans un plan

typedef struct tPoint{

    int x;
    int y;

}tPoint;

/*struct tPoint{

    int x;
    int y;

}tPoint;*/
//Fonctionne aussi mais il faut mettre un struct devant le type lorsque l'on crée une variable


int main()
{
    tPoint monPoint = {0, 0};
    //exemple :
    //struct tPoint monPoint;

    tPoint *pMonPoint = NULL;

    pMonPoint = &monPoint;

    monPoint.x = 10;
    monPoint.y = 5;

    //pointeur (utilisation de la flèche à la place du point pour appeler un élément du type
    pMonPoint -> x = 12;
    pMonPoint -> y = 20;

    //formalisme pointeur
    (*pMonPoint).x = 20;
    (*pMonPoint).y = 12;


    return 0;
}
