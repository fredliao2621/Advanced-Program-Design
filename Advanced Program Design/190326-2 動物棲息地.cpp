#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int N,i,j;
	
	cin>>N;
	
	int num[N];
	
	char name[N][50],loc[N][50],newloc[N][50];
	for(i=0;i<N;i++)
	{
	
		cin>>name[i]>>num[i]>>loc[i];/*存到name[i][0],num[i][0],loc[i][0]*/
		strcpy(newloc[i],loc[i]);/*loc[i]存到newloc[i]*/
	}
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		{
			if((strcmp(name[i],name[j])==0)&&(strcmp(loc[i],loc[j])==0))/*檢驗動物跟地點 若相同則相加 後者名稱設為0*/
			{
				num[i]=num[i]+num[j];
				name[j][0]='0';
			}
			if(strcmp(loc[i],loc[j])==0)/*若有相同地點 後來地點設為0(為了等等一個地點只印第一次輸入時那次)*/ 
				loc[j][0]='0';
		}
	for(i=0;i<N;i++)
	{
		if(loc[i][0]=='0')/*若地點為0 繼續for迴圈*/ 
			continue;
		cout<<loc[i]<<" : "<<name[i]<<" "<<num[i];/*i這個地點非0 cout出來(這個地點第一次輸入的動物和數量)*/
		for(j=i+1;j<N;j++)/*從i之後開始找名稱非0且地點和i相同的*/
			if((name[j][0]!='0')&&(strcmp(loc[i],newloc[j])==0))/*要用newloc 因為loc已經把重複過的地名歸零*/ 
				cout<<", "<<name[j]<<" "<<num[j];
		cout<<endl;
	}
}
