#include<stdio.h>
#include<string.h>


void largestSubString(char string[])
{
    int len,sublen,c=0,k=1;
    len =strlen(string);
    char substring[100];
    
    //Initially assigning the first char of the string to the substring
    //Then from the second char check if it is already present in the substring or not 
    //if not append it to the substring .
    //print the substring
    
    substring[0]=string[0];
    
    for(int i=1; i<len; i++)
    {
        sublen=strlen(substring);
        for(int j=0; j<sublen; j++)
        {
            if(string[i]==substring[j])
            {
                c++;
                break;
            }
            
        }
        
        if(c==0)
        {
            substring[k++]=string[i];
        }
        c=0;
    }
    
    
    for(int i=0; i<sublen; i++)
    {
        printf("%c",substring[i]);
    }
  
}

int main()
{

   char string[100];
   scanf("%s" ,string);

   largestSubString(string);
   
   return 0;

}
   
