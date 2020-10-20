#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C,a1;
    printf (" A = ");
    scanf ("%d", &A);
    printf (" B = ");
    scanf ("%d", &B);
    printf (" C = ");
    scanf ("%d", &C);
    a1 = (A < B < C);
    if (a1 == 1)
    {printf("Неравенство верно");}
    else {printf("Неравенство не верно");}
    return 0;
}