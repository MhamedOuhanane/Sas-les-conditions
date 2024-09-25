#include<stdio.h>
int main()
{
    int a , i;
    printf("Donner la valeur par annee : ");
    scanf("%d",&a);
    printf("1-Mois\n");
    printf("2-Jours\n");
    printf("3-Heurs\n");
    printf("4-Minutes\n");
    printf("5-Secondes\n");
    printf("Choiser ton chois dans le menu : ");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("%d annees = %d Mois",a,a*12);
        break;
    case 2:
        printf("%d annees = %d Jours",a,a*365);
        break;
    case 3:
        printf("%d annees = %d Heurs",a,a*365*24);
        break;
    case 4:
        printf("%d annees = %d Minutes",a,a*365*24*60);
        break;
    case 5:
        printf("%d annees = %d Secondes",a,a*365*24*60*60);
        break;
    default:
        printf("Errour...Ton chois est haut du menu.");
        break;
    }
    return 0;
}
