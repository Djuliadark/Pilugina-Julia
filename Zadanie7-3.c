#include<stdio.h>
#include<math.h>
int main()
{
    int X,A,Y,k,k2;
    float r;
    printf ("Известно, что  ");
    scanf ("%d", &X);
    printf ("кг конфет стоит ");
    scanf ("%d", &A);
    printf ("рублей\n");
    k = A/X;
    printf ("Найти стоимость для ");
    scanf ("%d", &Y);
    printf ("кг\n");
    k2 = k * Y;
    printf ("1 кг конфет стоит %d\n", k);
    printf ("%d кг конфет стоит %d\n", Y,k2);
    return 0;
} 