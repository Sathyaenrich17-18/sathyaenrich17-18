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
    
    
    printf("%d ",determinant);
}
