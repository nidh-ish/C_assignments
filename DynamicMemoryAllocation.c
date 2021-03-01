/*INPUT -  we take number of integers to read say n and then we read the value of n integers*/
/*OUTPUT - we  print the n integers we read with space  between them*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;                              //taking the number of integers to read
	scanf("%d", &n);
	int *z = malloc(sizeof(int)*n);     //allocating dynamic memory to store those n integers using malloc function
	for(int i = 0; i < n; i++)
	{
		scanf("%d", (z + i));       //scanning the n integers using loop and assigning them to respective memory space
	}
	for(int j = 0; j < n; j++)
	{
		printf("%d ", *(z + j));    // printing those n integers with space between them
	}
	free(z);
	return 0;
}
