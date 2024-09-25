#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,S;
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
        S = (a+b)*3;
        printf("Le resultat = %d",S);
    }
    
    return 0;
}
