#include <stdio.h>
#include <math.h>

int main()
{
    int i,N;
    int A[10];
    
    printf ("N = ");
    scanf ("%d", &N);

    for (i=0;i<N;i++)
    {
        printf ("A[%d] = ", i+1);
        scanf ("%d",&A[i]);
    }
    int k=0;
    for (i=0; i<N; ++i){
            if (A[k]!=A[i]){
                ++k;
                A[k]=A[i];
           }
    }
    ++k;
 
    printf("A - %i\n",k);
    for (i=0; i<k; ++i) 
    printf("  %i: %i\n",i+1,A[i]);
    return 0;
}