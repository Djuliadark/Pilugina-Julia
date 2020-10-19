#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C,n,S1,S2,S;
    printf (" A = ");
    scanf ("%d", &A);
    printf (" B = ");
    scanf ("%d", &B);
    printf (" C = ");
    scanf ("%d", &C);
    S1 = A * B;
    S2 = C * C;
    n = (A/C)*(B/C);
    S = S1 - S2;
    printf ("%d квадратов со стороной %d помещается в прямоугольник\n", n,C);
    printf ("Незанятая площадь  = %d", S);
    return 0;
}