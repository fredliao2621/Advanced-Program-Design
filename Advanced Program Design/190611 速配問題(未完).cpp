#include<iostream>
using namespace std;

main()
{
	int p;
	cin>>p;
	while(p--)
	{
		int n,i,j,aTotal=0,max,bTotal=0;
		cin>>n;
		int m[n][n];
		
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				cin>>m[i][j];
			}
		
		for(i=0;i<n;i++)
		{ 
			max=0;
			for(j=0;j<n;j++)
			{
				if(m[i][j]>max)
					max=m[i][j];
			}
			aTotal+=max;
		} 
		
		for(j=0;j<n;j++)
		{ 
			max=0;
			for(i=0;i<n;i++)
			{
				if(m[i][j]>max)
					max=m[i][j];
			}
			bTotal+=max;
		} 
		
		cout<<aTotal<<" "<<bTotal<<endl;
	}
		
} 
