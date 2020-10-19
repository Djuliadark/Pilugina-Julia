#include<stdio.h>
#include<math.h>
int main()
{
    int A,n,k;
    int B =10;
    printf ("Число А = ");
    scanf ("%d", &A);
    n = A/B;
    n = floor(n);
    k = A - n * B;
    k = floor(k);
    k = n + B * k;
    printf ("Измененное число А = %d", k);
    return 0;
}