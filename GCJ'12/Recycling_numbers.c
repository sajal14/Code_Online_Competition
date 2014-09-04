#include<stdio.h>
#include<math.h>

int h[2000001];
int find_len(int v)
{
    int s=0;
    while(v/=10)
        s++;
    return s+1;
}
int main()
{
    FILE *in,*o;
     in=fopen("input.in","r");
    o=fopen("output.txt","w");

        int t,i,j,k,temp,length,cnt,m,n,num,mul;
        fscanf(in,"%d",&t);
        //scanf("%d",&t);
        for(i = 1; i <= t; i++)
        {cnt = 0;
            for(k=0;k<=2000000;k++)
                h[k]=1;
            fscanf(in,"%d%d",&m,&n);
           // scanf("%d%d",&m,&n);
            for(j =m; j <=n; j++)
            {length = find_len(j);
             temp = j;
              mul=pow(10,length);
                  while(length> 1)
                    {
                        num = (temp + (temp % 10)*mul ) / 10;
                                if((num <= n)&&(num > j)&&(num != temp))
                                        {  printf("%d==> %d\n",temp,num);
                                            h[num]=0;
                                            cnt++;
                                        }
                                temp = num;
                                length--;
                    }
                }
         //       printf("Case #%d: %d\n",i,cnt);
                fprintf(o,"Case #%d: %d\n",i,cnt);
        }
        return 0;
}
