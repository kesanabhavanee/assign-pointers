#include <stdio.h>

int main()
{
   int a,b,*ptr1,*ptr2;
   scanf("%d %d",&a,&b );
   ptr1=&a;
   ptr2=&b;
   swap(&a,&b);
    printf("after swapping %d %d\n",a,b);
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("after swapping %d %d\n",*x,*y);
}
