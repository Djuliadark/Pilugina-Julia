#include<stdio.h>
#include<math.h>
int main()
{
    int A,f;
    printf ("Число A = ");
    scanf ("%d", &A);
    if (A == 0)
    {printf ("Число нулевое\n");}
    f = A % 2;
    if ((f==0) && (A != 0))
    { printf ("Число чётное\n");}
    if (f==1)
    {printf ("Число не чётное\n");}
    if (A>0)
    {printf ("Число положительное\n");}
    if (A<0)
    {printf ("Число отрицательное\n");}
    return 0;
}