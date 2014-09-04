#include <iostream>

using namespace std;

int w[10],p[10],p_no[10],n,m;
float pwr[10];

template <class T>
void swap(T *a,int i,int j)
{
	T temp;
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	return;
}

void line()
{
	cout<<"\n";
	for(int i=0;i<80;i++)
		cout<<"=";
	cout<<"\n";
}

void display()
{
	line();
	cout<<"\n\t\t\t\tKnapsack\n";
	line();
	cout<<"\nNumber Of Products:\t"<<n<<"\nTruck Max Capacity:\t"<<m<<"\n";
	line();
	cout<<"\nSl.No\t\tWeight\t\tProfit\t\tPWR\n";
	line();
	for(int i=0;i<n;i++)
		cout<<p_no[i]<<"\t\t"<<w[i]<<"\t\t"<<p[i]<<"\t\t"<<pwr[i]<<"\n";
	line();
}

void knapsack()
{
	int u,i;
	u=m;
	float x[10];
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
	cout<<"\nThe Order is\n\n";
	cout<<"(";
	for(i=0;i<n;i++)
		cout<<p_no[i]<<"  ";
	cout<<")";
	cout<<"\t\t(";
	for(i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
		opt_solution=opt_solution+(p[i]*x[i]);
	}
	cout<<")";
	cout<<"\n\nThe optimal solution is\t"<<opt_solution;
}


int main()
{
	int i;
	cout<<"\nEnter the Number of items:\t";
	cin>>n;
	cout<<"\nEnter the truck capacity:\t";
	cin>>m;

	cout<<"\nEnter weights for "<<n<<" Items\n\n";
	for(i=0;i<n;i++)
	{
		p_no[i]=i+1;
		cout<<"\nProduct "<<i+1<<"\n\nWeight:\t";
		cin>>w[i];
		cout<<"\nProfit:\t";
		cin>>p[i];
		pwr[i]=(float)p[i]/w[i];
	}
	display();
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
	display();
	knapsack();
	cout<<"\n\n";
}
