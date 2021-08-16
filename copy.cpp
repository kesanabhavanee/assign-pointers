#include <stdio.h>

int main()
{
   int a1[10],a2[10],i,n;
   int *ptr[10];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a1[i]);
   }
   for(i=0;i<n;i++)
   {
       ptr[i]=&a1[i];
   }
   for(i=0;i<n;i++)
   {
       a2[i]=*ptr[i];
       printf("%d\t",a2[i]);
   }
}


