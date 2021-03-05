#include<stdio.h>
#include<string.h>
int main()
{
	int m, n; // declaring integers to store degree of polynomial 1 and 2 respectively
	scanf("%d", &m); // taking the input of degree of polynomial1
	double ar1[m + 1]; // declaring an array of required size to store the coefficients of polynomial1
	for(int i = 0; i < m + 1; i++) // taking input of coefficients of polynomial1
	{
		scanf("%lf", &ar1[i]);
	}
	scanf("\n%d", &n); // similar procedures as above for polynomial2
	double ar2[n + 1];
	for(int j = 0; j < n + 1; j++)  
	{
		scanf("%lf", &ar2[j]);
	}
	if(m >= n) // if degree of polynomial1 is greater than polynomial2
	{
		printf("Addition: "); // for additon of the two polynomials
		printf("%d ", m); // printnig the degree of final polynomial
		for(int k = 0; k < m - n; k++)  // using for loop to add the coefficients of polynomial1 and polynomial2 of respective degrees
		{
			printf("%.0lf ", ar1[k]);
		}
		for(int l = m - n; l < m + 1; l++)
		{
			printf("%.0lf ", ar1[l] + ar2[l - m + n]);
		}
	}
        else if(n > m) //if degree of polynomial2 is greater than polynomial1
        {
                printf("Addition: ");
                printf("%d ", n);
                for(int k = 0; k < n - m; k++) // similarly repeating the procedures
                {
                        printf("%.0lf ", ar2[k]);
                }
                for(int l = n - m; l < n + 1; l++)
                {
                        printf("%.0lf ", ar2[l] + ar1[l - n + m]);
                }
        }
	printf("\nMultiplication: "); // for multiplication of the two polynomials
	printf("%d ", m + n); // printing the degree of final polynomial
	double ar3[m + n + 1]; // declaring an array of required size for the final polynomial
	memset(ar3, 0, (m + n + 1)*sizeof(ar3[0])); // initialising all elements of final array to zero using memset
	for(int i = 0; i < m + 1; i++)
	{
		for(int j = 0; j < n + 1; j++) // using nested for loop for polynomial multipplication and storing the corresponding values in the final array
		{
			ar3[m + n - i - j] += ar1[i] * ar2[j];
		}
	}
	for(int i = m + n; i >= 0; i--)
	{
		printf("%.0f ", ar3[i]); // printing the final array(multiplication of polynomial1 and polynomial2)
	}
	return 0;
}	 	
