#include<iostream>
using namespace std;

main()
{
	int n,i,a,j;
	
	cin>>n;
	
	long long int weight[n],time[n],total=0,count=0,ans=0,temp;
	
	for(i=0;i<n;i++)
		cin>>weight[i];
		
	for(i=0;i<n;i++)
		cin>>time[i];
	
	for(i=0;i<n;i++)
	  total+=weight[i];
	
	for(i=0;i<n;i++)
	  for(j=i+1;j<n;j++)
	  {
	  	if((double)weight[i]/(double)time[i]>=(double)weight[j]/(double)time[j])
	  	{
	  		temp=weight[j];
	  		weight[j]=weight[i];
	  		weight[i]=temp;
	  		
	  		temp=time[j];
	  		time[j]=time[i];
	  		time[i]=temp;	
		}	
	  }
	
	a=n;
	for(i=0;i<n;i++)
	{
		count=total-weight[a-1];
		total-=weight[a-1];
		a--;
		ans+=count*time[n-i-1];
    }	  
	cout<<ans<<endl;	
}
