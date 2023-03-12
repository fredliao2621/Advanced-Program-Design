#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
struct inf{
	int begin;
	int end;
	int min;
};
int main()
{
	int total,Q,i,j;
	while(cin >> total >> Q)
	{
		if(total==0&&Q==0)
		 break;
		vector <inf> user;
		inf store;
		vector <int> judgemin(total+1,-1);
		bool noconflict=true;
		int conflictnumber=-1;
		int answer;
		for(i=0;i<Q;i++)
		{
			cin >> store.begin >> store.end >> store.min ;
			user.push_back(store);
			if(noconflict)
			{
				for(j=user[i].begin;j<=user[i].end;j++)
				   if(user[i].min>judgemin[j])
				    judgemin[j]=user[i].min;
				for(j=0;j<=i;j++)
				 if(user[j].min != *min_element(judgemin.begin()+user[j].begin,judgemin.begin()+user[j].end+1))
				 {
				 	noconflict=false;
				 	conflictnumber=i;
				 	break;
				 }
			}
		}
		if(noconflict)
		{
			cout << "0" << endl ;
			continue;
		}
		if(conflictnumber==1)
		{
			vector <int> judgemin1(total+1,-1),judgemin2(total+1,-1);
			for(j=user[0].begin;j<=user[0].end;j++)
			    judgemin1[j]=user[0].min;
			for(j=user[1].begin;j<=user[1].end;j++)
			    judgemin2[j]=user[1].min;
			bool z,o;
			for(i=2;i<Q;i++)
			{
			  z=true;
			  o=true;
			  for(j=user[i].begin;j<=user[i].end;j++)
			  {
			  	if(user[i].min>judgemin1[j])
			  	   judgemin1[j]=user[i].min;
			  	if(user[i].min>judgemin2[j])
			  	   judgemin2[j]=user[i].min;
			  }
			  if(user[0].min != *min_element(judgemin1.begin()+user[0].begin,judgemin1.begin()+user[0].end+1))
			   z=false;
			  if(user[1].min != *min_element(judgemin2.begin()+user[1].begin,judgemin2.begin()+user[1].end+1))
			   o=false;
			  if(z&&o)
			  {
			  	for(j=2;j<=i;j++)
			  	{
			  		if(user[j].min != *min_element(judgemin1.begin()+user[j].begin,judgemin1.begin()+user[j].end+1))
			           z=false;
			        if(user[j].min != *min_element(judgemin2.begin()+user[j].begin,judgemin2.begin()+user[j].end+1))
			           o=false;
				}
			  }
			  if(z==o)
			   continue;
			  else
			  {
			  	if(z)
			  	 cout << "2" << endl ;
			  	else
			  	 cout << "1" << endl ;
			  	break;
			  }
			}
			if(i==Q)
			 cout << "1" << endl;
			
			
		}
		else
		{
			for(answer=0;answer<=conflictnumber;answer++)
			{
			  judgemin.clear();
			  judgemin.assign(total+1,-1);
			  for(i=0;i<=conflictnumber;i++)
			  {
			 	if(answer==i)
			 	 continue;
			 	for(j=user[i].begin;j<=user[i].end;j++)
				 if(user[i].min>judgemin[j])
				    judgemin[j]=user[i].min;
			  }
			  bool gotu=true;
			  for(j=0;j<=conflictnumber;j++)
			  {
			 	if(answer==j)
			 	 continue;
			 	if(user[j].min != *min_element(judgemin.begin()+user[j].begin,judgemin.begin()+user[j].end+1))
				 {
				 	 gotu=false;
					 break;
				 }
			  }
			   if(gotu)
                 break;
			 
		    }
		    cout << answer+1 << endl ;
		}
		
	} 
	return 0;
}
