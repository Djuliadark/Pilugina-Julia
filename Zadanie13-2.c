#include <locale.h> 
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
  int n;
 printf("Введите число N ");
 scanf ("%i", &n);
 
 float p=1;
 int i;
  for  (i =0; i<=n; ++i)
    p *= 1.0+(float)i/10;
 
    printf("произведение  = %.2f \n ",p);
    return 0;
}