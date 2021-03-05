#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1, *fp2, *fp3;  //declaring three file pointers
	fp3 = fopen("file3.txt", "w"); // opening file3 in write mode
	fp1 = fopen("file1.txt", "r"); // opening file1 in read mode
	fp2 = fopen("file2.txt", "r"); // opening file2 in read mode
	char c; // declaring a character
	c = fgetc(fp1); // intialising charcter to the beginning of file1
	while(c != EOF) // using while loop to copy contents to file1 to file3
	{
		fputc(c, fp3);
		c = fgetc(fp1);
	}
	c = fgetc(fp2); // intialising charcter to the beginning of file1
        while(c != EOF) // using while loop to copy contents of file2 to file3
        {
                fputc(c, fp3);
                c = fgetc(fp2);
        }
	return 0;
}
