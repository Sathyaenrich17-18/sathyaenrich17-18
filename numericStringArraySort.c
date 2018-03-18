#include<stdio.h>
#include<string.h>

int main()
{
    char string[100][100];
    char temp[100];
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
    int c;
    
    //comparing the length of the string if equal then compare the strings and if comparision value is lesser than zero then swap ..
    
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
  
    
    for(int j=0; j<i; j++)
    {
        printf("%s ",string[j]);
    }
}
