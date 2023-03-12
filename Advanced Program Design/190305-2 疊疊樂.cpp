#include <iostream>
using namespace std;

void sort(int* s,int* l,int n)
{
	int i,j,temp;
	for(i = 0;i < n-1;i++)
		for(j = 0;j < n-i-1;j++)
			if(l[j]*s[j]<l[j+1]*s[j+1])
			{
				temp = l[j];
				l[j] = l[j+1];
				l[j+1] = temp;
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int l[n],s[n],tem1,tem2,i,j,stack_num[n];
		for(i = 0;i < n;i++)
		{
			cin>>tem1>>tem2;
			stack_num[i] = 1;
			s[i] = tem1>tem2?tem2:tem1;
			l[i] = tem1>tem2?tem1:tem2;
		}
		sort(s,l,n);
		int big;
		for(i = n-2;i >= 0;i--)
		{
			big = 0;
			for(j = i+1;j < n;j++)
				if(s[j]<=s[i] && l[j]<=l[i] && stack_num[j]>big)
					big = stack_num[j];
			stack_num[i] += big; 
		}
		big = 0;
		for(i = 0;i < n;i++)
			if(stack_num[i]>big)
				big = stack_num[i];
		cout<<big<<'\n';
	}
	return 0;
}
