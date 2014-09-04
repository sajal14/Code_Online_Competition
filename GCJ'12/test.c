#include<stdio.h>
FILE *in,*o;
int main()
{
 int t,a[500],n,s,p,i,j,cnt,y;
 in=fopen("input.in","r");
 o=fopen("output2.txt","w");
 fscanf(in,"%d",&t);
 for(i=1;i<=t;i++)
 {
  fscanf(in,"%d%d%d",&n,&s,&p);
  cnt=n;
  y=p;
  for(j=0;j<n;j++)
   fscanf(in,"%d",&a[j]);
    cnt=0;
 for(j=0;j<n;j++)
 {
  if(a[j]>=(p*3))
        cnt++;
        else{
            if((a[j]==3*p-2)||(a[j]==3*p-1))
                {
                    cnt++;
                }
            else if(((a[j]==3*p-3)||(a[j]==3*p-4))&&(s!=0)&&(p!=1))
            {
                 s--;
                cnt++;
            }
        }
 }
 fprintf(o,"Case #%d: %d\n",i,cnt);
  printf("Case #%d: %d\n",i,cnt);
 }
}
