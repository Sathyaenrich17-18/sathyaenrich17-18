 #include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


/*The program is based on the idea that " the non-redundant possible combinations will be equal to the possible combinations
obtained through the truth table " */

 
void printSubset(int** mat, int row, int t)
{
    
    char string[100][100];
    int col=0;
    
    
    //converting it into string for sorting...... and eliminating all the zero elements...
    
    for(int i=0; i<row; i++)
    {
        col=0;
        for(int j=0; j<t; j++)
        {
            if(mat[i][j] != 0)
            {
                string[i][col]= mat[i][j] + '0';
                //printf("%c ",string[i][col]);
                col++;
            }
              
        }
       // printf("\n");
 
    }
    
    //sorting the elements......
    
     char temp[100];
     int c,i=row;
     for(int j=0; j<i; j++) 
     {   
        for(int k=0; k<i; k++)
        {
            if(strlen(string[j])<strlen(string[k]))
            {
               // printf("%s %s \n",string[j],string[k]);
                strcpy(temp,string[j]);
                strcpy(string[j],string[k]);
                strcpy(string[k],temp);
              //  printf("%s %s \n",string[j],string[k]);
            }
            else if(strlen(string[j])==strlen(string[k]))
            {
              //  printf("%s %s ",string[j],string[k]);
                c=strcmp(string[j],string[k]);
                if(c<0)
                {
                   strcpy(temp,string[j]);
                   strcpy(string[j],string[k]);
                   strcpy(string[k],temp);   
                }
               // printf("%d \n",c);
            }
        }
    }
  
    int len;
    
    //to print the subset elements........
    
    for(int j=0; j<i; j++)
    {
        len=strlen(string[j]);
        for(int i=0; i<len; i++)
        {
            if(i!=(len-1))  
            {
                printf("%c,",string[j][i]);
            }
            else
            {
                printf("%c",string[j][i]);
            }
        }
       // printf("%s ",string[j]);
        printf("\n");
    }

    
     
}
 
void findSubset(int set[],int k)
{
    
    int n=k;
    int output=0,digit,y,count=0;
    int arr[100][100];
    int **mat;
    int m=0;
    
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
    mat = malloc(row * sizeof *mat);  //dynamic memory allocation for mat array.....
    
    //Printing the element of the set only if the truth table input is '1'.
    
    for(int i=0; i<row; i++)   
    {
        k=0;
        mat[i] = malloc(k * sizeof *mat[i]);
        for(int j=col-1; j>=0; j--)
        {
            //printf("%d ",arr[j][i]);
            if(arr[j][i]==1)
            {
                mat[m][k]=set[j];
               // printf("%d ",set[j]);
            }
            k++;
        }
        m++;
       // printf("\n");
        
         
    }
    
    printSubset(mat, row,k);
   
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
    
    findSubset(set,k);
}
 
