#include<iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

main()
{

	int n,i;
	
	cin>>n;
	for(i=0;i<n;i++)
	{
		int usa,italy,special;
		int money1,money2,money3,minimum=9999999;
		int a,b,c;
		
		cin>>usa>>italy>>special;
		
		for(a=0;a<=min(usa/2,3);a++)
		{
		    money1=0;
			if(usa!=0)
			{
				money1+=usa/2*75;
				if(usa%2==1)
				  money1+=50;
				
				money1+=a*25;	
			}
			
			for(b=0;b<=min(italy/2,1);b++)
			{
				money2=money1;
				if(italy!=0)
				{
					money2+=italy/2*80;
					if(italy%2==1)
					  money2+=80;
					
					money2+=b*80;	
				}	
			
			for(c=0;(money2+c*100)/1000+c<special;c++)
			{}
			
			money2+=c*100;
			 
			if(money2<minimum)
			  minimum=money2;
			}  
		}
		cout<<minimum<<endl;	
	}
}
