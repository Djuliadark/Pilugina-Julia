#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,x;
    printf ("A*x + B = 0\n");
    printf ("коэффицент А = ");
    scanf ("%d", &A);
    printf ("коэффицент B = ");
    scanf ("%d", &B);
    printf ("%d*x + %d = 0\n",A,B);
    x = -B/A;
    printf ("x = %d", x);
    return 0;
} 