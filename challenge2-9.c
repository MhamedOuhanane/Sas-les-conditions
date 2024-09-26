#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a;
    printf("Entrer un Alphabet : ");
    scanf("%c",&a);
    if ( (a>=65) && (a<=90))
    {
        printf("%c est un Alphabet Majuscule",a);
    }
    else if (a>=97 && a<= 122)
    {
        printf("%c est un Alphabet Minuscule",a);
    }
    
    else
        printf(" %c n'est pas un Alphabet .",a);
    return 0;
}