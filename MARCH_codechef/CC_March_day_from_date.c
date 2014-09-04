# include <stdio.h>
#include<string.h>
int main()
{
int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int date, mon, year, i, r, s = 0,flag=0;
char week[7][10] ;
strcpy(week[0], "Sunday") ;
strcpy(week[1], "Monday") ;
strcpy(week[2], "Tuesday") ;
strcpy(week[3], "Wednesday") ;
strcpy(week[4], "Thursday") ;
strcpy(week[5], "Friday") ;
strcpy(week[6], "Saturday") ;
scanf("%d%d%d",&date,&mon,&year) ;

if(((year%100!=0)&&(year%4==0))||(year%400==0))
{
flag=1;
month[1] = 29 ;
}
for(i = 0 ; i < mon - 1 ; i++)
s = s + month[i] ;
s = s + (date + year + (year / 4) - 2) ;
s = s % 7 ;
if(flag==1)
s=s-1;
printf("%s.\n",week[s]) ;
return 0;
}
