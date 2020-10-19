#include<stdio.h>
#include<math.h>
int main()
{
    int V1,V2,S,S1,S2,T,K;
    float r;
    printf ("Скорость первого автомобиля = ");
    scanf ("%d", &V1);
    printf ("Скорость второго автомобиля = ");
    scanf ("%d", &V2);
    printf ("Расстояние между ними = ");
    scanf ("%d", &S);
    printf ("Через часов  = ");
    scanf ("%d", &T);
    S1 = V1 * T;
    S2 = V2 * T;
    K = S + S1 + S2;
    printf ("Расстояние между автомобилями через %d ч  равно %d км \n", T,K);
    return 0;
} 