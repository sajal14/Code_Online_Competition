/*http://www.codechef.com/problems/COINS/*/

#include <stdio.h>
#define MAX_SIZE 1000000
unsigned int N[MAX_SIZE]={0};
unsigned int coins(long n)
{
	unsigned int s;
	if(n<12)return n; //if coins are less than 12 return it ..as it is the maximum
	if(n<MAX_SIZE)   //if n comes in the range of array(memoized array)
	{
		if(N[n]!=0)return N[n]; //if array has some value return it(without calculating again)
		else
		{
    		s=coins(n/2)+coins(n/3)+coins(n/4);
        	if(s>n)
        	{
        		N[n]=s;  //store the greater one in the array
        		return s;
        	}
        	else
        	{
        		N[n]=n;
        		return n;
        	}
		}
	}
	else //normal without any memoization..this is when it does not comes in range of the array.
	{
		s=coins(n/2)+coins(n/3)+coins(n/4);
    	return (s<n)?n:s;
	}
}

int main()
{
	unsigned int n,s;
	while(scanf("%u",&n)!=EOF)
	{
		printf("%u\n",coins(n));
	}
	return 0;
}
