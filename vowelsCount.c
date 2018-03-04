#include<stdio.h>
#include<string.h>


int main() {
  char string[100][100];
  char vowels[10]={'a','e','i','o','u'};
  int i=0;
  
  
  while(1)  //read the sentence
  {
      string[i][0]='$';
      scanf("%s",string[i]);
      if(string[i][0]=='$')
      {
          break;
      }
      i++;
  }
  
  char alp[5];
  for(int j=0; j<i; j++)
  {
    for(int k=0; k<strlen(string[j]); k++)
      {
         if(string[j][k]==65 ||  string[j][k]==97)        //for vowel a
         {
             alp[0]=alp[0]+1;
         }
          else if(string[j][k]==69 || string[j][k]==101)  //for vowel e
         { 
             alp[1]=alp[1]+1;
         }
          else if(string[j][k]==73 || string[j][k]==105)  //for vowel i
         {
             alp[2]=alp[2]+1;
         }
          else if(string[j][k]==79 || string[j][k]==111)  //for vowel o
         {
             alp[3]=alp[3]+1;
         }
          else if(string[j][k]==85 || string[j][k]==117)  //for vowel u
         {
             alp[4]=alp[4]+1;
         }
         
      }
  }
  
  for(int j=0; j<5; j++)
  {
      if(alp[j]>=1)
      {
      printf("%c-->",vowels[j]);
      printf("%d\n",alp[j]);
      }
  }
}
