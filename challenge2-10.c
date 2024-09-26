#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ,b , c;
    printf("Donner le jours : ");
    scanf("%d",&a);
    printf("Donner le Mois : ");
    scanf("%d",&b);
    printf("Donner l'Annee  : ");
    scanf("%d",&c);
    printf("La date est : %d/%d/%d .\n",a,b,c);
    switch (b)
    {
    case 1:
        printf("La  Formatage de la Date  : %d-Janvier-%d .\n",a,c);
        break;
    case 2:
        printf("La  Formatage de la Date  : %d-Fevrier-%d .\n",a,c);
        break;
    case 3:
        printf("La  Formatage de la Date : %d-Mars-%d .\n",a,c);
        break;
    case 4:
        printf("La  Formatage de la Date : %d-Avril-%d .\n",a,c);
        break;
    case 5:
        printf("La  Formatage de la Date : %d-Mai-%d .\n",a,c);
        break;
    case 6:
        printf("La  Formatage de la Date : %d-Juin-%d .\n",a,c);
        break;
    case 7:
        printf("La  Formatage de la Date : %d-Juillet-%d .\n",a,c);
        break;
    case 8:
        printf("La  Formatage de la Date : %d-Aout-%d .\n",a,c);
        break;
    case 9:
        printf("La  Formatage de la Date : %d-septembre-%d .\n",a,c);
        break;
    case 10:
        printf("La  Formatage de la Date : %d-octobre-%d .\n",a,c);
        break;
    case 11:
        printf("La  Formatage de la Date : %d-novembre-%d .\n",a,c);
        break;
    case 12:
        printf("La  Formatage de la Date : %d-decembre-%d .\n",a,c);
        break;
    default:
        printf("Erreur...");
        break;
    }
    return 0;
}
