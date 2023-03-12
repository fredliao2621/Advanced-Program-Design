#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
	int n,i;
	char test;
	
	cin>>n;
	for(i=0;i<n;i++)
	{
		
	 int j=0,mat[20000],count[20000]={0},a,b,c,d,k,max=-1,ans[20000],e=0;
	 
	  while(scanf("%d%c",&mat[j++],&test))
	   {
	   	 if(test=='\n')
	   	 break;
	   }
	   
	   
	   
	   for(a=0;a<j;a++)
	    for(b=0;b<j;b++)
	    {
	    	
	    	if(a<b&&mat[a]>mat[b])
	    	 count[a]++;
	    	
	    	if(a>b&&mat[a]<mat[b])
	    	 count[a]++;
		}
		
		
		
		for(k=0;k<j;k++)
		{
			if(count[k]>=max)
			{
				ans[e++]=mat[k];
				max=count[k];
			}
		}
		
		if(e==1)
			 printf("%d ",ans[0]);
		else	 
		 for(k=0;k<e;k++)
		 {
		 	 
			
			if(k==e-1)
			 printf("%d ",ans[k]);
			else
			 printf("%d, ",ans[k]);
			
			 
		 }
		printf("%d\n",max);
		
		
	}

}
