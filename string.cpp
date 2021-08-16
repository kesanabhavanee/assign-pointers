#include<stdio.h>
#include<string.h>
int main() 
{
   char s1[10], s2[10];
   char *p1,*p2;
   int len;
   printf("\nEnter the string :");
   gets(s1);
   p1=s1;               //provides base address
   p2=s2;
   
   while(*p1!='\0')
   {
       *p2=*p1;           
       p1++;
       p2++;
   }
   *p2='\0';
    printf("copied string is %s\n",s2);
    len=strlen(s2);
    printf("length of copied string is %d",len);
    return 0;
   
}
