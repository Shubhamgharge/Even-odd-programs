//even odd 1
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0;
   
   printf("enter any number to show even or odd=");
   scanf("%d",&no);
   
   if(no%2==0)
   {
     printf("%d is even",no);
   }
   else
   {
     printf("%d is odd",no);
   }
    
   printf("\nthanks");
   
   getch();
   return 0;
}