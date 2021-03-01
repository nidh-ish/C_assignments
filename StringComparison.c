/*INPUT - we input two strings(maxlength <= 255)*/
/*OUTPUT - we print 0 if the strings are equal else we print 1*/
#include<stdio.h>
#include<stdlib.h>
int stringcomp(char *str1, char *str2) //declaring the string comapring function which takes two strings as arguments
{
	int flag = 1;                  // initialising a varibale with value 1
	int count = 0, count1 = 0; 
	while((*str1) != '\0')         //loop to calculate the length of the string1
	{
		count ++;
		str1++;               //incrementing the value of pointer 
	}
	str1 = str1 - count;          //redirecting the pointer to its initial value
	while((*str2) != '\0')        //loop to calculate the length of string2
        {
                count1 ++;
                str2++;
        }
        str2  = str2 - count1;
	if(count1 == count)           //check if length of both strings are same
	{
	for(int i = 0; i < count; i ++)
	{
		if(*(str1 + i)==*(str2 + i)) //comparing the characters in both the strings
		{
			flag = 0;            //if strings are equal reinitilalize the value of flag to 0
		}
		else
		{
			break;              // the value of flag reamins the same
		}
	}
	}
	printf("%d", flag);                //priting the output
}
int main()
{
	char *str1 = malloc(sizeof(char)*256);  //allocating dynamic memory space to both the strings using malloc function
        char *str2 = malloc(sizeof(char)*256);
        scanf("%s %s", str1, str2);             //scanning both the strings
        stringcomp(str1,str2);                  //implementing the string comparing function
	free(str1);                             //freeing up the dynamic space before the program ends
	free(str2);
	return 0;
}
