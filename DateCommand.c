#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	system("date>file1.txt"); 		//using date command in system to save the current date and time in file1
	
	FILE *fp1, *fp2; 			// declaring two file pointers

	fp1 = fopen("file1.txt", "r"); 		// opening the file1 and file2 in read mode respectively
	fp2 = fopen("file2.txt", "r");

	char c;					// declaring a character
	
	while(1)  				// using while loop to read and print the data of file1 character by character
	{
		c = fgetc(fp1); 		// initialising the character to beginning of the file1
		if(c == EOF) 			// when the character reaches the end the loop terminates
		{
			break;
		}
		printf("%c", c);
	}
	system("sleep 5"); 			// delaying the next call of date function by seconds as required by the question
	system("date>file2.txt"); 		// using date command in system to save the current date and time in file2
	c=fgetc(fp2); 
	for(; c != EOF;) 			// this time using for loop to read and print the data of file2 character by character
        {
		printf("%c", c);
                c = fgetc(fp2);
        }
	return 0;
}
