#include<stdio.h>

void Bubble_sort(long long int ar[20])  //bubble sort function is defined here
{
	long long int swap;  //here we are declaring an element that needs to be swapped
        int i, j;
	int count = 0, sc = 0;   //declaration of comparisions and swaps
	for(i = 0; i < 20 - 1; i++)
	{
		for(j = 0; j < 20 - i - 1; j++)
		{
			sc++;
			if(ar[j] > ar[j + 1])  //here we compare and swap the respected elements
			{
				count++;
			  	swap = ar[j];
			  	ar[j] = ar[j + 1];
			  	ar[j + 1] = swap;
	         	}
	        } 	
	}
	
	for(i = 0; i < 20; i++)
        {
                printf("%lld ", ar[i]);  //printing the respected sorted array
        }

	printf("\n%d %d", count, sc);
}

int main() {
	
	int i;
	long long int ar[20];
	
	scanf("%lld", &ar[0]);
	
	for(i = 1; i < 20; i++)
	{
		scanf(",%lld", &ar[i]);//scanning the 20 inputs from the user
	}
	
	Bubble_sort(ar);//callling bubble sort function
	
	return 0;
}
