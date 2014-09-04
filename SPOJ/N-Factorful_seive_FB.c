#include<stdio.h>
int prime_factor[1000002];
int dp[1000001][8];
int tab[1000002];


int main()
{
	 int i,j,t,a,b,n,cnt,k=0,l=0,p=0,m=0,y=0,o=0,u=0;

 for(i=1;i<=1000000;i++)
        prime_factor[i] = i;

for(i=2;i<= 1000000;i++)
{
        if(prime_factor[i] == i) //<- this is true only when i is prime
        {
         tab[i]++;
	 for(j=i+i;j<= 1000000;j+=i)
        {
            prime_factor[j]=i;  //updating the value . therefore that number is not prime anymore.
            tab[j]++; //incrementing no which is multiples of i s.t. i is a prime number.
        }

        }
}
for(i=0;i<1000001;i++)
{
    for(j=0;j<8;j++)
        dp[i][j]=0;
}

for(i=2;i<=1000000;i++)
{
    switch(tab[i])
    {
            case 1:
                dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2];
                dp[i][3]=dp[i-1][3];
                dp[i][4]=dp[i-1][4];
                dp[i][5]=dp[i-1][5];
                 dp[i][6]=dp[i-1][6];
                dp[i][7]=dp[i-1][7];
             dp[i][1]=dp[i-1][1]+1;

            break;
            case 2: dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2];
                dp[i][3]=dp[i-1][3];
                dp[i][4]=dp[i-1][4];
                dp[i][5]=dp[i-1][5];
                 dp[i][6]=dp[i-1][6];
                dp[i][7]=dp[i-1][7];
                dp[i][2]=dp[i-1][2]+1;
            break;
            case 3:dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2];
                dp[i][3]=dp[i-1][3];
                dp[i][4]=dp[i-1][4];
                dp[i][5]=dp[i-1][5];
                 dp[i][6]=dp[i-1][6];
                dp[i][7]=dp[i-1][7];

                dp[i][3]=dp[i-1][3]+1;
            break;
            case 4:dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2];
                dp[i][3]=dp[i-1][3];
                dp[i][4]=dp[i-1][4];
                dp[i][5]=dp[i-1][5];
                 dp[i][6]=dp[i-1][6];
                dp[i][7]=dp[i-1][7];

                dp[i][4]=dp[i-1][4]+1;
            break;
            case 5:
           dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2];
                dp[i][3]=dp[i-1][3];
                dp[i][4]=dp[i-1][4];
                dp[i][5]=dp[i-1][5];
                 dp[i][6]=dp[i-1][6];
                dp[i][7]=dp[i-1][7];

                dp[i][5]=dp[i-1][5]+1;


            break;
            case 6:dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2];
                dp[i][3]=dp[i-1][3];
                dp[i][4]=dp[i-1][4];
                dp[i][5]=dp[i-1][5];
                 dp[i][6]=dp[i-1][6];
                dp[i][7]=dp[i-1][7];

                dp[i][6]=dp[i-1][6]+1;
            break;
            case 7: dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2];
                dp[i][3]=dp[i-1][3];
                dp[i][4]=dp[i-1][4];
                dp[i][5]=dp[i-1][5];
                 dp[i][6]=dp[i-1][6];
                dp[i][7]=dp[i-1][7];

                dp[i][7]=dp[i-1][7]+1;
            break;
    }
}


//for(i=0;i<20;i++)
//    printf("%d ",one[i]);

//printf("!%d!",tab[3]);
	scanf("%d",&t);
	while(t--)
	{
	    cnt=0;
        scanf("%d%d%d",&a,&b,&n);

           if(n==0)
            {if(a==1)
                printf("1\n");
                else
                printf("0\n");
            }
            else if(n<=7)
         printf("%d\n",dp[b][n]-dp[a-1][n]);
         else
         printf("0\n");

	}

//printf("!%d %d!",dp[2][1],dp[3][1]);
return 0;
}

