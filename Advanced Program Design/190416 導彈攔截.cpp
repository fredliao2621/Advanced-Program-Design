#include<iostream>
using namespace std;

main()
{
	int t,i,one[2],two[2],amount,j,loc[10000][2],k,distance_one[10000],distance_two[10000],temp1,m,n,min,max2,sum,max1=-1,temp2;
	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>one[0]>>one[1]>>two[0]>>two[1];
		
		cin>>amount;
		for(j=0;j<amount;j++)
		{
			cin>>loc[j][0]>>loc[j][1];	
		}
		
		for(k=0;k<amount;k++) 
		{
			distance_one[k]=(loc[k][0]-one[0])*(loc[k][0]-one[0])+(loc[k][1]-one[1])*(loc[k][1]-one[1]);
			distance_two[k]=(loc[k][0]-two[0])*(loc[k][0]-two[0])+(loc[k][1]-two[1])*(loc[k][1]-two[1]);
	    }
			
		for(m=0;m<amount;m++)
		 for(n=m+1;n<amount;n++)
		 {
		 	if(distance_one[m]<distance_one[n])
		 	{
		 		temp1=distance_one[m];
		 		distance_one[m]=distance_one[n];
		 		distance_one[n]=temp1;
		 		
		 		temp2=distance_two[m];
		 		distance_two[m]=distance_two[n];
		 		distance_two[n]=temp2;
			}
		 }
				
		int max=-1;
		for(k=0;k<amount;k++)
		{
			if(k==0)		
			{
				min=distance_one[0];
				sum=min;
			}
			else
			{
				
				for(j=0;j<k;j++)
				{
				 if(distance_two[j]>max)
				 max=distance_two[j];	
				}
				
				sum=distance_one[k]+max;
			}
			
			if(sum<min)
			min=sum;		
		}
		max2=-1;
		for(j=0;j<amount;j++)
		{
			if(distance_two[j]>max2) 
			max2=distance_two[j];
		} 
		
		for(j=0;j<amount;j++)
		{
			if(distance_one[j]>max1) 
			max1=distance_one[j];
		} 
		
		if(min>max2)
		min=max2;
		
		if(min>max1)
		min=max1;
		cout<<min<<endl;
		
	}
	
}
