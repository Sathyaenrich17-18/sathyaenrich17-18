#include<stdio.h>

int main() {
    int number,rotate_count,i=0,j=0,temp,digit;
    int arr[1000],b[1000];
    scanf("%d",&number);
    temp=number;
    scanf("%d",&rotate_count);
   
    
    while(temp>0)   //to read a number as array of digits
    {
       digit=temp%10;
       arr[i]=digit;
       i++;
       temp=temp/10;
    }
    
    for(int index=i-1; index>=0; index--) //arrange digits in ascending order
    {
        b[j++]=arr[index];
    }
    
    int first,t;
    for(int index=0; index<rotate_count; index++)  //to rotate rotate_count times
    {
        first=b[0];
        for(int index1=0; index1<=(i-1); index1++)  //left rotation
        {
           if(index1==(i-1))
           {
              t=b[index1];
              b[index1]=first;
              first=b[index1];
           }
           else
           {
              b[index1]=b[index1+1]; 
           }
        }
    }
     
    for(int index=0; index<i; index++)
    {
        printf("%d",b[index]);
    }
}
