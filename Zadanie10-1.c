#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,a1,a2;
    printf (" A = ");
    scanf ("%d", &A);
    printf (" B = ");
    scanf ("%d", &B);
    a1 = (A>2) & (B<=3);
    if (a1 == 1)
    {printf("Неравенства верны");}
    else {printf("Неравенства не верны");}
    return 0;
}