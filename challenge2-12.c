#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h1,m1,s1,h2,m2,s2,a,b;
    printf("Entrer h1 : ");
    scanf("%d",&h1);
    printf("Entrer m1 : ");
    scanf("%d",&m1);
    printf("Entrer s1 : ");
    scanf("%d",&s1);
    printf("Entrer h2 : ");
    scanf("%d",&h2);
    printf("Entrer m2 : ");
    scanf("%d",&m2);
    printf("Entrer s2 : ");
    scanf("%d",&s2);
    printf("La 1er instant est %d%:%d:%d .\n",h1,m1,s1);
    printf("La 2eme instant est %d%:%d:%d .\n",h2,m2,s2);
    a = h1*3600 + m1*60 + s1;
    b = h2*3600 + m2*60 + s2;
    if (a < b)
    {
        printf("Le premier instant vient avant le deuxième.");
    }
    else if (a > b)
    {
        printf("Le deuxieme instant vient avant le premier.");
    }
    else
        printf("Il s'agit du meme instant.");
    return 0;
}
