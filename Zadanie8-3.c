#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,n,k;
    printf ("Ввести значение А и В, где А>B\n");
    printf ("длина отрезка А = ");
    scanf ("%d", &A);
    printf ("длина отрезка В = ");
    scanf ("%d", &B);
    n = A/B;
    k = A - n * B;
    printf ("Длина не занятой части отрезка А = %d", k);
    return 0;
}