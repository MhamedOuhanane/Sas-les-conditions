#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a;
    printf("Entrer un nombre quelconque a : ");
    scanf("%a",&a);
    if (a < 0)
        printf("Le nombre %d est negatif .",a);
    else if (a > 0)
        printf("Le nombre %d est positif .",a);
    else
        printf("Le nombre %d est null .",a);    
    return 0;
}
