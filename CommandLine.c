#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) // we define two argumenrts inside main function
{
	if(argc == 4) // the program works if the total count of command line input is equal to 4
	{
		int x = atoi(argv[1]); // conversion of string to integer through atoi function defined in stamdard library
		int y = atoi(argv[2]);
		if(*argv[3] == '+') // checking the vale of operator in command line argument and performing the respecred task
		{
			printf("%d", x+y);
		}
		else if(*argv[3] == '-') // performing the similar task as above
		{
			printf("%d", x-y);
		}
		else if(*argv[3] == '*')
		{
			printf("%d", x*y);
		}
		else if(*argv[3] == '/' && y!=0)
		{
			printf("%d", x/y);
		}
		return 0;
	}
}
