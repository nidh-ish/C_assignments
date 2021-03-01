/*INPUT - we input two strings s1 and s2(maxlength of both < 255)*/
/*OUTPUT - the two strings s1 and s2 are concatenated*/
#include<stdio.h>
#include<stdlib.h>
void stringcnc(char *s1, char *s2, char *s3)   //defining the string conctenate function that takes s1, s2 and s3 as arguments
{
       int count = 0, count1 = 0;
       while((*s1) != '\0')                   //loop for calculating the length of the string1
       {
                count ++;
                s1++;                        // incrementing the value of the pointer
       }
       s1 = s1 - count;                     // again bringing the pointer to its initial value
       while((*s2) != '\0')                //loop for calculating the length of string2
       {
                count1 ++;
                s2++;
       }
       s2  = s2 - count1;
       for(int i = 0; i < count; i++)     //copy the characters of s1 to s3 first using for loop with both of them having same indices
       {
		*(s3 + i) = *(s1 + i);
       } 
       for(int i = count; i < (count + count1); i++)//the index where the s1 ends in s3, from there we begin coyping s2 to s3 where botho have different indices
       {
	       *(s3 + i) = *(s2 + i - count);
       }
       printf("%s", s3);//printing the final string that is conctenated string of s1 and s2
}
int main()
{
        char *s1 = malloc(sizeof(char)*256); // allocating dynamic memory space to the strings using malloc functions
        char *s2 = malloc(sizeof(char)*256);
	char *s3 = malloc(sizeof(char)*1024);
        scanf("%s %s", s1, s2);//scanning both the strings
        stringcnc(s1,s2,s3);//calling the string concatenation function
        free(s1);//freeing up allocated memory space to s1, s2 and s3
        free(s2);
	free(s3);
        return 0;
}
