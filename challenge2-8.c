#include<stdio.h>
int main()
{
    int a ,i;
    printf("Saisir UN ANNNE : ");
    scanf("%d",&a);
    print("Saisir ton chois : \n  \n 2 pour Jours \n 3 pour Heures \n 4 pour Minutes \n 5 pour Secondes  ");
    printf("1 pour Mois\n");



    
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("%d an = %d Mois.\n ",a,a*12);
        break;
    case 2:
        printf("%d an = %d Jours.\n ",a,a*365);
        break;
    case 3:
        printf("%d an = %d Heurs.\n ",a,a*365*24);
        break;
    case 4:
        printf("%d an = %d Minutes.\n ",a,a*365*24*60);
        break;    
    case 5:
        printf("%d an = %d Secondes.\n ",a,a*365*24*60*60);
        break;
    default:
        printf("Erreur...\n");
        break;
    }
    return 0;
}
