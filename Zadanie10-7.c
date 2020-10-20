#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C,d,g,h;
    printf ("Число А = ");
    scanf ("%d", &A);
    printf ("Число B = ");
    scanf ("%d", &B);
    printf ("Число C = ");
    scanf ("%d", &C);
    if ((A<B+C)&&(B<A+C)&&(C<B+A))
    {printf ("Треугольник существует");}
    else 
    {printf ("Треугольник не существует");}
    return 0;
}