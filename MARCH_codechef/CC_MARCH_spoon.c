#include<stdio.h>

int a[101][101];

int spoon(int r,int c)
{int i,j,flag,tempi,temp2i,tempj,temp2j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
       {
           if((a[i][j]==115)||(a[i][j]==83))
            {
                flag=0;
                tempi=i;
                temp2i=i;
                tempj=j;
                temp2j=j;
                if((a[++tempi][tempj]==112)||(a[tempi][tempj]==80))//p
                    if((a[++tempi][tempj]==111)||(a[tempi][tempj]==79))//o
                        if((a[++tempi][tempj]==111)||(a[tempi][tempj]==79))//o
                             if((a[++tempi][tempj]==110)||(a[tempi][tempj]==78))
                                flag=1;
                if((a[temp2i][++temp2j]==112)||(a[temp2i][temp2j]==80))//p
                    if((a[temp2i][++temp2j]==111)||(a[temp2i][temp2j]==79))//o
                        if((a[temp2i][++temp2j]==111)||(a[temp2i][temp2j]==79))//o
                             if((a[temp2i][++temp2j]==110)||(a[temp2i][temp2j]==78))
                                    flag=1;


                if(flag)
                    return 1;
            }
       }
    return 0;
}
int main()
{
    int t,r,c,i,j;
    char s[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&r,&c);

        for(i=0;i<100;i++)
            for(j=0;j<100;j++)
                a[i][j]=0;
        for(i=0;i<r;i++)
         {
             scanf("%s",s);
             for(j=0;s[j]!='\0';j++)
                a[i][j]=s[j];
         }

if(spoon(r,c))
    printf("There is a spoon!\n");
else
    printf("There is indeed no spoon!\n");


/*        for(i=0;i<r;i++)
         {
             printf("\n");
             for(j=0;j<c;j++)
                printf("%d ",a[i][j]);
         }
*/
        /*while(s[i]!='\0')
            {printf("%d ",s[i]);
                i++;
            }*/

}

return 0;
}

