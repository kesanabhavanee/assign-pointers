#include <stdio.h>

int main()
{
   int n,i,j,k,count=0;
   int a[100];
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==k)
       {
         if(a[i]==a[i+1])
         {
           count=count+1;
         }
       }
       else
       {
           continue;
       }
   }
   count=count+1;
   if(count==k)
   {
       printf("valid");
   }
   else{
       printf("invalid");
   }
   return 0;
}
