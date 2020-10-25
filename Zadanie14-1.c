#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf ("Введите число А ");
    scanf ("%i", &a);
    printf ("Введите число B ");
    scanf ("%i", &b);
    int i;
    int k;
    for (i = a; i<=b; ++i)
    { for (k = 1; k<=i; k++)
      printf ("%i",i);
      printf ("\n");
    }
  return 0;
}