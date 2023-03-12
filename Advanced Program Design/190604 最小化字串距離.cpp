#include<iostream>
#include<cmath>
using namespace std;

string stringA,stringB;

int distance(int x,int y,int star)
{
	int a,b;
	
	if(x==0&&y==0)
		return 0;
		
	else if(x!=0&&y==0)
	{
		a=distance(x-1,y,star)+abs(star-stringA[x-1]);
		return a;
	}
	
	else if(x!=0&&y!=0&&x==y)
	{
		b=distance(x-1,y-1,star)+abs(stringA[x-1]-stringB[y-1]);
		return b;
	}
	
	else
	{
		a=distance(x-1,y,star)+abs(star-stringA[x-1]);
		b=distance(x-1,y-1,star)+abs(stringA[x-1]-stringB[y-1]);
		
		if(a<b)
			return a;
		else
			return b;
	}
}

main()
{
	int star,i,ans;
	
	while(cin>>stringA>>stringB>>star)
	{
		for(i=0;i<stringA.size();i++)
			stringA[i]-=64;
		
		for(i=0;i<stringB.size();i++)
			stringB[i]-=64;
		
		ans=distance(stringA.size(),stringB.size(),star);
		
		cout<<ans<<endl;
		
	}
}
