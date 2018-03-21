#include<stdio.h>

int main() 
{
   int number,i=0,rem;
   int base;
   int arr[1000];
   
   scanf("%d",&number);
   scanf("%d",&base);
   
   //Divide the number by the base continuously till thenumber is greater than zero and print the remainder in reverse
   while(number>0)
   { 
      rem=number%base;
      arr[i++]=rem;
      number=number/base;
   }
   
   int count=0;
   for(int index=i-1; index>=0; index--)
   {
       printf("%d",arr[index]);
   }
   
   
   return 0;
}
