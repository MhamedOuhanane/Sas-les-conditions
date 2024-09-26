#include<stdio.h>
int main(int argc, char const *argv[])
{
    float x1,x2,x3,y1,y2,y3;
    float e,a,b,c,d;
    printf("Saisir les coordonnees de 1er extremite de segment A : \n");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Saisir les coordonnees de 2eme extremite de segment B : \n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    printf("les coordonnees de point etudier C : \n");
    scanf("%f",&x3);
    scanf("%f",&y3);
    e = x1*(y2-y3)-x2*(y1-y3)+x3*(y1-y2);
    if (x1 < x2)
    {
        a = x1;
        b = x2;
    }
    else
    {
        a = x2;
        b = x1;  
    }
    if (y1 < y2)
    {
        c = y1;
        d = y2;
    }
    else
    {    
        c = y2;
        d = y1; 
    }
    if (((x3 >= a) && (x3 <= b) && (y3 >= c) && (y3 <= d)) && (e == 0))
    {
        printf("Le point C se trouve dans le segment [AB].");
    }
    else
        printf("Le point C ne se trouve pas dans le segment [AB].");
    
    return 0;
}
