#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() 
{
   char string[1000];
   char key[1000];
   int count[1000];
   scanf("%s",string);
   
   int len=strlen(string);
   int c=0;
   int s=0;
   
   /*Read the string and compare the (i)th and (i+1)th term if equal then check if the previous term of (i)th term is same 
   if so no need to count the (i)th term .*/

   
   for(int i=0; i<len; i++)
   {
     
      if(string[i]==string[i+1])
      {
         // printf("%c %css\n",string[i],string[i+1]);
          if(string[i]==string[i-1])
          {
              c++;
          }
          else
          {
              c=c+2;
          }
      }
      
      else
      {
          key[s]=string[i];
          count[s++]=c;
          c=0;
     
      }
       
     
   }
   
   for(int i=0; i<s; i++)
   {
       if(count[i]==0)
       {
            printf("%c",key[i]);
       }
       else
       {
            printf("%c%d",key[i],count[i]);
       }
       
   }
}
