#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float pi=3.14;
    float g;
    printf ("Введите значние угла а, так что 0<a<6.28\n a = ");
    scanf ("%d", &a);
    g = 180 * a/pi;
    printf ("Значние угла а в градусах = %.2f\n", g);
    return 0;
} 