#include <stdio.h>

int main()
{
   
   int a[100],i,n,sum=0,b[100];
   printf("enter the size of array: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     
       scanf("%d",&a[i]);
   }
   
   
   for(i=0;i<n;i++)
   {
       printf("the array is %d\n",a[i]);
       
   }
   printf("the new copy of array is ");
   for(i=0;i<n;i++)
   {
       b[i]=a[i];
       printf("the array is %d\n",b[i]);
   }
   
   
   return 0;
   
}
