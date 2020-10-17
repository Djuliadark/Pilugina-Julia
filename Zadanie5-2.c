#include<stdio.h>
#include<math.h>
int main()
{
int x,y,x1,y1,x2,y2;
float d,d1,s;
printf("Координаты точки А\n x = ");
scanf("%d",&x);
printf(" y = ");
scanf("%d",&y);
printf("Координаты точки B\n x = ");
scanf("%d",&x1);
printf(" y = ");
scanf("%d",&y1);
printf("Координаты точки C\n x = ");
scanf("%d",&x2);
printf(" y = ");
scanf("%d",&y2);
d = sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
d1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
s = d+d1;
printf (" Длина отрезка АС = %.3f\n", d);
printf (" Длина отрезка ВС = %.3f\n", d1);
printf (" Сумма длин отрезков = %.3f\n", s);
return 0; 
}