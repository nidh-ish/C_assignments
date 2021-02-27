#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int a, b, q;
	
	scanf("%d %d", &a, &b);
	
	a = abs(a);
	b = abs(b);
	
	if(a != 0 && b != 0) {	
		
		if(a > b) {	
			
			while((a % b) != 0) {
				 
				q = a % b;
				a = b;
				b = q;
			}
	
			printf("%d", b);
		}
	
		else if(b > a) {
			
			while((b % a) != 0) {
				
				q = b % a;
				b = a;
				a = q;
			}
			
			printf("%d", a);
		}
	}
	
	else if(a == 0 && b != 0) {
		
		printf("%d", b);
	}
	
	else if(b == 0 && a != 0) {
		printf("%d", a);
        }
        
	else  if(a == 0 && b == 0) {
		printf("Invalid input");
	}
	
	return 0;
}
