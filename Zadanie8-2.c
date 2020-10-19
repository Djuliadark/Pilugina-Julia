#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,n;
    printf ("длина отрезка А = ");
    scanf ("%d", &A);
    printf ("длина отрезка В = ");
    scanf ("%d", &B);
    n = A/B;
    printf ("максимальное количество отрезков В на отрезке А = %d", n);
    return 0;
} 