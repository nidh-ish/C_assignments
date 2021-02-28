#include<stdio.h>
int main()
{
	int ar[10];  //here we define an array of 10 integer values 
	int i;  
	for(i = 0; i < 10; i++)
	{
		scanf("%d,", &ar[i]);  //here we scan the 10 integers
	}
	printf("%d", ar[9]);  //here we print the last element first of all as per required by the question
	for(i = 8; i >= 0 ; i--)
	{
		printf(" %d", ar[i]); //the rest of the elements are printed in the same reverse order
	}
	return 0;
}
