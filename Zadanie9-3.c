#include<stdio.h>
#include<math.h>
int main()
{
    int K,c,m,N;
    printf ("K = ");
    scanf ("%d", &K);
    printf ("1-ое января было под индексом N = ");
    scanf ("%d", &N);
    c = (K + N - 2)/7;
    c = floor(c);
    m = c + 1;
    if (m == 1)
    {printf ("День недели 1 - понедельник");}
    if (m == 2)
    {printf ("День недели 2 - вторник");}
    if (m == 3)
    {printf ("День недели 3 - среда");}
    if (m == 4)
    {printf ("День недели 4 - четверг");}
    if (m == 5)
    {printf ("День недели 5 - пятница");}
    if (m == 6)
    {printf ("День недели 6 - суббота");}
    if (m == 7)
    {printf ("День недели 7 - воскресенье");}
    return 0;
}