#include<stdio.h>
int l[1001]={0};
int initialize(char *s)
{
    int cnt=1,j=0,i=0;
    for(i=0;i<=1000;i++)
    {
        l[i]=0;
    }
    i=0;
    while(s[i++]!='\0')
    {
        if(s[i]==' ')
        {
            l[j++]=cnt;
            cnt=0;

        }
        else
        cnt++;

    }
    //printf("!%d!",cnt);
    l[j]=cnt-2; // for file
    return j;
}
int billboard(int fnt_size,int max_row,int s_len,int max)
{
    //printf("\nfnt: %d Row:%d width(length):%d",fnt_size,max_row,max);
    int j=0,r,flag;
    int temp=max;
    for(r=1;r<=max_row;r++)
    {
     while(max>0)
    {
        flag=0;
        if(l[j])
        {max-=fnt_size*l[j++];
         //printf("!%d!",max);

        }
        if((l[j]==0)&&(max>=0))
        return 1;
        if((max-fnt_size<=0)&&(max>=0)) //ending at space so no need to decrease the pointer
            flag=1;
        max-=fnt_size;
    }
    if((max<=0))
    {
        max=temp;
        if(!flag)
            j--;
    }
    }
    return 0;

}
int main()
{
    char s[1001];
    int words,w,h,i,rubbish,row,len,temp,font,t,cnt=1,save;

    FILE *o,*in;
    in = fopen("input.txt","r");
    o = fopen("out.txt","w");
    //scanf("%d",&t);
    fscanf(in,"%d",&t);

    while(t--)

    {
      // scanf("%d%d",&w,&h);
    fscanf(in,"%d%d",&w,&h);
    //scanf("%d",&rubbish);
    fscanf(in,"%d",&rubbish);

    //gets(s);
   fgets(s,sizeof(s),in);

    words= initialize(s);
    words++;
    //printf("%d\n",words);
    //printf("\nword lengths\n");
    /*for(i=0;i<1001;i++)
    if(l[i])
    printf("<%d>",l[i]);
*/
    len=0;
    for(i=0;i<1000;i++)
    {
        if(l[i])
        len+=l[i];
    }
    len+=words-1;
    //printf("!%d:%d!",words,len);
    //i=MAX(w,h);
    temp=10000;
    save=0;
    for(font=h,row=1;font>=1;font--,row++)
    {
    row=h/font;
    //printf("\n~%d~",billboard(font,row,len,w));
    //temp=h/i;
    if(billboard(font,row,len,w))
        {
        //printf("Case #%d: %d\n",cnt++,font);
        save=font;
        break;
        }

    }
    fprintf(o,"Case #%d: %d\n",cnt++,save);
    }
 fclose(in);
 fclose(o);
    return 0;
}
