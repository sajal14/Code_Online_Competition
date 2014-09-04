#include<stdio.h>
#include<string.h>

char a[100];
int j;
void encode(char c)
{
    int i=0;

        switch(c)
        {
            case ' ':a[j++]='%';
                        a[j++]='2';
                        a[j]='0';
                        break;
            case '!': a[j++]='%';
                        a[j++]='2';
                        a[j]='1';
                        break;
            case '$': a[j++]='%';
                        a[j++]='2';
                        a[j]='4';
                    break;
            case '%' :a[j++]='%';
                        a[j++]='2';
                        a[j]='5';
                    break;
            case '(': a[j++]='%';
                        a[j++]='2';
                        a[j]='8';
                        break;
            case ')': a[j++]='%';
                        a[j++]='2';
                        a[j]='9';
                        break;
            case '*': a[j++]='%';
                        a[j++]='2';
                        a[j]='a';
                            break;
            default: a[j]=c;
        }
        j++;

    }

int main()
{
    char c;
    int flag,in;
    while(1)
    {
        j=0;
        in=1;
        while((c=getchar())!='\n')
        {
        //gets(s);
        //if(!strcmp(s,"#"))
          //  break;
           if((c=='#')&&(in))
              {flag=1;
                break;
              }
            else
            { flag=0;
                in=0;
            }

        encode(c);

        }
         if(flag)
        break;

        a[j]='\0';

        //printf("%s\n",a);
        puts(a);

    }
return 0;
}
