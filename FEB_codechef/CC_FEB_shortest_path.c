#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 1
char *s;
char* tab[];


 double mysqrt( double num)
{
    double g_sqrt =1;
    while(g_sqrt*g_sqrt<num)
        g_sqrt++;
    double g_square=g_sqrt*g_sqrt;

    while(g_square-num>=0.00000000001)
    {
        g_sqrt=(g_sqrt+num/g_sqrt)/2;
        g_square=g_sqrt*g_sqrt;

    }
    return g_sqrt;
}
int tokenize()
{
    int j;
   // tab=malloc(1*sizeof(int *));
    //for(j=0;j<2;j++)
      //  tab[j]=malloc(1*sizeof(j));
    int i=0;
    char *p=s;
    p= strtok(p," ");
    while(p)
    { tab[i++]=p;
      p= strtok(NULL," ");
    }
    return i;
}



int main()
{
    int t,l,i;
    char r;
    long long n,x,y;
    scanf("%d",&t);
    scanf("%c",&r);
    int xp,yp,xn,yn,N,S,E,W;
    double ans;
    while(t--)
   {
       //getstring(s);
       s=  malloc (100000*sizeof(char));
       gets(s);

       l=tokenize();

       free(s);
       x=0;
       y=atoll(tab[0]);
       yp=1;
       yn=0;
       xp=0;
       xn=0;
       N=1;
       S=0;
       W=0;
       E=0;

    for(i=1;i<l;i++)
       {
           if((i%2)==0)
            {
                n=atoll(tab[i]);
                if(xp)
                   {if(n<0)
                        {
                            W=1;
                            E=0;
                        }
                       x=x+ n;

                   }
                else if(xn)
                {
                    if(n<0)
                        {
                            W=0;
                            E=1;
                        }
                    x=x-n;
                }
                else if(yp)
                {
                if(n<0)
                        {
                            N=0;
                            S=1;
                        }

                 y=y+n;
                }

                else if(yn)
                {
                     if(n<0)
                        {
                            N=1;
                            S=0;
                        }
                         y=y-n;
                }


               // printf("x:%lld y:%lld\n",x,y);

            }

            else
            {
                    if(((strcmp(tab[i],"L"))==0)&&(N==1))
                        {
                            xp=0;
                            xn=1;
                            yp=0;
                            yn=0;
                            N=0;
                            S=0;
                            E=0;
                            W=1;

                        }
                    else if(((strcmp(tab[i],"R"))==0)&&(N==1))
                    {       xp=1;
                            xn=0;
                            yp=0;
                            yn=0;
                            N=0;
                            S=0;
                            E=1;
                            W=0;

                    }
                    else if(((strcmp(tab[i],"L"))==0)&&(W==1))
                         {       xp=0;
                            xn=0;
                            yp=0;
                            yn=1;
                            N=0;
                            S=1;
                            E=0;
                            W=0;

                    }
                    else if(((strcmp(tab[i],"R"))==0)&&(W==1))
                         {       xp=0;
                            xn=0;
                            yp=1;
                            yn=0;
                            N=1;
                            S=0;
                            E=0;
                            W=0;

                    }
                     else if(((strcmp(tab[i],"L"))==0)&&(E==1))
                         {   xp=0;
                            xn=0;
                            yp=1;
                            yn=0;
                            N=1;
                            S=0;
                            E=0;
                            W=0;

                    }
                      else if(((strcmp(tab[i],"R"))==0)&&(E==1))
                         {   xp=0;
                            xn=0;
                            yp=0;
                            yn=1;
                            N=0;
                            S=1;
                            E=0;
                            W=0;

                    }
                     else if(((strcmp(tab[i],"L"))==0)&&(S==1))
                         {   xp=1;
                            xn=0;
                            yp=0;
                            yn=0;
                            N=0;
                            S=0;
                            E=1;
                            W=0;

                    }
                     else if(((strcmp(tab[i],"R"))==0)&&(S==1))
                    {       xp=0;
                            xn=1;
                            yp=0;
                            yn=0;
                            N=0;
                            S=0;
                            E=0;
                            W=1;

                    }
            }

    }

    ans= sqrt((x*x)+(y*y));
    //printf("%lld %lld",x,y);

    printf("%.1f",ans);
    if(x<0)
    {
        if(y==0)
            printf("W\n");
        else if(y>0)
            printf("NW\n");
        else if(y<0)
            printf("SW\n");
    }
    else if(x>0)
    {
       if(y==0)
            printf("E\n");
        else if(y>0)
            printf("NE\n");
        else if(y<0)
            printf("SE\n");

    }
//free(tab);
//free(s);
   }
return 0;
}
