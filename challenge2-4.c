#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    float x , r, s;
    printf("solution de l'equation de deuxeme degre (E) : a(x^2)+bx+c=0\n");
    printf("Donner le coeffetion a= ");
    scanf("%d",&a);
    printf("Donner le coeffetion b= ");
    scanf("%d",&c);
    printf("Donner le coeffetion c= ");
    scanf("%d",&c);
    d = pow(b,2)-(4*a*c);
    if (d < 0)
    {
        printf("(E) n'admet pas d'une solution dans R");
    }
    else if (d > 0)
    {
        r = (sqrt(d)-b)/(2*a);
        s = ((sqrt(d)+b)/((-2)*a));
        printf("l'equation (E) admet duex solution qui sont : %f et %f .",r , s);
    }
    else
    {    x = (-b)/(2*a);
         printf("l'equation (E) admet un seule solution deuble qui est : %f ", x);
    }
    return 0;
}
