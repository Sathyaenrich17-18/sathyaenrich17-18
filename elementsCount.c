#include<stdio.h>

int main() {
   int number,c=0,k=0;
   int array[10],key[10],count_array[10];
   int j=0,count=0;
   
   for(int i=0; i<10; i++)
   {
       scanf("%d",&array[i]);
   }
 
   
   for(int i=0; i<10; i++)  //finding the elements in array( without repitation )
   {
       for(int l=0; l<i; l++)
       {
           if(array[i]==array[l])
           {
               c++;
               break;
           }
       }
       if(c==0)
       {
           key[k++]=array[i];
       }
       c=0;
   }
   
   for(int i=0; i<k-1; i++) //counting occurence  and storing in array
   {
       for(int j=0; j<10; j++)
       {
           if(key[i]==array[j])
           {
               count++;
           }
       }
       count_array[i]=count;
       count=0;
   }
   
   for(int i=0; i<k-1; i++)
   {
       printf("%d--> %d\n",key[i],count_array[i]);
   }
}
