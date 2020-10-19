#include<stdio.h>
#include<math.h>
int main()
{
    int G,s;
    printf ("Введите номер года  = ");
    scanf ("%d", &G);
    s = (G - 1)/100 + 1;
    printf ("Столетие = %d", s);
    return 0;
}