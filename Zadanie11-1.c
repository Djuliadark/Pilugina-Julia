#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,n,k;
    printf ("Число А = ");
    scanf ("%d", &A);
    printf ("Число B = ");
    scanf ("%d", &B);
    if (A==B)
    { A = 0;
      B = 0; 
        printf ("Число А = %d, Число В = %d", A,B);}
    if (A!=B)
    { if (A>B)
        {printf ("Число А = %d, Число В = %d", A,A);}
      else 
        {printf ("Число А = %d, Число В = %d", B,B);}
    }
    return 0;
}