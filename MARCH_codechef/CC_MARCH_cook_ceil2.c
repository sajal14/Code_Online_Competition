#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int s[1001];
 char* tab[1000];
 int a[11];
 int ciel(int n)
{

    int r,i;
    for(i=0;i<10;i++)
        a[i]=0;

    while(n)
    {
        r=n%10;
        if((r!=3)&&(r!=5)&&(r!=8))
            return 0;
        else
        {
            a[r]++;
            n=n/10;
        }

    }
//printf("here %d %d %d\n",a[8],a[5],a[3]);
    if((a[8]>=a[5])&&(a[8]>=a[3])&&(a[5]>=a[3]))
       {
           return 1;

       }
    else return 0;
}
int main()
{char *p;
int i=0;

     int price;
    int t,r,cnt=0;
    scanf("%d\n",&t); // \n is used in scanf whenever gets is used.

    while(t--)
    {
        gets(s);
    p=s;
     p= strtok(p," ");
     i=0;
    while(p)
    {
        tab[i++]=p;  //storing each word in tab[i]

        p= strtok(NULL," ");
    }

   // printf("%s",tab[i-1]);

    price=atoi(tab[i-1]);

    if(ciel(price))
        {
            cnt++;
        }
    }
printf("%d\n",cnt);
return 0;

}
