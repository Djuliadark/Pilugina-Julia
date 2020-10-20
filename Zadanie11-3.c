#include<stdio.h>
#include<math.h>
#include <stdlib.h> 
int main()
{
    int A,B,C,d,d1;
    printf ("Точка А = ");
    scanf ("%d", &A);
    printf ("Точка B = ");
    scanf ("%d", &B);
    printf ("Точка C = ");
    scanf ("%d", &C);
    d = abs(A-B);
    d1 = abs(A-C);
    if (d<d1)
    { printf ("Точка В ближе к точке А и расстояние = %d\n",d);}
    else 
    { printf ("Точка С ближе к точке А и расстояние = %d\n",d1);}
    return 0;
}