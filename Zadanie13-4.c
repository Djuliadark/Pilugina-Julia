#include <locale.h> 
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
  int n,a;
 printf("Введите число N ");
 scanf ("%i", &n);
 printf("Введите число A ");
 scanf ("%i", &a);
 float q=1;
 int i;
  for  (i =1; i<=n; i++)
    q = q +  pow(i,a);
 
    printf("сумма равна  = %.2f \n ",q);
    return 0;
}