#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,t,c=0;
    char string[100];
    scanf("%s",string);
   
    int l=strlen(string);
    for(int i=0; i<l; i++)
    {
       t=string[i];
       if( ((65<=t) && (t<=90)) || ( (97<=t) && (t<=122)) )
       {
           c++;
       }
     }
     if(c==0)  //Exception handling
     {
        printf("Enter a valid expression");
        exit(0);
     }
     else
     {
        n=c;
     }
    
    
    int output=0,digit,y,temp,count=0;
    int arr[100][100];
    
    digit = pow(2,n);
    y= digit/2;
   
      
    for(int i=n-1; i>=0; i--)  // To find the possible combinations in truth table
    {
        
         for(int j=0; j<digit; j++)
         {
            arr[i][j]=output;
           // printf("%d ",arr[i][j]);
            count++;
            
             
            if(count % y ==0)
            {
                arr[i][j]=output;
              //  printf("%d ",arr[i][j]);
                output = output^1;
            }
             
         }
         
         count=0;
         output=0;
         y = y/2;
        
    }
  
    
    count=0;
    int row=digit,col=n;
    
    for(int i=0; i<row; i++)   // to find the  output for the given expression
    {
        for(int j=col-1; j>=0; j--)
        {
            //printf("%d ",arr[j][i]);
            if(arr[j][i]==1)
            {
                count++;
                break;
            }
        }
        
        if(count==1)
        {
            arr[col][i]=1;
        }
        
        count=0;
    }
    
 
        
    for(int i=0; i<row; i++)  //to print the truth table
    {
        for(int j=col-1; j>=0; j--)
        {
             printf("%d ",arr[j][i]);
        }
        
        printf("-> %d",arr[col][i]);
        printf("\n");
    }
}
