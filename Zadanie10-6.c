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
    if ((A*A+B*B==C*C)||(A*A+C*C==B*B)||(B*B+C*C==A*A))
    {printf ("Треугольник прямоугольный");}
    else 
    {printf ("Треугольник не прямоугольный");}
    return 0;
}