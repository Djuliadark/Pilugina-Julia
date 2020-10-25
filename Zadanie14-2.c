#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,h;
    printf ("Введите число А ");
    scanf ("%i", &a);
    printf ("Введите число B ");
    scanf ("%i", &b);
    h=a;
    while (h>b)
    { h=h-b; }
    printf ("остаток = %d",h);
  return 0;
}