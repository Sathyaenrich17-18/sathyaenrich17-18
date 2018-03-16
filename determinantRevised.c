#include<stdio.h>


int main()
{
    int order;
    scanf("%d",&order);
    float matrix[10][10],temp[10];
    
    for(int i=0; i<order; i++)    //reading square matrix
    {
        for(int j=0; j<order; j++)
        {
            scanf("%f",&matrix[i][j]);
        }
    }
    
    //check if the element in first row, first column == 0 if so then find the nearest non-zero row and swap it and set the flag to '1'
    int t,flag=0;
    float temp1;
    if(matrix[0][0]==0)
    {
        flag=1;
        for(t=0; matrix[t][0]==0; t++)  //finding the nearest row with first element as non-zero
        {
          
        }
        
        for(int i=0; i<order; i++)
        {
            temp1=matrix[0][i];
            matrix[0][i]=matrix[t][i];
            matrix[t][i]=temp1;
        }
    }
    
    
    int k=0,s=0;
    float elimination=1.0;
    
    for(int i=0; i<order-1; i++)
    {
        for(int j=i+1; j<order; j++)
        {   
        
             elimination=elimination*((matrix[j][k]*1.00) / (1.00*(matrix[k][k])));   //calculating forward elimination
             
             
            for(int l=0; l<order; l++)    //calculating multiple for the eliminating row and making the lower triangular matrix as 0
            {
              
                temp[l]=matrix[k][l]*elimination;
                matrix[s+1][l]=matrix[s+1][l]-temp[l];
              
            }
            
          
            elimination=1.0; 
            s++;
             
        }
        
          
        k++;
        s=i+1;
        elimination=1.0;
        
    }
    
    float det=1.0;      //calculating determinant for the upper triangular matrix
    for(int i=0; i<order; i++)
    {
       det=det*matrix[i][i];  
    }
    
    
    int determinant;
    determinant= (int)det;
    
    //If the flag is set to '1' then it means the rows are swapped and hence the negate the determinant value.
    // This is because of the determinant rule "Determinant for rows or columns swap - DRCS"
    if(flag==0)
    {
       printf("%d ",determinant);
    }
    else
    {
        printf("%d ",-determinant);
    }
    
}
