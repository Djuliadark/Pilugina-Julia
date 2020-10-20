#include<stdio.h>
#include<math.h>
int main()
{
    int A,k,m,c,a1;
    printf (" A = ");
    scanf ("%d",&A);
    k = A / 100;
    m = A % 100 / 10; 
    c = A % 10;
    if ((k > m)&(m > c))
    {printf("Цифры данного числа образуют убывающую последовательность");}
    if ((k < m)&(m < c))
    {printf("Цифры данного числа образуют возрастающую последовательность");}
    return 0;
}