#include<stdio.h>
#include<string.h>
int main()
{
	char input[10000],output[10000];
	long long num,ans,million,billion,trillion,total[3];
	int i,j,k,n,m,negative=0,ten=0,hundred=0,thousand=0;
	while(scanf("%s",input)==1)
	{
		ans=0;
		total[0]=0;total[1]=0;total[2]=0;thousand=0;hundred=0;ten=0;num=0;negative=0;
	for(i=0;input[i]!='\0';i+=2)
	{
		if(strncmp(input+i,"­t",2)==0)
		negative=1;
		if(strncmp(input+i,"³ü",2)==0)
		num=1;
		if(strncmp(input+i,"¶L",2)==0)
		num=2;
		if(strncmp(input+i,"°Ñ",2)==0)
		num=3;
		if(strncmp(input+i,"¸v",2)==0)
		num=4;
		if(strncmp(input+i,"¥î",2)==0)
		num=5;
		if(strncmp(input+i,"³°",2)==0)
		num=6;
		if(strncmp(input+i,"¬m",2)==0)
		num=7;
		if(strncmp(input+i,"®Ã",2)==0)
		num=8;
		if(strncmp(input+i,"¨h",2)==0)
		num=9;
		if(strncmp(input+i,"¬B",2)==0)
		{
		  num=num*10;	
		  ten=num;
		  num=0;
		}
		if(strncmp(input+i,"¨Õ",2)==0)
		{
		  num=num*100;	
		  hundred=num;
		  num=0;
		}
		
		if(strncmp(input+i,"¥a",2)==0)
		{
		  num=num*1000;	
		  thousand=num;
		  num=0;
		}
	
		if(strncmp(input+i,"¸U",2)==0)
		{
		  num=thousand+hundred+ten+num;
		  million=num*10000;
		  total[0]=million;
		  thousand=0;
		  hundred=0;
		  ten=0;
		  num=0;	
		}
	
		if(strncmp(input+i,"»õ",2)==0)
		{
		  num=thousand+hundred+ten+num;
		  billion=num*100000000;
		  total[1]=billion;
		  thousand=0;
		  hundred=0;
		  ten=0;
		  num=0;		
		}
	
		if(strncmp(input+i,"¥ü",2)==0)
		{
		  num=thousand+hundred+ten+num;
		  trillion=num*1000000000000;
		  total[2]=trillion;
		  thousand=0;
		  hundred=0;
		  ten=0;
		  num=0;		
		} 
	
	}
	if(negative==1)
	printf("-");
	ans=total[0]+total[1]+total[2]+thousand+hundred+ten+num;
	sprintf(output,"%lld",ans);
	
	m=strlen(output)%3;
	
	for(k=0;k<m;k++)
	printf("%c",output[k]);
	
	for(j=k;j<strlen(output);j++)
	{
		
		if(j%3==m&&j!=m)
		printf(",");
		else if(j==1&&m==1)
		printf(",");
		else if(j==2&&m==2)
		printf(",");
		printf("%c",output[j]);
		
    }
    printf("\n");
    }

}
