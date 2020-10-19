#include<stdio.h>
#include<math.h>
int main()
{
    int A,x,k,c;
    int B = 100;
    printf ("Число А = ");
    scanf ("%d", &A);
    x = A/B;
    x = floor(x);
    c = A - x*B;
    c = c*10 + x;
    printf ("Измененное число А = %d", c);
    return 0;
}