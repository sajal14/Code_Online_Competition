#include<stdio.h>
#include<string.h>
char s[100];
char a[100];
void encode()
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        switch(s[i])
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
                        a[j]='a';                    break;
            default: a[j]=s[i];
        }
        j++;
        i++;
    }
    a[j]='\0';

}

int main()
{
    while(1)
    {
        gets(s);
        if(!strcmp(s,"#"))
            break;
        encode();
        printf("%s\n",a);

    }
return 0;
}
