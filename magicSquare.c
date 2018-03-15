#include<stdio.h>
#include<stdlib.h>

 
int main()
{
    int tempI,tempJ;
    int row,col,s;
    int order;
    scanf("%d",&order);  //Reading the order of the square
    
    if(order%2 == 0)
    {
        printf("Magic square using Siamese method is not possible");
        exit(0);
    }
    
    row=0;
    col=(order/2);
    s=order-1;
    int count=(order*order)+1;
    
    int matrix[100][100]={0};
    int k=2;
    matrix[row][col]=1;
    
    
    while(k<count)
    {
        tempI=row;
        tempJ=col;
        
       //Finding the new index
        row--;
        col++;
        
        if(row==-1)   
        {
            row=s;
        }
        if(col==order)
        {
            col=0;
        }
      
        
        //if the index is empty then fill else find the new index
        
        if(matrix[row][col] == 0) 
        {
            matrix[row][col] = k++;
        }
        else
        { 
            
              row++;
              col--;
        
              if(row==order)
              {
                  row=0;
              }
              if(col==-1)
              {
                  col=s;
              }
      
            
             if(row==2)
             {
                 row=0;
             }
             else
             {
                 row++;
             }
             
             if(matrix[row][col]!=0)  // check if the index is already occupied by any other element 
             {
                 row=tempI+1;
                 col=tempJ;
             }
             matrix[row][col]=k++;
            
        }
    }
     

 for(int i=0; i<order; i++)
    {
        for(int j=0; j<order; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
