#include<stdio.h>
#include<stdlib.h>

double addition(double x, double y) 				// declaring function to perform addition
{
	return x + y;
}

double subtraction(double x, double y) 				// declaring function to perform subtraction
{
	return x - y;
}

double division(double x, double y) 				// declaring function to perform division
{
	return x / y;
}

double multiplication(double x, double y) 			// declaring function to perform multiplication
{
	return x * y;
}

int main()
{
	double x, y;						 // declaring two variables in which the operation needs to be performed
	char *sym = malloc(sizeof(char) * 10); 			// assingning dynamic memory to the scanned operator(+, -, /, *)
        
	double (*addi)(double, double) = &addition; 		// defininng function pointer for every functions
        double (*subt)(double, double) = &subtraction;
	double (*divi)(double, double) = &division;
	double (*mult)(double, double) = &multiplication;
	
	scanf("%lf %lf %s", &x, &y, sym); 			// taking the input
	
	if((*sym) == '+') 					// checking the value of input operator to find the type of operation needed to be performed
	{
		printf("%.4lf", (*addi)(x, y)); 		// printing the value resulted by the respected operator by calling the function using function pointer
	}
	
	if((*sym) == '-') 					 // performing similar operations as above for different operators
	{
		printf("%.4lf", (*subt)(x, y));
	}
	
	if((*sym) == '/')
	{
		printf("%.4lf", (*divi)(x, y));
	}
	
	if((*sym) == '*')
	{
		printf("%.4lf", (*mult)(x, y));
	}
	
	free(sym);
	
	return 0;
}
