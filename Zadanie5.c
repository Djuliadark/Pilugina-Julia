#include<stdio.h>
#include<math.h>
int main()
{
int x,y,x1,y1;
float d;
printf("Координаты точки А\n x = ");
scanf("%d",&x);
printf(" y = ");
scanf("%d",&y);
printf("Координаты точки B\n x = ");
scanf("%d",&x1);
printf(" y = ");
scanf("%d",&y1);
d = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
printf (" Расстояние между точками = %.3f\n", d);
return 0; 
}