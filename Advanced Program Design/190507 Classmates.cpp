#include<iostream>
#include<string.h>
using namespace std;

bool student1[5000];
bool student2[5000][5000];
void search(int i,int total)
{
	int k;
	for(k=0;k<total;k++)
	{
		if(student2[i][k]&&!student1[k])
		{
			student1[k]=true;
			search(k,total);
		}
	}
}

main()
{
	int i,j,total,n,x,y;
	while(cin>>total>>n)
	{
		int class_num=0;
		
		memset(student1,'\0',total);
		memset(student2,'\0',25000000);
		
		for(i=0;i<n;i++)
		{
			cin>>x>>y;
			student2[x][y]=true;
			student2[y][x]=true;
		}
		
		for(i=0;i<total;i++)
		{
			if(!student1[i])
			{
				class_num++;
				search(i,total);
			}
			
		}
		cout<<class_num<<endl;
		
	}
	
} 
