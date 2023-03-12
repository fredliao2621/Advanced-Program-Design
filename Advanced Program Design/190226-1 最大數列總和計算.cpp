#include<stdio.h>
#include<stdlib.h>
main()
{
 int n,i,j,z,sum,max=0,m,low,up;;
 
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d %d",&low,&up);
  
  for(j=low;j<=up;j++)
  {
   sum=j;
   z=j;
   
   while(z!=1)
   {
    if(z%2==0)
    { 
     z=z/2;
     sum=sum+z;
    }
    
    else
    {
      z=z*3+1;
      sum=sum+z;
    } 
   }
   
   if(sum>max)
    {
     max=sum;
     m=j;        
    }        
              
  }
  printf("%d %d\n",max,m);
  sum=0;
  max=0;
  
 }
 system("pause");
 return 0;
 
}
