#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;

char a[10000];
   char g[10000];
string s,temp,s2;
int main()
{
    int n,i,t,a2,j,len,tno,cnt=0;
    scanf("%d",&t);
     map<string,int> mymap;
  map<string,int>::iterator it;
    while(t--)
    {
        cnt=0;
        scanf("%s",a);
         n=atoi(a);
        scanf("%d",&a2);
        len=strlen(a);

        if((n==10)||(n==100)||(n==1000)||(n==10000)||(n==100000)||(n==1000000))
                len--;

     /*mymap[a]=1;
     for(it=mymap.begin();it!=mymap.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }*/
        strcat(a,a);
     s=a;
    temp;
    mymap.erase(mymap.begin(),mymap.end());
    //cout<<"\n"<<s;
    for(i=n;i<=a2;i++)
        {
            itoa(i,g,10);
            s2=g;
            if(mymap[s2]!=1)
            {
             strcat(g,g);
             s=g;
             if((i==10)||(i==100)||(i==1000)||(i==10000)||(i==100000)||(i==1000000))
                len++;
            for(j=1;j<len;j++)
            {
                temp=s.substr(j,len);
                if(mymap[temp]!=1)
                {
                    tno=atoi(temp.c_str());
                    if((tno>=n)&&(tno<=a2)&&(tno!=i))
                    {   printf("\n%d==>%d\n",i,tno);
                        cnt++;
                        mymap[s2]=1;
                         mymap[temp]=1;
                    }

                }

                //cout<<"\n"<<temp;
            }
            }


        }


    /*for(it=mymap.begin();it!=mymap.end();it++)
    {
        s=(*it).first;
       tno=atoi(s.c_str());
        if((tno>=n)&&(tno<=a2))
            {
                printf("==>%d\n",tno);
                cnt++;
            }
    }*/
    printf("\n~%d~\n",cnt);

    }
    return 0;
}
