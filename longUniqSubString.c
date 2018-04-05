#include <stdio.h>
#include<string.h>

void longUniqSubString(char string[])
{
    int len = strlen(string);
    char substring[100];
    int c=0,k=0;
    
    //The longest substring is one with atleast one char less than the main string
    //Now check if the remaining char in the string are unique.
    // Print the longest unique substring
    
    for(int i=1; i<len; i++)
    {
       for(int j=1; j<len; j++)
       {
           if(i!=j)
           {
               if(string[i]==string[j])
               {
                   c++;
                   break;
               }
           }
       }
       if(c==0)
       {
           substring[k++]=string[i];
       }
       
       c=0;
       
    }
    
    printf("%s ",substring);
}

int main()
{
  char string[100];
  scanf("%s ",string);
  
  longUniqSubString(string);
  
  return 0;
}
 
