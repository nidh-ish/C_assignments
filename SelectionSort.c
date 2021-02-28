#include<stdio.h>
void Selection_sort(long long int ar[20])//declaring selection sort function
{
	long long int temp;  //declaring swap variable
	int i, j, min;
        int swap = 0, compar = 0; //declaring count of comparisions and swaps
	for(i = 0; i < 19; i++)
	{
		min = i;
		for(j = i + 1; j < 20; j++)//using loops for finding the minumum element
		{
			compar++;
			if(ar[j] < ar[min])
			{
				min = j;
			}
		}        
			swap++;//swapping the respected elements
		 	temp = ar[min];
		        ar[min] = ar[i];
		        ar[i] = temp;
	}
	for(i = 0; i < 20; i++)//printing the respected sorted array
	{
		printf("%lld ",ar[i]);
	}
	printf("\n%d %d", swap, compar);
}
int main()
{
long long int ar[20];
int i;
for(i = 0; i < 20; i++)
	{
		scanf("%lld,", &ar[i]);//taking input from the user
	}
Selection_sort(ar);//calling selection sort function
return 0;
}
