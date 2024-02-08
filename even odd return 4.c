//even odd using return 4
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0;
   
   printf("enter any  posative number to show even or odd=");
   scanf("%d",&no);
   if(no==0)
   {
      printf("invalid in put");
      return -1;
   }
   else if(no%2==0)
   {
     printf("%d is even",no);
   }
   else
   {
     printf("%d is odd",no);
   }
    
   printf("\n\nthanks");
   
   getch();
   return 0;
}