#include<stdio.h>

int a[26];

int main()
{
    char c;
    int ch;
    int i,d,t,min=1000000,ans,cn=0;
    char s[1001];
    FILE *o,*in;
    in = fopen("input.txt","r");
    o = fopen("output.txt","w");

    //scanf("%d",&t);
   fscanf(in,"%d",&t);

    while(t--)

    {
        fscanf(in,"%d",&ch);

    fgets(s,sizeof(s),in);

     //   gets(s);
      min=1000000;
      for(i=0;i<26;i++)
        a[i]=0;


       // gets(s);
  //  printf("%s",s);

    for(i=0;s[i]!='\0';i++)
    {
        d=s[i]-65;
        if((d>=0)&&d<=25)
            a[d]++;

    }

  /*  for(i=0;i<26;i++)
    printf("%c: %d\n",i+65,a[i]);
    */
    for(i=0;i<26;i++)
    {
        if((i==0)||(i==4)||(i==7)||(i==10)||(i==15)||(i==17)||(i==20))
        {
            if(min>a[i])
               {min=a[i];
                //printf(" %d ",min);

               }
               //printf("%c,%d\n",i+65,a[i]);
        }
    }

  //  printf(" %d ",min);

  if((2*min)<=a[2])
    ans=min;
    else
    ans=a[2]/2;


    if(a[2]<2)
    ans=0;

    cn++;
   fprintf(o,"Case #%d: %d\n",cn,ans);
    //printf("Case #%d: %d\n",cn,ans);
    }

 fclose(in);
 fclose(o);
return 0;
}
