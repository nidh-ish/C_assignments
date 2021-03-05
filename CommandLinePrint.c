#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void minprint(int a, ...) //using variable length arguments
{
   va_list ap;
   va_start(ap, a);
   putchar(va_arg(ap, int));
   va_end(ap); 
}

int main()
{
	char s[10000]; //declaring character array of sufficient size
	
	scanf("%s", s); // scanning the input from user
	
	int l = strlen(s); //finding the length of the input
	
	int i = 0;
	
	while(i < l)
	{
		minprint(l, s[i]); // calling the function minprint using while loop
		i++;
	}
	
	return 0;
}
