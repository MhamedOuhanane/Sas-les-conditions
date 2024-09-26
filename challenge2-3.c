#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Saisir un nombre entier a : ");
    scanf("%d",&a);
    printf("Saisir un nombre entier b : ");
    scanf("%d",&b);
    if (a != b)
    {
        printf("Le resultat est a+b = %d",a+b);
    }
    else 
    {
        printf("Le resultat = %d",(a+b)*3);
    }
    
    return 0;
}
