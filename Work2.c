#include<stdio.h>
#include<math.h>
int main()
{
int d;
float pi = 3.14;
float L;
printf("Ввод диаметра d:");
scanf("%d",&d);
L = pi * d;
printf (" L = %.2f\n", L);
return 0; 
}