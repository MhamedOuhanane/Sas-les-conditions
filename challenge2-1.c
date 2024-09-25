#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ;
    printf("Entrer un entier positive n : ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("erreur.");
    }
    else if (n % 2 == 0)
    {
        printf("L'entier est paire.");

    }
    else
        printf("L'entier est impaire.");
    
    return 0;
}