#include<stdio.h>
#include<string.h>

int tab[26]={0};
int flag[26]={0};
int main()
{
    char s[81];
    gets(s);
    int i=0;
    while(s[i]!='\0')
     {tab[s[i]-'a']++;
     i++;
     }


     for(i=0;s[i]!='\0';i++)
     {
         if(!flag[s[i]-'a'])
         {printf("%c%d",s[i],tab[s[i]-'a']);
            flag[s[i]-'a']++;
            }
        printf("\n");

     }
    return 0;
}
