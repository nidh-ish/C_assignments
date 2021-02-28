#include<stdio.h>
int main() 
{
	int ar[10];  //here we define array of ten integers
	int i;
	int x;
	int flag = 0;
	
	for(i = 0; i < 10; i++) {
		
		scanf("%d,", &ar[i]); //here we scan all the ten integers and store them in the array
	}
	
	scanf(" %d", &x);  //here we scan the number we need to search for in the array
        
	for(i = 0; i < 10; i++) {
		
		if(x == ar[i]) //here we compare the element with the rest of them one by one and check whether its is same or not
		{
			flag = 1;
			i++;     
			break;
		}
        }
	
	printf("%d %d", flag, i);  //here we print the number 1 if the elemet given is in the array and the number of operations we performed 
	
	return 0;
}
