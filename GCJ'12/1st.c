#include<stdio.h>
char hash[]={'y','h','e','s','o','c','v','x','d','u','i','g','l','b','k','r','z','t','n','w','j','p','f','m','a','q'};
int main()
{

    FILE *in,*o;
    char s[101];
    in=fopen("input.in","r");
    o=fopen("output.txt","w");
    int t,c=1;
    int i,g;
    fscanf(in,"%d",&t);
    fscanf(in,"%d",&g);
    while(t--)
    {fgets(s,sizeof(s),in);
        fscanf(in,"%d",&g);
        fprintf(o,"Case #%d: ",c);
        c++;
        for(i=0;(s[i]!='\0')&&(s[i]!='\n');i++)
        {if(s[i]==' ')
            {
                fprintf(o,"%c",s[i]);
                continue;
            }
            fprintf(o,"%c",hash[s[i]-'a']);
        }
        fprintf(o,"\n");

    }
    return 0;

}
