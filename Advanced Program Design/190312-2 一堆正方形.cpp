#include<stdio.h>

double xsum=0,ysum=0;
void repeation(double x,double y,double len,int rep)
{
	if(rep<0)
	return;
	
	if(x+len/2>0&&y+len/2>0)//1
	 {
	 	xsum+=x+len/2;
	 	ysum+=y+len/2;
	 }
	if(x-len/2>0&&y+len/2>0)//2
	{
		xsum+=x-len/2;
	 	ysum+=y+len/2;
	}
	if(x-len/2>0&&y-len/2>0)//3
	{
		xsum+=x-len/2;
	 	ysum+=y-len/2;
	}
	if(x+len/2>0&&y-len/2>0)//4
	{
		xsum+=x+len/2;
	 	ysum+=y-len/2;
	}
	
	
	rep--;
	repeation(x+len/2,y+len/2,len/2,rep);
	repeation(x-len/2,y+len/2,len/2,rep);
	repeation(x-len/2,y-len/2,len/2,rep);
	repeation(x+len/2,y-len/2,len/2,rep);
	
}


main()
{
	int rep;
	double ox,oy,len;
	while(scanf("%lf %lf %lf %d",&ox,&oy,&len,&rep)!=-1)
	{ 
	xsum=0;ysum=0;
	repeation(ox,oy,len,rep);
	printf("%.0lf %.0lf\n",xsum,ysum);
	} 
	
}
