#include<stdio.h>
#include<string.h>
void rev(char *b,char*e)
{char t; //only character
 while(b<e)
{t=*b;
*b++=*e;
*e--=t;}}
int main()
{
    char s[1000000],c;
    int i=0,j,n,k;
    scanf("%d",&n);
    while((scanf("%c",&c))!=EOF)
     s[i++]=c;
    s[i]='\0';
    rev(s,s+i-1);
    char *tab[1025];
    i=0;
    char*p =s;
    p= strtok(p," ""\n");
    while(p)
    {
        tab[i++]=p;  //storing each word in tab[i]
        p= strtok(NULL," ""\n");
    }
    for(j=0;j<i;j++)
       for(k=0;k<n;k++)
         printf("%s ",tab[j]);
    return 0;
}
