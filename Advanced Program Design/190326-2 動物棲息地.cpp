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
	
		cin>>name[i]>>num[i]>>loc[i];/*�s��name[i][0],num[i][0],loc[i][0]*/
		strcpy(newloc[i],loc[i]);/*loc[i]�s��newloc[i]*/
	}
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		{
			if((strcmp(name[i],name[j])==0)&&(strcmp(loc[i],loc[j])==0))/*����ʪ���a�I �Y�ۦP�h�ۥ[ ��̦W�ٳ]��0*/
			{
				num[i]=num[i]+num[j];
				name[j][0]='0';
			}
			if(strcmp(loc[i],loc[j])==0)/*�Y���ۦP�a�I ��Ӧa�I�]��0(���F�����@�Ӧa�I�u�L�Ĥ@����J�ɨ���)*/ 
				loc[j][0]='0';
		}
	for(i=0;i<N;i++)
	{
		if(loc[i][0]=='0')/*�Y�a�I��0 �~��for�j��*/ 
			continue;
		cout<<loc[i]<<" : "<<name[i]<<" "<<num[i];/*i�o�Ӧa�I�D0 cout�X��(�o�Ӧa�I�Ĥ@����J���ʪ��M�ƶq)*/
		for(j=i+1;j<N;j++)/*�qi����}�l��W�٫D0�B�a�I�Mi�ۦP��*/
			if((name[j][0]!='0')&&(strcmp(loc[i],newloc[j])==0))/*�n��newloc �]��loc�w�g�⭫�ƹL���a�W�k�s*/ 
				cout<<", "<<name[j]<<" "<<num[j];
		cout<<endl;
	}
}
