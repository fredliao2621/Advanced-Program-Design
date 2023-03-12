#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
	int n,i,hr,min,sec,hr2,min2,sec2,total;
	char planet;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		cin>>planet;
		scanf("%d %d %d",&hr,&min,&sec);
		
		
		if(planet=='Z'||planet=='z')
		{
			total=hr*48*30+min*30+sec;
			hr2=total/60/60;
			total=total-hr2*60*60;
			min2=total/60;
			total=total-min2*60;
			sec2=total%60;		
		}
		
		if(planet=='E'||planet=='e')
		{
			total=hr*60*60+min*60+sec;
			hr2=total/48/30;
			total=total-hr2*48*30;
			min2=total/30;
			total=total-min2*30;
			sec2=total%60;
	    }
	    
	    if(planet=='Z'||planet=='z')
	    { 
		printf("E %02d %02d %02d\n",hr2,min2,sec2);
		}	
		
		if(planet=='E'||planet=='e')
	    { 
		printf("Z %02d %02d %02d\n",hr2,min2,sec2);
		}
	}
	
} 
