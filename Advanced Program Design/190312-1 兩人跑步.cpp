#include<stdio.h>
main()
{
	double d,a,b,time,total;
	
	while(scanf("%lf %lf %lf",&d,&a,&b)==3)
	{ 
	 if(a>b)
	 { 
	  time=d/b;
	  total=time*a;
	  printf("%.2lf %.2lf\n",total,b*time);
	 } 
	 
	 else
	 { 
	  time=d/a;
	  total=time*b;
	  printf("%.2lf %.2lf\n",a*time,total);
	 } 
	} 
	
	return 0;
}
