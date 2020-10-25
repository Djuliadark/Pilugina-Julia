#include <locale.h> 
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
  int n;
  float s,a,k;
 printf("Введите число N ");
 scanf ("%d", &n);
 printf("Введите число A ");
 scanf ("%f", &a);
 k = 1;
 s = 1;
 int z = -1;
 int i;
  for  (i = 2; i<=n;i++)
    k *= a;
    k *= z;
    s += k;
    printf("сумма = %.2f \n ", s);
    return 0;
}