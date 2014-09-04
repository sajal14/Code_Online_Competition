#include<stdio.h>
#include<string.h>
int main()
{

    int t;
    char n[100000],len;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%s",n);
        //printf("%d",len);
        if((n[strlen(n)-1]-'0')%2)
            printf("Dexter\n");
        else
        printf("Mandark\n");

    }
return 0;
}
