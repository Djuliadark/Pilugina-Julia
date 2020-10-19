#include<stdio.h>
#include<math.h>
int main()
{
    int A1,A2,B1,B2,C1,C2,det,xd,yd;
    float x,y;
    printf ("A1*x + B1*y = C1\n");
    printf ("A2*x + B2*y = C2\n");
    printf ("коэффицент А1 = ");
    scanf ("%d", &A1);
    printf ("коэффицент B1 = ");
    scanf ("%d", &B1);
    printf ("коэффицент C1 = ");
    scanf ("%d",&C1);
    printf ("коэффицент А2 = ");
    scanf ("%d", &A2);
    printf ("коэффицент B2 = ");
    scanf ("%d", &B2);
    printf ("коэффицент C2 = ");
    scanf ("%d",&C2);
    printf ("%d*x + %d*y = %d\n",A1,B1,C1);
    printf ("%d*x + %d*y = %d\n",A2,B2,C2);
    det = A1*B2 - B1*A2;
    xd = C1*B2 - B1*C2;
    yd = A1*C2 - C1*A2;
    x = xd/det;
    y = yd/det;
    printf ("det = %d\n", det);
    printf ("x = %.2f\n", x);
    printf ("yd = %d\n", yd);
    printf ("y = %.2f\n", y);
    return 0;
} 