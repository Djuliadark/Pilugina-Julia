#include<stdio.h>
#include<math.h>
int main()
{
    int N,k,c;
    printf ("Прошло секунд N = ");
    scanf ("%d", &N);
    k = N/60;
    k = floor(k);
    c = N - k*60;
    printf ("Секунд с начала последней минуты = %d", c);
    return 0;
}