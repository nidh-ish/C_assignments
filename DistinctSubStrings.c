/*Input: A string consisting of lower case English alphabets and an integer L.
  Output: The number of distinct sub-strings of length L(>0) of the given string. 
  Remarks: If L>(length of string), then print 0. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char str[2000]; // declaration of string
  int L; // declaration of length to divide the strings into sub-strings
  scanf("%s %d", str, &L);
  char sn[2000][2000]; //declaration of 2-dimensional array
  int len=strlen(str); // calculate the length of the string 
  int k=0;
  if(len<L) //when length of string is less than the taken input
  {
  	printf("0");
  	return 0;
  }
  for(int i=0; i<len-L+1; i++) 
  {
  	for(int j=0; j<L; j++)  //extracting substrings
	{
	  sn[i][j]=str[j+k];
	}
	k++;
  }
  int a[len-L+1];
  for(int c=0; c<len-L+1; c++)
  {
  a[c]=0;
  }
  for(int i=0; i<len-L+1; i++)
  {
  for(int j=i+1; j<len-L+1; j++)
  {
  if(strcmp(sn[i],sn[j])==0)  //comparing if sub-strings are same or different
  {
  a[j]=1; //assigning value=1 to the same strings and those differnet as 0
  }
  }
  }
  int count=0;
  for(int j=0; j<len-L+1; j++)
  {
    if(a[j]==0)
    {
	count++;  //counting total number of different sub-strings
    }
  }
  printf("%d",count); //printing total number of different sub-strings
  return 0;
  }

