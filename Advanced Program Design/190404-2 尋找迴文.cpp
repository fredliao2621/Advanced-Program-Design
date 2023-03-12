#include <stdio.h>
#include <string.h>
main()
{
	
    char arr[10000],rec[1000][1000];
    int i,j,n,max,k,count,l,time,g,ans,front,back,x,y=0,z,zz;
    scanf("%d",&time);
    for(g=0;g<time;g++)
	{
		scanf("%s",arr);
		n=strlen(arr);
		for(l=n;l>=1;l--)
		{
			count=0;
			for(j=0;j<=n-l;j++)
			{
				for(k=0;k<l;k++)
				{
				   if(arr[j+k]!=arr[j+l-k-1])//頭尾相比較//
				   break;
				}   	
			    if(k==l)
			    {
			    front=j;
			    back=k;
			    y=0;
			    for(x=0;x<back;x++)
			    {
			    rec[count][y]=arr[front+x];
				y++;	
				}
				rec[count][y]='\0';
				for(z=0;z<count;z++)
				 for(zz=z+1;zz<count;zz++)
				{	
					if(strcmp(rec[z],rec[zz])==0)
					count-=2;
					
				}
				count++;	
				} 
			    
			}
		    if(count!=0)
		    {
			 max=l;
			 break;
		    }
		}
		if(max>1)
		{
		printf("%d %s",max,rec[0]);
		for(ans=1;ans<count;ans++)
		printf(", %s",rec[ans]);
		printf("\n");	
		}
		else
		printf("0\n");
	}		
		
}
