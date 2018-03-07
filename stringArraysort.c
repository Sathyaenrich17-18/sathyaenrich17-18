#include<stdio.h>
#include<string.h>

int main() {
    char string[100][100];
    
    int i;
    for(i=0; 1==1; i++)      //reading string array
    {
        string[i][0]='$';
        scanf("%s",string[i]);
        
        if(string[i][0]=='$')
        {
            break;
        }
    }
    
    int number[100];
    for(int j=0; j<i; j++)   //converting string array into int array
    {   
        for(int k=0; k<strlen(string[j]); k++)
        {
            number[j]=number[j]*10 + (string[j][k] -'0');
        }
    }
     
    int t;
    for(int j=0; j<i; j++)   //sorting the numeric array
    { 
        for(int k=j+1; k<i; k++)
        {
            if(number[j]>number[k])
            {
                t=number[j];
                number[j]=number[k];
                number[k]=t;
            }
        }
    }
    
    for(int j=0; j<i; j++)
    {
        printf("%d ",number[j]);
    }
}
