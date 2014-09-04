/*
print first 50000 ceil numbers
the first few Ciel numbers are 8, 58, 85, 88, 358, 385, 538, 583, 588, 835, 853, 858, 885, 888, ...
*/
#include <stdio.h>
#define MAXN 800000

unsigned long long int N[MAXN]={0};
int C3[MAXN]={0}, C5[MAXN]={0}, C8[MAXN]={0};

int ceil(int i)
{
    if((C3[i] <= C5[i]) && (C5[i] <= C8[i])&&(C3[i]<= C8[i]))
        return 1;
    else
    return 0;
}

int main()
 {
    int cnt=0;
    int f=0,b=0;
    b++;
    while (cnt <=10)
    {
        if (ceil(f))
        {cnt++;
         printf("%llu\n", N[f]);
        }

        N[b] = N[f] * 10 + 3;
         C3[b] = C3[f] + 1;
         C5[b] = C5[f];
          C8[b] = C8[f];
           ++b;

        N[b] = N[f] * 10 + 5;
         C3[b] = C3[f];
          C5[b] = C5[f] + 1;
           C8[b] = C8[f];
            ++b;

        N[b] = N[f] * 10 + 8;
         C3[b] = C3[f];
          C5[b] = C5[f];
           C8[b] = C8[f] + 1;
            ++b;
        ++f;
    }

    for( b=0;b<20;b++)
        printf("%llu  ",N[b]);
    return 0;
}
