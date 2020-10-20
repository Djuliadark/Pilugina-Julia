#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C,s;
    printf ("Число А = ");
    scanf ("%d", &A);
    printf ("Число B = ");
    scanf ("%d", &B);
    printf ("Число C = ");
    scanf ("%d", &C);
    if (A>B>C)
    { s = A+B;
        printf ("Сумма 2-х наибольших чисел = %d\n", s);}
    if ((A>B) && (B<C))
    { s = A+C;
        printf ("Сумма 2-х наибольших чисел = %d\n", s);}
    if ((A<B) && (B>C))
    { s = B+C;
        printf ("Сумма 2-х наибольших чисел = %d\n", s);}
    return 0;
}