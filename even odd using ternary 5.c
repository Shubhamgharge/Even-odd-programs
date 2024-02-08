//even odd using ternary 5
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0;
   
   printf("enter any  posative number to show even or odd=");
   scanf("%d",&no);
   (no==0) ? printf("invalid input") : (no%2==0) ? printf("%d is a even",no) : printf("%d is a odd",no) ;
   getch();
   return 0;
}