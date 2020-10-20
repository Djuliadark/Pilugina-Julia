#include<stdio.h>
#include<math.h>
int main()
{
    int A,n,m,k;
    printf ("Число A = ");
    scanf ("%d", &A);
    n = A/10;
    k = A/100;
    m = A % 2;
    if (n == 0)
    {printf ("Число однозначное\n");}
    if ((n > 0) && (k < 0))
    { printf ("Число двузначное\n");}
    if (k != 0)
    { printf ("Число трёхзначное\n");}
    if (m == 0)
    {printf ("чётное\n");}
    if (m == 1)
    {printf ("не чётное\n");}
    return 0;
}