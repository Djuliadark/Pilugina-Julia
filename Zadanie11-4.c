#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf ("Координата x = ");
    scanf ("%d", &x);
    printf ("Координата y = ");
    scanf ("%d", &y);
    if ((x>0)&&(y>0))
    {printf ("Точка находиться в 1-ой четверти");}
    if ((x<0) && (y>0))
    { printf ("Точка находиться в 2-ой четверти");}
    if ((x<0)&&(y<0))
    { printf ("Точка находиться в 3-ой четверти");}
    if ((x>0)&&(y<0))
    { printf ("Точка находиться в 4-ой четверти");}
    return 0;
}