#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int i;
    srand(time(0));
    i = rand() % 8;
    switch (i)
    {
    case 1:
        printf("Lundi");
        break;
    case 2:
        printf("mardi");
        break;
    case 3:
        printf("mercredi");
        break;
    case 4:
        printf("jeudi");
        break;
    case 5:
        printf("vendredi");
        break;
    case 6:
        printf("samedi");
        break;
    case 7:
        printf("dimanche");
        break;
    }
    return 0;
}
