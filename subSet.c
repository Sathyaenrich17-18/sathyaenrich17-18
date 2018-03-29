 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


/*The program is based on the idea that " the non-redundant possible combinations will be equal to the possible combinations
obtained through the truth table " */
 
 
void printSubset(int set[],int k)
{
    
    int n=k;
    int output=0,digit,y,temp,count=0;
    int arr[100][100];
    
    digit = pow(2,n);
    y= digit/2;
   
    //Fining the possible combinations through truth table.  
    
    for(int i=n-1; i>=0; i--)  
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
    
    //Printing the element of the set only if the truth table input is '1'.
    
    for(int i=0; i<row; i++)   
    {
        for(int j=col-1; j>=0; j--)
        {
            //printf("%d ",arr[j][i]);
            if(arr[j][i]==1)
            {
                printf("%d ",set[j]);
            }
        }
        printf("\n");
        
         
    }
}

int main()
{
    int k=0;
    int set[100]={0};
    
    //Reading an array of unknown size with unique elements.
    //Assuming that all the elements given by the user is unique and non-zero.
    
    for(k=0; 1==1; k++)
    {
        scanf("%d ",&set[k]);
        if(set[k]==0)
        {
            break;
        }
    }
    
    printSubset(set,k);
}
 
