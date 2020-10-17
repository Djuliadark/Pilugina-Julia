#include<stdio.h>
#include<math.h>
int main()
{
int x,y,x1,y1,x2,y2,a,b,c;
float P,S,p;
printf("Координаты точки А\n x = ");
scanf("%d",&x);
printf(" y = ");
scanf("%d",&y);
printf("Координаты точки B\n x = ");
scanf("%d",&x1);
printf(" y = ");
scanf("%d",&y1);
printf("Точка С находится между точками А и В");
printf("Координаты точки C\n x = ");
scanf("%d",&x2);
printf(" y = ");
scanf("%d",&y2);
a = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
b = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
c = sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
P = 2 * (a + b + c);
p = 0.5 * P;
S = sqrt(p*(p-a)*(p-b)*(p-c));
printf (" Площадь треугольника = %.1f\n", S);
printf (" Периметр треугольника = %.1f\n", P);
return 0; 
}