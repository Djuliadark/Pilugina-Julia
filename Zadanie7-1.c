#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float pi=3.14;
    float r;
    printf ("Введите значние угла а, так что 0<a<360\n a = ");
    scanf ("%d", &a);
    r = pi * a/180;
    printf ("Значние угла а в радианах = %.2f\n", r);
    return 0;
} 