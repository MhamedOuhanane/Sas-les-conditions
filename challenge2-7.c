#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a;
    printf("Entrer un Alphabet : ");
    scanf("%c",&a);
    if ( (a>=65) && (a<=90))
    {
        printf("%c est un alphabet majuscule",a);
    }
    else
        printf(" %c n'est pas un alphabet majuscule .",a);
    return 0;
}
