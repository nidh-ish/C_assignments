#include<stdio.h>
#include<stdlib.h>

int strend(char *s, char *t) 					/*declaration of a function that returns 1 if the string t
                              					  occurs at the end of the string s, and zero otherwise */
{
	
	int count1 = 0, count2 = 0; 				/* initializing two count variables 
                                    				   to find length of both the strings */
	while((*s) != '\0') 					//using while loop to find the length of string 1
	{
		count1++;
		s++;
	}
	s = s - count1; 					// returning the pointer to its initial value
	while((*t) != '\0') 					//using while loop to find the length of string 2
	{
		count2++;
		t++;
	}
	t = t - count2; 					// returning the pointer to its intial value
	for(int i = count1 - count2; i <= count1; i++)  	/* checking each character of string2 with string1 
                                                         	  from the index required using for loop */
	{
		if(*(s + i) == *(t + i - count1 + count2))  	// if strings are equal returning 1 to the main function
		{
			return 1;
		}
		else
		{
			return 0;  				// if any single character doesnot match returning 0 
			break;
		}
	}
}
int main()
{
	int flag = 0;
	char *s = malloc(sizeof(char)*256); 			//assigning dynamic memory to the strings
	char *t = malloc(sizeof(char)*256);
	scanf("%s %s", s, t); 					// scanning both the strings
	flag = strend(s, t); 					// calling the function  
        if(flag == 1)
        {
                printf("%s", t); 				// printing the required output i.e., the string 2 in case equal
        }
        else
        {
                printf("0");					 // printing zero in other cases
        }
	free(s);
	free(t);
	return 0;
}
