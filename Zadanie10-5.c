#include<stdio.h>
#include<math.h>
int main()
{
    int A,f,s,t,f1;
    printf (" A = ");
    scanf ("%d", &A);
    f = A / 1000;
    s = A % 100 / 10;
    t = A / 100 % 10; 
    f1 = A % 10;
    if ((f==f1)&(s==t))
    {printf("Данное число читается одинаково слева направо и справа налево");}
    else 
    {printf("Данное число явялется простым четырёхзначным числом");}
    return 0;
}