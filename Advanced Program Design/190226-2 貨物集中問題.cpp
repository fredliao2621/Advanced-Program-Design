#include <stdio.h>//貨物集中問題//
#include <math.h>
main()
{
	int a,b,c,d,i,j,times,sum,length,width,rx,ry;
	scanf("%d",&a);
	for(d=1;d<=a;d++)//選擇測試次數// 
	{
	scanf("%d %d",&length,&width);
	int mat[length][width];//矩陣大小// 
	for(i=0;i<length;i++)
	 for(j=0;j<width;j++)
	 	scanf("%d",&mat[i][j]);
	
	int min=246370364; 	
	 	
	for(i=0;i<length;i++)
	{
	 for(j=0;j<width;j++)
	  {
	 	times=0;
	 	for(b=0;b<length;b++)
		 for(c=0;c<width;c++)
		  times=times+mat[b][c]*(abs(i-b)+abs(j-c));//每次路徑成本// 
			  
		if(times<min)
	     {
	      min=times;
	      rx=i;
	      ry=j;
		 }		
	  }
	}
	printf("%d %d %d\n",rx+1,ry+1,min*10); 
	}
	
 } 

