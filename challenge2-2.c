#include<stdio.h>
int main(int argc, char const *argv[])
{
    char n ;
    printf("Entrer un caractere n : ");
    scanf("%c",&n);
    switch (n)
    {
    case 'i' : case 'a' : case 'y' : case 'u' : case 'e' : case 'o' : 
        printf("Le caractere est un voyelle");
        break;
    default:    printf("Le caractere n'est pas un voyelle");
        break;
    }
    return 0;
}
