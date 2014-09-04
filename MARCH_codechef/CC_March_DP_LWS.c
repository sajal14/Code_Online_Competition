#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[2001];

char tem[2001];
char tem2[2001];
int ans[2001];
void reverse(char *string)
{
   int length, c;
   char *begin, *end, temp;

   length = strlen(string);

   begin = string;
   end = string;

   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;

   for ( c = 0 ; c < length/2 ; c++ )
   {
      temp = *end;
      *end = *begin;
      *begin = temp;

      begin++;
      end--;
   }
}

int LIS(char *str,int len)
{
    int i,j,max=1;
    for(i=0;i<2000;i++)
        ans[i]=1;

    for(i=1;i<len;i++)
    {
        for(j=0;j<i;j++)
        {
            if((str[i]>=str[j]))
                if(ans[i]<ans[j]+1)
                ans[i]=ans[j]+1;
        }

    }
     for(i=0;i<len;i++)
    if(max<ans[i])
        max=ans[i];


   return max;
}

int main()
{
    int max=0,max2=0,max3=0,max4=0,i,len,j,t;
  scanf("%d",&t);
  while(t--)
    {
    max=0;
     max2=0;
    max3=0;
    max4=0;
        scanf("%s",s);
    len=strlen(s);
    max= LIS(s,len);

   // printf("%d",max);
   // for(i=0;i<len;i++)
     //   printf("\n%c : %d",s[i],ans[i]);


    int k=len-1;
    int cnt=0;
    j=0;
    while(k>=0)
    {
        if(ans[k]==(max-cnt))
        {
           // printf(" %c ",s[k]);
            cnt++;
         }
         else
             tem[j++]=s[k];
         k--;
    }
    tem[j]='\0';
   // printf("\nremaining %s\n",tem);
   // printf("\n\n");

    if(j!=0)
    max2=LIS(tem,j);
    //for(i=0;i<j;i++)
      // printf("%c :%d\n",tem[i],ans[i]);

//    printf("%d",max2);

    reverse(s);
    //printf("\nreversed %s",s);
  //  for(i=0;i<len;i++)
    //    printf("\n%c : %d",s[i],ans[i]);

    //printf("\n\n");
    max3=LIS(s,len);
  //  for(i=0;i<len;i++)
//        printf("\n%c : %d",s[i],ans[i]);

    k=len-1;
    j=0;
    cnt=0;
    while(k>=0)
    {
        if(ans[k]==(max3-cnt))
        {
           //printf(" %c ",s[k]);
            cnt++;
         }
         else
             tem2[j++]=s[k];
         k--;
    }
    tem2[j]='\0';
    //    printf("\nremaining %s\n",tem);

    if(j!=0)
    max4=LIS(tem2,j);
     //for(i=0;i<j;i++)
      // printf("%c :%d\n",tem[i],ans[i]);

    //printf("~ %d %d %d %d ~",max,max2,max3,max4);
    max=max+max2;
    max3=max3+max4;
    if(max>max3)
    printf("%d\n",max);
    else
     printf("%d\n",max3);
}
return 0;
}
