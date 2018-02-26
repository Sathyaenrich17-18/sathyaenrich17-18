#include<stdio.h>

int main() {
   int number,i=0;
   int arr[1000];
   scanf("%d",&number);
   
   while(number>0)
   {
       if(number%2==0)
       {
           arr[i++]=0;
           number=number/2;
       }
       else
       {
           arr[i++]=1;
           number=number/2;
       }
   }
   
   int count=0;
   for(int index=i-1; index>=0; index--)
   {
       if(arr[index]==1)
       {
           count++;
       }
   }
   
   printf("%d",count);
   return 0;
}
