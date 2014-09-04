/*http://www.spoj.pl/problems/FCTRL/*/

/*http://www.algorithmist.com/index.php/SPOJ_FCTRL*/

#include<stdio.h>
#include<math.h>
#define lo5 (log(5))
int zeta(int n)
{
    int ln= log(n)/log(5);
    int ret=0,p;

    for(p=5;p<=n;p*=5)
        ret+=n/p;
    return ret;
}

int main()
{

    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",zeta(n));
    }
    return 0;
}
