#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) //using command line arguments
{
	int sum = 0;  
	printf("%d", argc - 1); // printing the number of arguments
	for(int i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]); // finding the sum of arguments
	}
	printf(" %d", sum); // printing the value of sum
	return 0;
}

