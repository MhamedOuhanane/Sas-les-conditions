#include<stdio.h>
int main()
{
    int a ,i;
    printf("Donner la moyenne des notes d'eleve a = ");
    scanf("%d",&a);
    if (a>=0 && a<10)
    {
        printf("Mention Obtenue est recale.");
    }
    else if (a>=10 && a<12)
    {
        printf("Mention Obtenue est passable. ");
    }
    else if (a>=12 && a<14)
    {
        printf("Mention Obtenue est  assez bien. ");
    }    
    else if (a>=14 && a<16)
    {
        printf("Mention Obtenue est bien. ");
    }
    else if (a>=16 && a<=20)
    {
        printf("Mention Obtenue est tres bien. ");
    }
    else
        printf("La moyenne des notes donne est faux")    ;
    return 0;
}
