#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a;
    printf("Entrer un nombre quelconque a : ");
    scanf("%a",&a);
    if (a < 0)
        printf("Le nombre %f est negatif .",a);
    else if (a > 0)
        printf("Le nombre %f est positif .",a);
    else
        printf("Le nombre %f est null .",a);    
    return 0;
}
