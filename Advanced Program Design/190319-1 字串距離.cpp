#include<stdio.h>
#include <string.h>
#include <stdlib.h>
main()
{
	int t,i,j,total=0;
	char f[1000000],b[1000000];
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	 scanf("%s %s",&f,&b);
	 
	 total=0;
	 for(j=0;j<strlen(f);j++)
	{
		total+=abs(f[j]-b[j]);
	} 
	
	printf("%d\n",total);
	}
	
	
} 
