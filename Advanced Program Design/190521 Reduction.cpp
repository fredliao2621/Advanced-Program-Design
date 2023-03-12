#include<iostream>
using namespace std;

main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m,i,j,k,x,temp,ansMax,ansMin;
		cin>>m;
		int a[m],v[50][50];
		
		for(j=0;j<m;j++)
		cin>>a[j];
		
		for(i=0;i<m;i++)
		  for(j=0;j<m;j++)
		  {
		  	if(j-i<=1)
		  	  v[i][j]=0;
		  }
		
		
		for(j=0;j<m;j++)
		  for(i=m-1;i>=0;i--)
		  { 
			if(j-i>1)
			{ 
			int max=0;
		    for(x=i+1;x<=j-1;x++)
		    	{
		    	temp=v[i][x]+v[x][j]+a[i]*a[x]*a[j];
		    	if(temp>max)
		    	  max=temp;  
				}
			v[i][j]=max;
			} 
		  } 
		  ansMax=v[0][m-1];
		
		
		for(j=0;j<m;j++)
		  for(i=m-1;i>=0;i--)
		  { 
			if(j-i>1)
			{ 
			int min=9999999;
		    for(x=0;x<m;x++)
		      if(x>=i+1&&x<=j-1)
		    	{
		    		temp=v[i][x]+v[x][j]+a[i]*a[x]*a[j];
		    		if(temp<min)
		    		  min=temp;
				}
				v[i][j]=min;
			} 
		  }
		ansMin=v[0][m-1];
		
		cout<<ansMax<<" "<<ansMin<<endl;
	}
	
}
