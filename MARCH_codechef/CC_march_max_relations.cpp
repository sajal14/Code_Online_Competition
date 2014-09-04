#include<iostream>
//#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[n][n];
string b[n];
int l=0;
for(int i=0;i<n;i++)
{ for(int j=0;j<n;j++)
{ if(i==j)
a[i][i]=0;
else a[i][j]=7;
}
}

for(int i=0;i<n;i++)
{
    printf("\n");
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
}
for(int i=0;i<m;i++)
{ int g=0,p=0,u=0;
string d,f;
cin>>d>>f;
for(int i=0;i<l;i++)
{ if(b[i]==d)
{ g=1;
p=i;
i=l;

}
}
if(g==0)
{ b[l]=d;
p=l;
l++;

}
g=0;
for(int i=0;i<l;i++)
{ if(b[i]==f)
{ g=1;
u=i;
i=l;
}
}

if(g==0)
{ b[l]=f;
u=l;
l++;

}
a[p][u]=1;
a[u][p]=1;
}
for(int i=0;i<n;i++)
{
    printf("\n");
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
}

/* MAIN LOGIC : same as all shortest paths algo. Here we have to find maximum relation if any was there
    step 1 : we initialized all numbers in the array with maximum number possible
    step 2: those with the direct relations are marked as 1
    step 3 : now for each k(i.e allowing to pass through k) check whether if a[i][j]>a[i][k]+a[k][j] then replace it
    step 4: after creating the complete 2d array, take the maximum number out of it.
*/
for(int k=0;k<n;k++)
{
    { for(int i=0;i<n;i++)
{ for(int j=0;j<n;j++)
{ if(a[i][j]>(a[i][k]+a[k][j]))
a[i][j]=a[i][k]+a[k][j];
}
}
}
printf("\nfor k =%d :\n",k);
for(int i=0;i<n;i++)
{
    printf("\n");
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
}
}


int f=0,ma=0;
for(int i=0;i<n;i++)
{ for(int j=0;j<n;j++)
{ if(a[i][j]>6)
f=1;
else
if(a[i][j]>ma)
ma=a[i][j];
}
}
if(f==0)
cout<<ma<<"\n";
else cout<<"DISCONNECTED\n";
// getch();
return 0;
}
