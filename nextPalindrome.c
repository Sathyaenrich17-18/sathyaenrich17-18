#include<stdio.h>
#include<math.h>

void nextPalindrome(int number)
{
    int left, right;
    int arr[1000], temp = number;
    int digit, k=0;
    
     
    
    while(temp > 0)
    {
        digit = temp % 10;
        arr[k++] = digit;
        temp=temp/10;
    }
    k--;
    
    // the elements from 0 to left will be the digits in the second half (since reversed while finding individual digits)
    // the elements from k to right  will be the digits in the first half of the number
    
    left = floor( k/2 );
    right = ceil( k/2 ) + 1;
    int pre=left-1;
    
    // now it checks if the digit in middle is lesser than digit in right then increment the middle (say, 616 )
    // else till it reaches the greater digit traverse till index is '0' and inrement digit when greater than digit in left (say, 254 etc)

    
    if(arr[pre]>arr[left])
    {
        arr[left]= arr[left]+1;
    }
    else
    {
        while(arr[left] > arr[pre] && pre>=0)
       {
              pre--;
              
       }
       
       
       if(arr[left] >arr[pre])
       {
              
             arr[left] = arr[left]+1;
       }
       else
       {
           
             arr[pre] =arr[pre]+1;
       }
    
    }
    
    int sum=0,mf=1;
    
    // Now for the new number calculate the palindrome number by adding the sum iteratively with multiple of tens of individual digits
    
    for(int i=k; i>=left; i--)
    {
        sum = sum + (arr[i]*mf);
        mf = mf*10;
       // printf("%d ",sum);
    }
    
    for(int i=right; i<=k; i++)
    {
        sum = sum + (arr[i]*mf);
        mf= mf*10;
       // printf("%d ",sum);
    }
    
    printf("%d ",sum);
}


int main()
{
    int number;
    scanf("%d ",&number);
    
    nextPalindrome(number);
    return 0;
}
