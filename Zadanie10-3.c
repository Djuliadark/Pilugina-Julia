#include<stdio.h>
#include<math.h>
int main()
{
    int A,k,m,c,a1;
    printf (" A = ");
    scanf ("%d",&A);
    k = A / 10;
    m = A / 100; 
    c = A % 2;
    a1 = ((k != 0)&(m == 0)&(c == 0));
    if (a1 == 1)
    {printf("Число двузначное чётное");}
    else {printf("Число не двузначное чётное");}
    return 0;
}