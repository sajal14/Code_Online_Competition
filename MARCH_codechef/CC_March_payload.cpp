#include <iostream>
#include<stdio.h>
using namespace std;

int w[1000],p[1000],p_no[1000],n,m;
float pwr[1000];

template <class T>
void swap(T *a,int i,int j)
{
	T temp;
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	return;
}


void knapsack()
{
	int u,i;
	u=m;
	float x[1000];
	for(i=0;i<n;i++)
		x[i]=0;
	for(i=0;i<n;i++)
	{
		if(w[i]>u)
			break;
		else
		{
			x[i]=1;
			u=u-w[i];
		}
	}
	if(i<=n)
		x[i]=(float)u/w[i];
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(p_no[i]>p_no[j])
			{
				swap(p_no,i,j);
				swap(x,i,j);
				swap(p,i,j);
			}
		}
	}
	float opt_solution=0;
	for(i=0;i<n;i++)
	{
    opt_solution=opt_solution+(p[i]*x[i]);
	}
	printf("%.6f",opt_solution);
}


int main()
{
	int i;
	cin>>n;
	cin>>m;
	for(i=0;i<n;i++)
	{
		p_no[i]=i+1;
		cin>>w[i];
		cin>>p[i];
		pwr[i]=(float)p[i]/w[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(pwr[i]<pwr[j])
			{
				swap(p_no,i,j);
				swap(w,i,j);
				swap(p,i,j);
				swap(pwr,i,j);
			}
		}
	}
	knapsack();

return 0;
}
