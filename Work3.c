#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
float sr;
printf("Ввод a:");
scanf("%d",&a);
printf("Ввод b:");
scanf("%d",&b);
sr = (a + b)/2;
printf (" Среднее арифметическое = %.1f", sr);
return 0; 
}