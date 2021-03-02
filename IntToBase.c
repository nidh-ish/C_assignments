#include<stdio.h>
#include<stdlib.h>

int itob(int n, char *s, int b)                          /* declaring function that converts an integer n into a
                                                            base b character representation to store in the srting s. */
{
	int i = 0;                                      // initialising a variable
	char z[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w','x','y','z'}; // initialising a character array containing all possible character 
	
	while(n > 0)                                   // using while loop to convert the number into base character representation
	{
		if(n%b < 10)                           /* if the value of the base character is less than
                                                          10 then addiing the same to the string in the respected string */
		{
			*(s + i) = n % b + '0';       // using '0' to convert n%b to an character(type casting)
			n = n / b;
			i ++;
		}
		else                                  /* if the value of base character is greater than or equal to 10, 
                                                         then assigning respected character representation to them from 
  			                                 characters we defined in the character array */
		{
			*(s + i) = z[n % b - 10];
			n = n / b;
			i++;
		}
	}
	
	i--;
	
	for(int j = 0; j<= (i / 2); j++)            /* reversing the string using an temp string as the
					               base character represenation is from bottom to top */
        {
                char temp;
		temp = s[j];
		s[j] = s[i - j];
		s[i - j] = temp;
        }
}
int main()
{
	int n, b;                                  // declaring the intenger n and the base it need to be conveerted to i.e., b
	scanf("%d %d", &n, &b);                    // taking the input of both the variables
        char *s = malloc(sizeof(char) * 512);      // initialising dynamic memory to the character string s
	itob(n, s, b);                             // calling the declared function
	printf("%s", s);                           // printning the base character representation
	free(s);
	return 0;
}
