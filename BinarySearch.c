#include<stdio.h>
int main()
{
int i, ar[10],x,f,l,m;  //Declaration of the variables
f = 0;	//First element of array
l = 9;	//Last element of the array
int count=0;
m = (f+l)/2;	//Middle element
int flag = 1, d = 0;
for(i = 0; i<10; i++)	//Input of the array
 {
   scanf("%d,", &ar[i]);
 }
scanf(" %d", &x);	//The number that has to searched using binary operation
while(f<=l)		
  {
   count++;
   if(ar[m]<x)		//Check whether the input number is present in the middle or to the right of it
     f = m + 1;
   else if(ar[m] == x)	//Checks whether the input is equal to the middle element
    {
       printf("%d %d", flag, count);
       break;
    }
   else			//For the case where the input  is present to the left
     l = m - 1;
   m = (f + l)/2;
if(f > l)
  printf("%d %d", d, count);
}
return 0;
}    
         
      
       
      

