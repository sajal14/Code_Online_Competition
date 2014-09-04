#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*http://www.ardendertat.com/2011/12/01/programming-interview-questions-19-find-next-palindrome-number/*/


int is_palindrome(char *k)
{
    int l=strlen(k)-1;
    int i=0;
    while(i<l)
    {
        if(k[i++]!=k[l--])
        return 0;
    }

    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    { int l,kn1,kn2,c,i,t;
        char k[1000001];

     l=strlen(k);
        scanf("%s",k);
       /* if(is_palindrome(k))
         {
             printf("yes");
             t=(k[l/2]-'0')+1;
             k[l/2]=t+'0';
             printf("!%s!",k);
         }*/
         kn1=atoi(k);
       l=strlen(k);
       if((l%2)==1)
       {
          for(i=0;i<l/2;i++)
          k[l-i-1]=k[i];

           kn2=atoi(k);
           if(kn2<kn1)
           {
               c= (k[l/2]-'0'+1)+'0';
               k[l/2]=c;
           }
       }
       else{
           for(i=0;i<(l/2);i++)
           k[l-i-1]=k[i];
           kn2=atoi(k);
           if(kn2<kn1)
           {
               int c2;
               c=(k[l/2-1]-'0'+1)+'0';
               c2=(k[l/2]-'0'+1)+'0';
               k[l/2-1]=c;
               k[l/2]=c2;
           }

       }
       kn1=atoi(k);
       printf("%d\n",kn1);

    }
}
