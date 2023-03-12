#include<stdio.h>
main()
{
	int table[4][16]={14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13};
    int num1[6],num2[4],i,row,column,temp,x1,x2,x3,x4,ans;
	char input[6];
    
	while(scanf("%s",input)==1)
	{
	  
    
	for(i=0;i<6;i++)
    	num1[i]=(int)(input[i]-'0');
    
	row=num1[0]*2+num1[5];
	column=num1[1]*8+num1[2]*4+num1[3]*2+num1[4];
	
	temp=table[row][column];
	x4=temp%2;
	temp/=2;
	x3=temp%2;
	temp/=2;
	x2=temp%2;
	temp/=2;
	x1=temp%2;
	temp/=2;
    
    ans=x1*1000+x2*100+x3*10+x4;
    printf("%d\n",ans);
   }
   return 0;
}
