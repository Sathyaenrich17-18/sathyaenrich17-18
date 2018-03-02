#include<stdio.h>

int main() {
   int number,i=0;
   int arr[1000];
   scanf("%d",&number);
   int temp,count=0;
   
   while(number>0)
   {
      temp=number;
       while(temp>1)
       {
         temp=temp-2;
       }
       if(temp==1)
       {
         count++;
       }
       number=number/2;
   }
   printf("%d",count);
   return 0;
}
